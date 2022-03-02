#pragma once
#include <io.h>
#include <string>
#include <fstream>
#include <iostream>
#include <vector>
#include <algorithm>
#include <array>
#include <ctime>
#include <fcntl.h>
#include <cstdlib>

using namespace std;

class Questions {
public:
	std::string Quest;
	std::string Answers[4];
	std::string CorrectAnswer;
	std::string givenAnswer;
	int questNum;
	int answer = 0;
};

bool readFromFile(Questions* arr);

