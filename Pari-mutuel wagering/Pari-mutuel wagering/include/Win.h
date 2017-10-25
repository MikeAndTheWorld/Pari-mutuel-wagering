#ifndef WIN_H
#define WIN_H

#include "BetTypes.h"

using namespace std;

class Win
{
private:
	int HumanNumber = 48; // turn ascii to int
	int NumCombinations;
	int CurrentNumber;
public:
	Win();
	int WinType(string WinSelectionString);
	bool CheckValid(vector <int> AllHorseNum ,int CurrentNum);
	bool CheckType(int CurrentType);
	string WinString1 = "5";
	string WinString2 = "5,3";
	string WinString3 = "1,3,1";
	string WinString4 = "1/3";
	string WinString5 = "arglebargle";
};

#endif