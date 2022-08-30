//
// Created by Evangelos Vandoros on 30/8/22.
//

#include "Day02.h"

Day02::Day02() :input(Utilities::readLinesFromFile("../inputs/day02.in")){
	Utilities::verifyElseCrash(!input.empty());
	for (const std::string& currentLine: input) {
		// split into 3
		std::vector<std::string> splitLine = Utilities::splitString(currentLine, " ");
		Utilities::verifyElseCrash(splitLine.size() == 3);
		// min-max pos
		std::vector<int> positions;
		std::string positionsAsString = splitLine[0];
		for (const std::string& positionAsString: Utilities::splitString(positionsAsString, "-"))
			positions.push_back(std::stoi(positionAsString));
		passwords.push_back(PasswordPolicy {splitLine[2], positions[0], positions[1], splitLine[1][0]});
	}
}

void Day02::solutionPart1() {
	std::cout << "Solution for Day 2, Part 1:" << "\n";
	std::cout << countValidPasswordsPart1() << "\n";
}

void Day02::solutionPart2() {
	std::cout << "Solution for Day 2, Part 2:" << "\n";
	std::cout << countValidPasswordsPart2() << "\n";
}

int Day02::countValidPasswordsPart1() {
	int validPasswords = 0;
	for (auto& password: passwords) {
//		int l = static_cast<int>(std::count(password.password.begin(), password.password.end(), password.policyCharacter));
		auto l = std::count(password.password.begin(), password.password.end(), password.policyCharacter);
		if (password.minPos <= l && l <= password.maxPos)
			validPasswords++;
	}
	return validPasswords;
}

int Day02::countValidPasswordsPart2() {
	int validPasswords = 0;
	for (auto& password: passwords) {
		if (password.password[password.minPos - 1] == password.policyCharacter ^ password.password[password.maxPos - 1] == password.policyCharacter)
			++validPasswords;
	}
	return validPasswords;
}

