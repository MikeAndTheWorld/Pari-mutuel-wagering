#include "Win.h"

using namespace std;
Win::Win()
{

}
bool Win::CheckValid(vector<int> AllHorseNum, int CurrentNum)
{
	for (size_t i = 0; i < AllHorseNum.size(); i++) // loop vector
	{
		if (AllHorseNum.at(i) == CurrentNum) // if the number is in the vector already
		{
			return false; // not valid
		}
	}
	return true;
}
bool Win::CheckType(int CurrentType)
{
	if ((CurrentType == 44) || (CurrentType <= 57) && (CurrentType > 48)) // ' , ' or number to pass to see if it's valid
	{
		return true;
	}
	return false;
}
int Win::WinType(string WinSelectionString)
{
	vector <int> AllHorseNumbers; //bets on all the horses
	
	for (size_t i = 0; i < WinSelectionString.length(); i++) // read the string
	{
		if (CheckType(WinSelectionString.at(i)) == true)
		{
			if ((WinSelectionString.at(i) <= 57) && (WinSelectionString.at(i) > 48)) // it's a number (ascii) if maths is needed ascii otherwise use char
			{
				cout << "bets: " << WinSelectionString.at(i) << endl;
				CurrentNumber = WinSelectionString.at(i) - HumanNumber; //ascii back to readable number
				if (CheckValid(AllHorseNumbers, CurrentNumber) == true) //check if the number is not the same
				{
					AllHorseNumbers.push_back(CurrentNumber); // add number
				} 
			}
		}
		else
		{
			return 0; // returns 0 combinations
		}
	}
	NumCombinations = AllHorseNumbers.size(); // the number of combinations is the amount of horses bet on
	return NumCombinations; // returns the number of combinations
}