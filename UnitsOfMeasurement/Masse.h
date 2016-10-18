#pragma once
#include "UnitsOfMeasurement.h"
#include "Quantity.h"



namespace UnitsOfMeasurement
{
	/* die Physikalische Größe : Masse */

	public ref class GMasse : PhysikalischeGröße
	{
	public:
		GMasse()
		{
			name = "Masse";
			größenZeichen = "M";
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




	/// PhysikalischeGröße 	Dimension 	KohärenteEinheit   Zahlenwert  Maßstab
	/// Länge l         	Länge L 	Meter (m)
	public ref class Masse : Quantity<GMasse, Kilogramm, long>
	{
	public:
		Masse(long value);
		Masse(long value, Kilogramm unit);
	};




}

