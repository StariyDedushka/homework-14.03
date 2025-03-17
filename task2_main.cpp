#include "task2_header.h"

int main() {
	int a = 7;
	int b = 10;
	int c = 8;
	int *ptra = &a;
	int *ptrb = &b;
	int *ptrc = &c;
	std::cout << "Before the swap: " << std::endl;
	std::cout << "a = " << a << "\n" << "b = " << b << "\n" << "c = " << c << "\n";
	
	std::cout << "After the swap: " << std::endl;
	swap(ptra, ptrb, ptrc);
}
