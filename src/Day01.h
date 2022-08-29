#pragma once
#ifndef ADVENT_CPP_2020_DAY01_H
#define ADVENT_CPP_2020_DAY01_H

#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include "../utils/Utilities.h"

class Day01 {
private:
	std::vector<std::string> input;
public:
	Day01();
	void solutionPart1();
	void solutionPart2();
	int twoSum(int targetSum);
};

#endif //ADVENT_CPP_2020_DAY01_H
