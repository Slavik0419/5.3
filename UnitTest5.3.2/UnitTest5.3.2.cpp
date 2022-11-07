#include "pch.h"
#include "CppUnitTest.h"
#include "../5.3/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest532
{
	TEST_CLASS(UnitTest532)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double t;
		t=z(0);
		Assert::AreEqual(t,1.0);
		}
	};
}
