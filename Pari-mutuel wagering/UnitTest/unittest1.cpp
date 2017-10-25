#include "stdafx.h"
#include "CppUnitTest.h"
#include "../Pari-mutuel wagering/include/Exacta.h"
#include "../Pari-mutuel wagering/include/Win.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{		
	//Win test
	TEST_CLASS(WinCombination)
	{
	public:

		Win winTest = Win();
		TEST_METHOD(ConstantVariable)
		{
			Assert::AreEqual(1, 1);
		}
		TEST_METHOD(WinString1)
		{
			Assert::AreEqual(winTest.WinType(winTest.WinString1),1); // does string test 1 return 1 combination
		}
		TEST_METHOD(WinString2)
		{
			Assert::AreEqual(winTest.WinType(winTest.WinString2), 2);
		}
		TEST_METHOD(WinString3)
		{
			Assert::AreEqual(winTest.WinType(winTest.WinString3), 2);
		}
		TEST_METHOD(WinString4)
		{
			Assert::AreEqual(winTest.WinType(winTest.WinString4), 0);
		}
		TEST_METHOD(WinString5)
		{
			Assert::AreEqual(winTest.WinType(winTest.WinString5), 0);
		}
	};
	// Exacta test
	TEST_CLASS(ExactaCombination)
	{
	public:

		Exacta exactaTest = Exacta();
		TEST_METHOD(ConstantVariable)
		{
			Assert::AreEqual(1, 1);
		}
		TEST_METHOD(ExactaString1)
		{
			Assert::AreEqual(exactaTest.ExactaType(exactaTest.ExactaString1), 1); // does string test 1 return 1 combination
		}
		TEST_METHOD(ExactaString2)
		{
			Assert::AreEqual(exactaTest.ExactaType(exactaTest.ExactaString2), 2);
		}
		TEST_METHOD(ExactaString3)
		{
			Assert::AreEqual(exactaTest.ExactaType(exactaTest.ExactaString3), 2);
		}
		TEST_METHOD(ExactaString4)
		{
			Assert::AreEqual(exactaTest.ExactaType(exactaTest.ExactaString4), 4);
		}
		TEST_METHOD(ExactaString5)
		{
			Assert::AreEqual(exactaTest.ExactaType(exactaTest.ExactaString5), 6);
		}
		TEST_METHOD(ExactaString6)
		{
			Assert::AreEqual(exactaTest.ExactaType(exactaTest.ExactaString6), 2);
		}
		TEST_METHOD(ExactaString7)
		{
			Assert::AreEqual(exactaTest.ExactaType(exactaTest.ExactaString7), 0);
		}
	};
}