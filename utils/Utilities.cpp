//
// Created by Evangelos Vandoros on 29/8/22.
//

#include "Utilities.h"

std::vector<std::string> Utilities::readLinesFromFile(const std::filesystem::path& path) {
	// ensure that path exists
	verifyElseCrash(std::filesystem::exists(path));
	std::ifstream fileStream(path);
	std::string currentLine;
	std::vector<std::string> allLines;

	while (std::getline(fileStream, currentLine)) {
		allLines.push_back(currentLine);
	}
	return allLines;
}

void Utilities::verifyElseCrash(bool bAssert) {
	assert(bAssert);

	if (!bAssert) {
		std::terminate();
	}
}

std::vector<std::string> Utilities::splitString(const std::string& input, const std::string& delimiter) {
	std::vector<std::string> tokens;
	size_t nextTokenStart = 0;
	while (nextTokenStart < input.size()) {
		size_t delimiterStart = input.find(delimiter, nextTokenStart);
		if (delimiterStart == std::string::npos) {
			delimiterStart = input.size();
		}
		std::string token = input.substr(nextTokenStart, delimiterStart - nextTokenStart);
		tokens.push_back(token);

		nextTokenStart = delimiterStart + delimiter.size();
	}
	return tokens;
}

