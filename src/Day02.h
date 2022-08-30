#pragma once
//
// Created by Evangelos Vandoros on 30/8/22.
//

#ifndef ADVENT_CPP_2020_DAY02_H
#define ADVENT_CPP_2020_DAY02_H

#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include "../utils/Utilities.h"

class Day02 {

private:
	std::vector<std::string> input;
	struct PasswordPolicy {
		std::string password;
		int minPos;
		int maxPos;
		char policyCharacter;
	};
	std::vector<PasswordPolicy> passwords;

public:
	Day02();
	void solutionPart1();
	void solutionPart2();
	int countValidPasswords();
};

#endif //ADVENT_CPP_2020_DAY02_H
