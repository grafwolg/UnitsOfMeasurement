#pragma once
#include "UnitsOfMeasurement.h"
#include "PhysikalischeGröße.h"



namespace UnitsOfMeasurement
{
	///<summary> die Dimensionen, nicht die Physikalischen Größen !!!</summary>
	/// @see https://de.wikipedia.org/wiki/Dimension_%28Gr%C3%B6%C3%9Fensystem%29
	/// PhysikalischeGröße 	Dimension 	KohärenteEinheit
	/// Länge l         	Länge L 	Meter (m)
	template<class PHYSICALUNIT, class COHERENTUNIT> public ref class Dimension
	{
	public:
		PhysikalischeGröße physikalischeGröße;
		CoherentUnit coherentUnit;

		Dimension()
		{

		}

		~Dimension()
		{

		}
	};
}