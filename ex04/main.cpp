#include <fstream>
#include <iostream>
#include <cstdlib>

void error_func(std::string const & err_str, const char *filename) {
	std::cerr << "replace: ";
	if (filename)
		std::cerr << filename << ": ";
	std::cerr << err_str << std::endl;
	exit(EXIT_FAILURE);
}

char *get_text(const char *filename) {
	std::ifstream ifs(filename);
	if (not ifs.is_open())
		error_func("cannot open input file", filename);
	std::filebuf *fbuf = ifs.rdbuf();
	std::size_t size = fbuf->pubseekoff(0, std::ifstream::end, std::ifstream::in);
	fbuf->pubseekpos(0, std::ifstream::in);
	char *buf = new char[size];
	fbuf->sgetn (buf, size);
	ifs.close();
	return (buf);
}

bool replace(std::string const &s1, std::string const &s2, std::string const &instr, std::string &tmp) {
	static unsigned long startpos;
	unsigned long findpos;

	findpos = instr.find(s1, startpos);
	if (findpos == std::string::npos) {
		tmp += instr.substr(startpos);
		return false;
	}
	tmp += instr.substr(startpos, findpos - startpos);
	tmp += s2;
	startpos = findpos + s1.length();
	return true;
}

int main(int ac, char **av) {
	if (ac < 4)
		error_func("not enough arguments", NULL);
	else if (ac > 4)
		error_func("too much arguments", NULL);
	std::string filename(av[1]);
	char *buf = get_text(filename.c_str());
	filename += ".replace";
	std::ofstream ofs(filename.c_str());
	if (not ofs.is_open())
		error_func("cannot open output file", av[1]);
	std::string instr(buf);
	delete buf;
	std::string tmp;
	std::string s1(av[2]);
	std::string s2(av[3]);
	while (replace(s1, s2, instr, tmp));
	ofs << tmp;
	ofs.close();
}
