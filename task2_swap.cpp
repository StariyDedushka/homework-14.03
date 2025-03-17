#include "task2_header.h"

int* swap (int *num1, int *num2, int *num3) {
	
	int temp1 = *num1;
	int temp2 = *num2;
	*num1 = *num3;
	*num2 = temp1;
	*num3 = temp2;
	std::cout << "a = " << *num1 << "\n" << "b = " << *num2 << "\n" << "c = " << *num3 << "\n";
	
	return 0;
}
