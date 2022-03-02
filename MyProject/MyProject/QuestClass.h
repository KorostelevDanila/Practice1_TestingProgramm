#pragma once
#include <string>
#include <fstream>
#include <iostream>
#include <vector>
#include <algorithm>
#include <array>
#include <ctime>
#include <cstdlib>

using namespace std;

class Questions {
public:
	std::string Quest;
	std::string Answers[4];
	std::string CorrectAnswer;
	std::string givenAnswer;
	int questNum;
};

bool readFromFile(Questions* arr);

