// Name        : dz_1_10_3_quadro_massive.cpp
// Author      : dim
// Version     : 1.1.1
// Copyright   : Your copyright notice
// Description : Two dimension massive new console C++, Ansi-style
// Changes	   :
//============================================================================

#include <iostream>


int** create_two_dim_array(int rowses, int columns);
void delete_two_dim_array(int** arr, int rowses, int columns);
void fill_two_dim_array(int** arr, int rowses, int columns);
void print_two_dim_array(int** arr, int rowses, int columns);

//double massive_double(double* array.int size);

int main()
{
	std::cout << std::endl;

	int rows_set{0};
	std::cout <<  "Введите количество строк: ";
	std::cin >>  rows_set;
	std::cout << std::endl;

	int cols_set{0};
	std::cout <<  "Введите количество столбцов: ";
	std::cin >>  cols_set;
	std::cout << std::endl;

	int** quadro = create_two_dim_array(rows_set,cols_set);
	fill_two_dim_array(quadro,rows_set,cols_set);
	std::cout << "Таблица умножения:" << std::endl;
	print_two_dim_array(quadro,rows_set,cols_set);
	delete_two_dim_array(quadro,rows_set,cols_set);



	return EXIT_SUCCESS;
}



double* create_arr(int size)
{
	return new double[size]();
}
int** create_two_dim_array(int rowses, int columns)
{
	int rows = rowses, cols = cols;
	int** arr = new int*[rows];
	for (int i = 0; i < rows; i++)
		{
			arr[i] = new int[cols];
		}
	return arr;
}

void delete_two_dim_array(int** arr, int rowses, int columnss)
{

	for (int i = 0; i < rowses; i++)
	{
		delete[] arr[i];
	}
	delete[] arr;
	//return 0;

}

void fill_two_dim_array(int** arr, int rowses, int columns){

	for (int i = 0; i < rowses; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			arr[i][j] = (1 + i) * (1 + j);
		}
	}
	//return 0;
}

void print_two_dim_array(int** array, int rowses, int columns){

	for (int i = 0; i < rowses; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			std::cout << array[i][j] << "\t";
		}
		std::cout << std::endl;
	}
	//return 0;
}

