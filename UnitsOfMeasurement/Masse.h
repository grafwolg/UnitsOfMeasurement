#pragma once
#include "UnitsOfMeasurement.h"
#include "Quantity.h"



namespace UnitsOfMeasurement
{
	/* die Physikalische Gr��e : Masse */

	public ref class GMasse : PhysikalischeGr��e
	{
	public:
		GMasse()
		{
			name = "Masse";
			gr��enZeichen = "M";
		}

	};




	public  ref class Kilogramm : CoherentUnit
	{
		ref class MyUnits : Units
		{
		public:
			static const int KILOGRAMM = 1;
			static const int TONNE = 1000;
		};


	public:
		MyUnits availableUnits;


	private:

	};




	/// PhysikalischeGr��e 	Dimension 	Koh�renteEinheit   Zahlenwert  Ma�stab
	/// L�nge l         	L�nge L 	Meter (m)
	public ref class Masse : Quantity<GMasse, Kilogramm, long>
	{
	public:
		Masse(long value);
		Masse(long value, Kilogramm unit);
	};




}

