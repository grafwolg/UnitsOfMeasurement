#pragma once
#include "UnitsOfMeasurement.h"
#include "Scale.h"
#include "Dimension.h"



namespace UnitsOfMeasurement
{
	///<summary>ein messbares ding, basisklasse für alle definierten Einheiten.</summary>
	/// copyright Wolfgang Graf <wolfgang.graf@wogra.net>  2013
	/// under license "GNU GPL v3.0" https://api.github.com/licenses/gpl-3.0
	/// @param D Dimenens
	template<class PHYSICALUNIT, class COHERENTUNIT, class VALTYPE> public ref class Quantity
	{
	public:

		// aktueller Wert := value* basiseinheit* Scale
		VALTYPE getValue();
	protected:
		Dimension<PHYSICALUNIT, COHERENTUNIT> dimension;


	private:
		//tatsächlicher Wert in Basiseinheit
		VALTYPE value;
	};





}