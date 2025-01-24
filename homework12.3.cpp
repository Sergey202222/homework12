#include <fstream>
#include <iostream>

int main()
{
	setlocale(LC_CTYPE, "rus");
	int size{};
	std::cout << "Введите размер массива: ";
	std::cin >> size;
	int* arr{ new int[size] };
	for (int index{}; index < size; ++index)
	{
		std::cout << "arr[" << index << "] = ";
		std::cin >> arr[index];
	}
	std::ofstream oFile{ "out.txt" };
	oFile << size << '\n';
	for (int index{ size - 1 }; index >= 0; --index)
	{
		 oFile << arr[index] << ' ';
	}
	delete[] arr;
	oFile.close();
	return EXIT_SUCCESS;
}