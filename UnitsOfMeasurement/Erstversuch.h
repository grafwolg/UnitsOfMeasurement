#pragma once




ref class Erstversuch
{
public:
	Erstversuch();
};

template <Q> class BaseUnit : Unit<Q> {};


template<Q> ref class SystemOfUnits
{
	/**
* Holds collection of SI units.
*/
	System::Collections::Generic::List<> ^UNITS = gcnew System::Collections::Generic::List<>();
};

public ref class SI<typedef Q> : SystemOfUnits
{
	/**
	* The base unit for mass quantities (<code>kg</code>).
	* It is the only SI unit with a prefix as part of its name and symbol.
	* The kilogram is equal to the mass of an international prototype in the
	* form of a platinum-iridium cylinder kept at Sevres in France.
	* @see   #GRAM
	*/
public:
	//	BaseUnit<Mass> KILOGRAM = si(new BaseUnit<Mass>("kg"));
private:



	/**
	* Adds a new unit to the collection.
	*
	* @param  unit the unit being added.
	* @return <code>unit</code>.
	*/
	private Unit si(Unit unit) {
		UNITS->Add(unit);

		return unit;
	}

};



/**
* <p> This class represents a determinate {@link javax.measure.quantity.Quantity
*     quantity} (as of length, time, heat, or value) adopted as a standard
*     of measurement.</p>
*
* <p> It is helpful to think of instances of this class as recording the
*     history by which they are created. Thus, for example, the string
*     "g/kg" (which is a dimensionless unit) would result from invoking
*     the method toString() on a unit that was created by dividing a
*     gram unit by a kilogram unit. Yet, "kg" divided by "kg" returns
*     {@link #ONE} and not "kg/kg" due to automatic unit factorization.</p>
*
* <p> This class supports the multiplication of offsets units. The result is
*     usually a unit not convertible to its {@link #getStandardUnit standard unit}.
*     Such units may appear in derivative quantities. For example °C/m is an
*     unit of gradient, which is common in atmospheric and oceanographic
*     research.</p>
*
* <p> Units raised at rational powers are also supported. For example
*     the cubic root of "liter" is a unit compatible with meter.</p>
*
* <p> Instances of this class are immutable.</p>
*
* @author  <a href="mailto:jean-marie@dautelle.com">Jean-Marie Dautelle</a>
* @author  <a href="mailto:steve@unidata.ucar.edu">Steve Emmerson</a>
* @author  Martin Desruisseaux
* @version 3.2, August 28, 2006
* @see <a href="http://en.wikipedia.org/wiki/Units_of_measurement">
*       Wikipedia: Units of measurement</a>
*/
template<typename Q> ref class Unit
{


};




/**
* <p> This interface represents any type of quantitative properties or
*     attributes of thing. Mass, time, distance, heat, and angular separation
*     are among the familiar examples of quantitative properties.</p>
*
* <p> Distinct quantities have usually different physical dimensions; although
*     it is not required nor necessary, for example {@link Torque} and
*     {@link Energy} have same dimension but are of different nature
*     (vector for torque, scalar for energy).</p>
*
* @author  <a href="mailto:jean-marie@dautelle.com">Jean-Marie Dautelle</a>
* @version 4.0, February 25, 2007
* @see <a href="http://en.wikipedia.org/wiki/Quantity">Wikipedia: Quantity</a>
* @see <a href="http://en.wikipedia.org/wiki/Dimensional_analysis">
*      Wikipedia: Dimensional Analysis</a>
*/
public ref class Quantity
{


};
/**
* This interface represents the measure of the quantity of matter that a body
* or an object contains. The mass of the body is not dependent on gravity
* and therefore is different from but proportional to its weight.
* The system unit for this quantity is "kg" (kilogram).
*
* @author  <a href="mailto:jean-marie@dautelle.com">Jean-Marie Dautelle</a>
* @version 1.0, January 14, 2006
*/
public ref class Mass : Quantity
{
	/**
	* Holds the SI unit (Système International d'Unités) for this quantity.
	*/
public:
	Unit<Mass> UNIT = SI.KILOGRAM;


};
