#include <fstream>
#include <iostream>

int main()
{

	std::ifstream iFile{ "in.txt" };
	if (iFile.is_open())
	{
		int size{};
		iFile >> size;
		int* arr{ new int[size] };
		for (int index{}; index < size; ++index)
		{
			iFile >> arr[index];
		}
		for (int index{size - 1}; index >= 0; --index)
		{
			std::cout << arr[index] << ' ';
		}
		delete[] arr;
		iFile.close();
		return EXIT_SUCCESS;
	}
	else
	{
		return EXIT_FAILURE;
	}
}