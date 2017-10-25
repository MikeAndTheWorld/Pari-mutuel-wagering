#ifndef EXACTA_H
#define EXACTA_H

#include "BetTypes.h"

using namespace std;

class Exacta
{
private:

	int HumanNumber = 48; // turn ascii to int
	int NumCombinations;
	int CurrentNumber;
public:
	Exacta();
	int ExactaType(string ExactaSelectionString);
	bool CheckValid(vector <int> AllHorseNum, int CurrentNum);
	bool CheckType(int CurrentType);
	bool CheckSlash(int Slash);
	string ExactaString1 = "3/5";
	string ExactaString2 = "3,4/7";
	string ExactaString3 = "3/5,7";
	string ExactaString4 = "3,4/5,7";
	string ExactaString5 = "1,2,3/5,6";
	string ExactaString6 = "1,2/1,2";
	string ExactaString7 = "6/6";
};

#endif