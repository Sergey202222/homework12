#include <iostream>
#include <fstream>

int main()
{   
    std::ifstream iFile{ "in.txt" };
    if (iFile.is_open())
    {
        int rows{}, columns{};
        iFile >> rows >> columns;
        int** matrix{ new int* [rows] };
        for (int row{}; row < rows; ++row)
        {
            matrix[row] = new int[columns];
            for (int column{}; column < columns; ++column)
            {
                iFile >> matrix[row][column];
            }
        }

        for (int row{}; row < rows; ++row)
        {
            for (int column{columns - 1}; column >= 0; --column)
            {
                std::cout << matrix[row][column] << ' ';
            }
            std::cout << '\n';
        }

        for (int row{}; row < rows; ++row)
        {
            delete[] matrix[row];
        }
        delete[] matrix;
        return EXIT_SUCCESS;
    }
    else
    {
        return EXIT_FAILURE;
    }
}