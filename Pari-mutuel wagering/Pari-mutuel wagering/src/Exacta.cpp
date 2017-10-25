#include "Exacta.h"

using namespace std;

Exacta::Exacta()
{

}
bool Exacta::CheckValid(vector<int> AllHorseNum, int CurrentNum)
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

bool Exacta::CheckType(int CurrentType)
{
	if ((CurrentType == 44) || (CurrentType == 47) || (CurrentType <= 57) && (CurrentType > 48)) // ' , ' or ' / ' or number to pass to see if it's valid
	{
		return true;
	}
	return false;
}
bool Exacta::CheckSlash(int Slash) // has a slash
{
	if (Slash == 47)
	{
		return true;
	}
	return false;
}
int Exacta::ExactaType(string ExactaSelectionString)
{
	NumCombinations = 0;
	vector <int> AllHorse1st; //bets on 1st place
	vector <int> AllHorse2nd; //bets on 2nd place
	bool isBefore = true;
	for (size_t i = 0; i < ExactaSelectionString.length(); i++) // read the string
	{
		if (CheckType(ExactaSelectionString.at(i)) == true) // is it a valid input / , or numbers
		{
				// 1st place
			if ((ExactaSelectionString.at(i) <= 57) && (ExactaSelectionString.at(i) > 48) && (isBefore == true)) // it's a number (ascii) if maths is needed ascii otherwise use char
			{
				cout << "bets on 1st place: " << ExactaSelectionString.at(i) << endl;
				CurrentNumber = ExactaSelectionString.at(i) - HumanNumber; //ascii back to readable number
				if (CheckValid(AllHorse1st, CurrentNumber) == true)
				{
					
					AllHorse1st.push_back(CurrentNumber); // 1st place
				}
			}
			if (CheckSlash(ExactaSelectionString.at(i)) == true || isBefore == false) // has a slash or 2nd place
			{
				isBefore = false;
				//2nd place
				if ((ExactaSelectionString.at(i) <= 57) && (ExactaSelectionString.at(i) > 48)) // it's a number (ascii) if maths is needed ascii otherwise use char
				{
					cout << "bets on 2nd place: " << ExactaSelectionString.at(i) << endl;
					CurrentNumber = ExactaSelectionString.at(i) - HumanNumber; //ascii back to readable number
					if (CheckValid(AllHorse2nd, CurrentNumber) == true)
					{
						AllHorse2nd.push_back(CurrentNumber); // 2st place
					}
				}
			}
		}
		else
		{
			return 0; // returns 0 combinations
		}
	}
	for (size_t i = 0; i < AllHorse1st.size(); i++)
	{
		for (size_t j = 0; j < AllHorse2nd.size(); j++)
		{
			if (AllHorse1st.at(i) != AllHorse2nd.at(j))
			{
				NumCombinations++;
			}
		}
	}
	//NumCombinations = AllHorseNumbers.size(); // the number of combinations is the amount of horses bet on
	return NumCombinations; // returns the number of combinations
}