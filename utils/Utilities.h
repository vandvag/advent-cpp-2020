#pragma once
#ifndef ADVENT_CPP_2020_UTILITIES_H
#define ADVENT_CPP_2020_UTILITIES_H

#include <vector>
#include <string>
#include <filesystem>
#include <fstream>
#include <cassert>

class Utilities {
	// Read all lines from an input file and store them in a vector
	static std::vector<std::string> readLinesFromFile(const std::filesystem::path& path);
	// Utility function that crashes the program if something unexpected happened
	static void verifyElseCrash(bool bAssert);
	// Split a string based on a delimiter (because for some reason standard library doesn't have an implementation)
	static std::vector<std::string> splitString(const std::string& input, const std::string& delimiter)

};

#endif //ADVENT_CPP_2020_UTILITIES_H
