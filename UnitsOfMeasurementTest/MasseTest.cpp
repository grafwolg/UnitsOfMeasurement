#include "stdafx.h"
#using <UnitsOfMeasurement.dll>
using namespace System;
using namespace System::Text;
using namespace System::Collections::Generic;
using namespace	Microsoft::VisualStudio::TestTools::UnitTesting;
using namespace UnitsOfMeasurement;

namespace UnitsOfMeasurementTest
{
	[TestClass]
	public ref  class MasseTest
	{
	public:
		[TestMethod]
		void baseCreationMasse()
		{
			Masse m(4L);
			Kilogramm kg;
			Mass m2(4L, kg);



		}
	};
}
