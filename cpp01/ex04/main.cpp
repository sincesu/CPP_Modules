#include <iostream>
#include <fstream>
#include <string>

int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cerr << "Usage: <program_name> <filename> <s1> <s2>" << std::endl;
		return 1;
	}
	std::ifstream file(av[1]);
	if (!file.is_open())
	{
		std::cerr << "File can't open!" << std::endl;
		return 1; 
	}

	std::string s0 = av[1];
	std::string s1 = av[2];
	std::string s2 = av[3];
	std::string new_filename = s0 + ".replace"; 
	std::ofstream newfile(new_filename.c_str());
	if (!newfile.is_open())
	{
		std::cerr << "File can't open!" << std::endl;
		return 1;
	}

	std::string line;
	size_t to_find = 0;
	int start_pos;

	while (std::getline(file,line))
	{
		start_pos = 0;
		to_find = 0;
		line.push_back('\n');
		while (1)
		{
			to_find = line.find(s1, start_pos);
			if (to_find == std::string::npos)
				break;
			line.erase(to_find, s1.length());
			line.insert(to_find, s2);
			start_pos = to_find + s2.length();
		}
		newfile << line;
		std::cout<<line;
	}
	file.close();
	return 0;
}