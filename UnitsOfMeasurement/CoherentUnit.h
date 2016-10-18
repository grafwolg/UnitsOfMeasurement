#pragma once
#include "UnitsOfMeasurement.h"


namespace UnitsOfMeasurement
{

	public ref class Units
	{

	};


	public ref class CoherentUnit
	{
	public:
		//char* getName();
		//char* getSymbol();
		virtual	Units unitsAvailable() = 0;
	private:
		char* name;
	};




}