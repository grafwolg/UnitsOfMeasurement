#include "stdafx.h"
// benötigt in Properties
// 1. Common- Projekt-Referenz
// 2. Compiler - Additional using direktories auf ... achtung ... ..\debug   also das gemeinsame debug - dir
// 2. Linker - Additional using direktories auf ... achtung ... ..\debug   also das gemeinsame debug - dir
#using <UnitsOfMeasurement.dll>

using namespace System;
using namespace System::Text;
using namespace System::Collections::Generic;
using namespace Microsoft::VisualStudio::TestTools::UnitTesting;

namespace UnitsOfMeasurementTest
{

	/*Basis-Integrationstests, nur ob Projekt richtig aufgesetzt wurde
	*/
	[TestClass]
	public ref class BasisIntegrationsTest
	{
	private:
		TestContext^ testContextInstance;

	public:
		/// <summary>
		///Gets or sets the test context which provides
		///information about and functionality for the current test run.
		///</summary>
		property Microsoft::VisualStudio::TestTools::UnitTesting::TestContext^ TestContext
		{
			Microsoft::VisualStudio::TestTools::UnitTesting::TestContext^ get()
			{
				return testContextInstance;
			}
			System::Void set(Microsoft::VisualStudio::TestTools::UnitTesting::TestContext^ value)
			{
				testContextInstance = value;
			}
		};

#pragma region Additional test attributes
		//
		//You can use the following additional attributes as you write your tests:
		//
		//Use ClassInitialize to run code before running the first test in the class
		//[ClassInitialize()]
		//static void MyClassInitialize(TestContext^ testContext) {};
		//
		//Use ClassCleanup to run code after all tests in a class have run
		//[ClassCleanup()]
		//static void MyClassCleanup() {};
		//
		//Use TestInitialize to run code before running each test
		//[TestInitialize()]
		//void MyTestInitialize() {};
		//
		//Use TestCleanup to run code after each test has run
		//[TestCleanup()]
		//void MyTestCleanup() {};
		//
#pragma endregion 

		/*
		basistest um festzustellen ob dll integration klappt
		*/
		[TestMethod]
		void integrationTest()
		{
			UnitsOfMeasurement::Class1 instance;
			int returnvalue = instance.metho1();
			Assert::IsNotNull(returnvalue);
		};
	};
}
