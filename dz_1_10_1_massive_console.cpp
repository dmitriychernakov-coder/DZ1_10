// Name        : dz_1_10_1_massive_konsole.cpp
// Author      : dim
// Version     : 1.1.1
// Copyright   : Your copyright notice
// Description : Massive console C++, Ansi-style
// Changes	   :
//============================================================================

#include <iostream>

void print_massive(int* array, int size);

int main()
{
	std::cout << std::endl;
	int size_massive_set{0};
	std::cout <<  "ВВедите размер массива: ";
	std::cin >>  size_massive_set;
	int *massive_size = new int [size_massive_set];
//	int massive[massive_size];
//	std::cout << "\n";


	for (int i = 0; i < size_massive_set; i++)
	{
		int number{0};
//		std::cout <<  "ВВедите целое число: ";
		std::cout << "massive[" << i << "] = ";//<< number << std::endl;
		std::cin >>  number;
		massive_size[i] =  number;

	}

//std::cout << "\n";
std::cout << "Введённый массив:   ";
print_massive(massive_size,size_massive_set);
std::cout << std::endl;
std::cout << massive_size << std::endl;
std::cout << &massive_size << std::endl;
std::cout << *massive_size << std::endl;
std::cout << &print_massive << std::endl;
std::cout << *print_massive << std::endl;
std::cout << std::endl;
delete[] massive_size;



	return EXIT_SUCCESS;
}


void print_massive(int *array, int size)
 {
  for (int i = 0; i < size; i++)
	{
		std::cout << array[i] << " ";
	}
  std::cout << std::endl;
 }

