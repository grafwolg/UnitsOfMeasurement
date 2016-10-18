#pragma once
#include "UnitsOfMeasurement.h"
#include "PhysikalischeGr��e.h"



namespace UnitsOfMeasurement
{
	///<summary> die Dimensionen, nicht die Physikalischen Gr��en !!!</summary>
	/// @see https://de.wikipedia.org/wiki/Dimension_%28Gr%C3%B6%C3%9Fensystem%29
	/// PhysikalischeGr��e 	Dimension 	Koh�renteEinheit
	/// L�nge l         	L�nge L 	Meter (m)
	template<class PHYSICALUNIT, class COHERENTUNIT> public ref class Dimension
	{
	public:
		PhysikalischeGr��e physikalischeGr��e;
		CoherentUnit coherentUnit;

		Dimension()
		{

		}

		~Dimension()
		{

		}
	};
}