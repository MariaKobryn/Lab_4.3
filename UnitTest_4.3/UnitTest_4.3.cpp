#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_4.3/Array.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest43
{
	TEST_CLASS(UnitTest43)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Array A(5);
			Assert::AreEqual(A.getSize(), 5);

		}
	};
}
