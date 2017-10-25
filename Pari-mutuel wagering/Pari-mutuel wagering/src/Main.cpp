#include <iostream>
#include <math.h>
#include <string>
//classes
#include "BetTypes.h"
#include "Exacta.h"
#include "Win.h"

using namespace std;

int main()
{
	Win win;
	cout << "Win Type" << "  Combinations : " << win.WinType(win.WinString1) << endl << endl;
	cout << "Win Type" << "  Combinations : " << win.WinType(win.WinString2) << endl << endl;
	cout << "Win Type" << "  Combinations : " << win.WinType(win.WinString3) << endl << endl;
	cout << "Win Type" << "  Combinations : " << win.WinType(win.WinString4) << endl << endl;
	cout << "Win Type" << "  Combinations : " << win.WinType(win.WinString5) << endl << endl;

	Exacta exacta;
	cout << "Exacta Type" << "  Combinations : " << exacta.ExactaType(exacta.ExactaString1) << endl << endl ;
	cout << "Exacta Type" << "  Combinations : " << exacta.ExactaType(exacta.ExactaString2) << endl << endl ;
	cout << "Exacta Type" << "  Combinations : " << exacta.ExactaType(exacta.ExactaString3) << endl << endl ;
	cout << "Exacta Type" << "  Combinations : " << exacta.ExactaType(exacta.ExactaString4) << endl << endl ;
	cout << "Exacta Type" << "  Combinations : " << exacta.ExactaType(exacta.ExactaString5) << endl << endl ;
	cout << "Exacta Type" << "  Combinations : " << exacta.ExactaType(exacta.ExactaString6) << endl << endl ;
	cout << "Exacta Type" << "  Combinations : " << exacta.ExactaType(exacta.ExactaString7) << endl << endl ;

	cin.get();
	return 0;
}
