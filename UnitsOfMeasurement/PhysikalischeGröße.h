#pragma once
#include "UnitsOfMeasurement.h"
#include "CoherentUnit.h"

namespace UnitsOfMeasurement
{
	// Physikalische Größe, Z.b Länge l , Weg s
	public ref class PhysikalischeGröße
	{
	protected:
		char * name;
		char * größenZeichen;
	};
}
