// Name        : dz_1_10_2_double_new_massive.cpp
// Author      : dim
// Version     : 1.1.1
// Copyright   : Your copyright notice
// Description : Double massive new console C++, Ansi-style
// Changes	   :
//============================================================================

#include <iostream>

void print_massive(double* array, int size);
double* create_arr(int size);

//double massive_double(double* array.int size);

int main()
{
	std::cout << std::endl;
	int size_massive_set{0};
	std::cout <<  "ВВедите размер массива: ";
	std::cin >>  size_massive_set;


	double *massive_double = 	create_arr(size_massive_set);



std::cout << "Массив:   ";
print_massive(massive_double,size_massive_set);
std::cout << std::endl;
std::cout << massive_double << std::endl;
std::cout << &massive_double << std::endl;
std::cout << *massive_double << std::endl;
std::cout << std::endl;
delete[] massive_double;
std::cout << "Массив после очистки:   ";
print_massive(massive_double,size_massive_set);
std::cout << std::endl;
std::cout << massive_double[0] << std::endl;
std::cout << massive_double << std::endl;
std::cout << &massive_double << std::endl;
std::cout << *massive_double << std::endl;
std::cout << std::endl;

	return EXIT_SUCCESS;
}


void print_massive(double *array, int size)
 {
  for (int i = 0; i < size; i++)
	{
		std::cout << array[i] << " ";
	}
  std::cout << std::endl;
 }

double* create_arr(int size)
{
	return new double[size]();
}

