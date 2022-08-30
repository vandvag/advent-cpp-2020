//
// Created by Evangelos Vandoros on 29/8/22.
//

#include "Day01.h"

void Day01::solutionPart1() {
	std::cout << "Solution to Part 1: " << "\n";
	std::cout << twoSum(2020) << "\n";
}

void Day01::solutionPart2() {
	std::cout << "Solution to Part 2: " << "\n";
	std::cout << threeSum(2020) << "\n";
}

Day01::Day01()
:input(Utilities::readLinesFromFile("../inputs/day01.in")){
}


int Day01::twoSum( int targetSum) {
	std::unordered_map<int, unsigned int> elementToIndex;

	for (unsigned int i = 0; i < input.size(); ++i) {
		int number = std::stoi(input[i]);
		int difference = targetSum - number;
		// check if number is in the map
		if (!(elementToIndex.find(difference) == elementToIndex.end())) {
			return number * std::stoi(input[elementToIndex.at(difference)]);
		}
		elementToIndex.insert({number, i});
	}
	return 0;
}

int Day01::threeSum(int targetSum) {
	for (const std::string& numberAsString: input) {
		int number = std::stoi(numberAsString);
		int difference = targetSum - number;
		int productOfOtherNumbers = twoSum(difference);
		if (productOfOtherNumbers != 0) {
			return number * productOfOtherNumbers;
		}
	}
	return 0;
}
