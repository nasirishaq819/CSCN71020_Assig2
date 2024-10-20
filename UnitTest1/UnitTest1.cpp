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
			int length = 10;
			int width = 20;

			int expectedPerimeter = 60;

			int result = getPerimeter(&length, &width);

			Assert::AreEqual(expectedPerimeter, result);

		}

		TEST_METHOD(Test_Area) {

			int length = 20;
			int witdth = 10;

			int expectedArea = 200;

			int result = getArea(&length, &witdth);
			Assert::AreEqual(expectedArea, result);


		}

		TEST_METHOD(Test_Length_valid) {

			int length = 0;
			int input = 30;
			setLength(input, &length);
			Assert::AreEqual(30, length);

		}

		TEST_METHOD(Test_lenght_belowValid) {

			int lenght = 10;
			int input = -1;
			setLength(input, &lenght);
			Assert::AreEqual(10, lenght);
		}

		TEST_METHOD(TestLenght_AboveValid) {
			int lenght = 10;
			int input = 101;
			setLength(input, &lenght);
			Assert::AreEqual(10, lenght);
		}
		TEST_METHOD(Test_width_Valid) {
			int width = 0;
			int input = 30;
			setWidth(input, &width);
			Assert::AreEqual(30, width);
		}
		TEST_METHOD(Test_width_BelowValid) {
			int width = 30;
			int input = 0;
			setWidth(input, &width);
			Assert::AreEqual(30, width);
		}
		TEST_METHOD(Test_width_AboveValid) {
			int width = 20;
			int input = 102;
			setWidth(input, &width);
			Assert::AreEqual(20, width);
		}






	};

}
