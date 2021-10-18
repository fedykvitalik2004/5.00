#include "pch.h"
#include "CppUnitTest.h"
#include "../5.00.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double u;
			u = (g(1, 1) + (1 + pow(g(0, 1), 2)) * (1 + pow(g(0, 1), 2))) / (1 + pow(g(1, 1), 3));
			Assert::AreEqual(u, 0, 25);
		}
	};
}
