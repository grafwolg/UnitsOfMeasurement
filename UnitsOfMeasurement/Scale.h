#pragma once
#include "UnitsOfMeasurement.h"




namespace UnitsOfMeasurement
{

	// aktueller Wert := value* basiseinheit* Scale
	public ref class Scale
	{
	public:
		long factor;
		long offset;
	};
}