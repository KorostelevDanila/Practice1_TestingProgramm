#include "QuestClass.h"
#include <ctime>
#include <cstdlib>

bool readFromFile(Questions* arr) {
	std::ifstream in("questions.bin", ios::binary);

	if (!in) {
		return false;
	}
	else {
		for (int k = 0; k < 10; k++) {
			getline(in, (arr + k)->Quest);
			getline(in, (arr + k)->Answers[0]);
			getline(in, (arr + k)->Answers[1]);
			getline(in, (arr + k)->Answers[2]);
			getline(in, (arr + k)->Answers[3]);
			getline(in, (arr + k)->CorrectAnswer);
		}
		return true;
	}
}