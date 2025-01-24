#include <fstream>
#include <iostream>
#include <Windows.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	std::ifstream iFile{ "in.txt" };
	if (iFile.is_open())
	{
		std::string strIfile{""};
		while (!iFile.eof())
		{
			iFile >> strIfile;
			std::cout << strIfile << '\n';
	    }
		iFile.close();
		return EXIT_SUCCESS;
	}
	else
	{
		return EXIT_FAILURE;
	}
}