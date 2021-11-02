#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab-6.2.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int B[4] = {2,4,1,-2};
			int S = SumArr(B, 4);
			Assert::AreEqual(S, 4);
		}
	};
}
