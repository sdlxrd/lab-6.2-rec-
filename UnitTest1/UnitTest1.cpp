#include "pch.h"
#include "CppUnitTest.h"
#include<C:\Users\Misha\source\repos\lab 6.2(rec)\lab 6.2(rec)\lab 6.2(rec).cpp>
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int i;
			i = 13 * 15;
			int p = abs(i % 13);
			Assert::AreEqual(p, 0);
		}
	};
}
