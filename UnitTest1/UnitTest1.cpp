#include "pch.h"
#include "CppUnitTest.h"
extern "C"
{
#include "../BCSRec/main.h"
	
}
extern "C"
{
	void setLength(int input, int* length);
	void setWidth(int input, int* width);
	int getPerimeter(int* length, int* width);
	int getArea(int* length, int* width);
	void printWelcomeMenu();
	void printOptions();
	int getIntInput(char message[]);
}

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(Test_Perimeter)
		{
			int lenght = 15;
			int width = 10;

			int expectedPerimeter = 50;

			int result = getPerimeter(&lenght, &width);

			Assert::AreEqual(expectedPerimeter, result);

		}

		TEST_METHOD(Test_Area) {

			int length = 15;
			int witdth = 10;

			int expectedArea = 150;

			int result = getArea(&length, &witdth);
			Assert::AreEqual(expectedArea, result);


		}
	};

}
