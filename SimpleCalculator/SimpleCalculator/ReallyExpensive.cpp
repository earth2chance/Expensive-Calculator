#include <iostream>
#include <string>

int a;

int main()
{
	int aFirst, bSecond, cAdd, dSubtract, eDivide, fMultiply, gRemainder;
	std::string nameString;

	std::cout << "What is your name: ";
	std::cin >> nameString;

	std::cout << "Enter a number: ";
	std::cin >> aFirst; 

	std::cout << "Enter a second number: ";
	std::cin >> bSecond;

	cAdd = aFirst + bSecond;
	dSubtract = aFirst - bSecond;
	eDivide = aFirst / bSecond;
	fMultiply = aFirst * bSecond;
	gRemainder = aFirst % bSecond;
	
	std::cout << "The sum of " << aFirst << " + " << bSecond << " = " << cAdd << std::endl;
	std::cout << "The difference of " << aFirst << " - " << bSecond << " = " << dSubtract << std::endl;
	std::cout << "The quotient of " << aFirst << " / " << bSecond << " = " << eDivide << std::endl;
	std::cout << "The product of " << aFirst << " * " << bSecond << " = " << fMultiply << std::endl;
	std::cout << "The remainder of " << aFirst << " % " << bSecond << " = " << gRemainder << std::endl;

	

}