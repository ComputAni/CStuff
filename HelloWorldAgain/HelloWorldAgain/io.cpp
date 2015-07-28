#include "stdafx.h"
#include <iostream>


int readNumber() {
	std::cout << "Please enter a number." << std::endl;
	int x;
	std::cin >> x;
	return x;
}

void writeAnswer(int result) {
	std::cout << "The result is: " << result << std::endl;
	return;
}