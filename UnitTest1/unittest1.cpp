#include "stdafx.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			// TODO: Your test code here
			Assert::AreEqual(1, 1);
			Assert::AreNotEqual(1, 0);
		}
		TEST_METHOD(TestMethod2)
		{
			// TODO: Your test code here
			Assert::AreEqual(2, 2);
			Assert::AreNotEqual(1, 0);
		}
	};
}