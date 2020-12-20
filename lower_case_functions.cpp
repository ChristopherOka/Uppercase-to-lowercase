
#include "lower_case_functions.h"
#include <iostream>
#include <string>

void lower_case() {
	std::string input;
	std::string output;

	std::cout << "Enter all uppercase letters and this program will turn them all into lowercase: ";
	std::cin >> input;
	std::cout << std::endl;
	for (int i = 0; i < input.length(); ++i) {
		output += " ";
		output[i] = input[i] + 32;
	}
	std::cout << output << std::endl;
	} 