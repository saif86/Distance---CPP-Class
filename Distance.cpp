/**
* @file Distance.cpp
*
* @brief C++ Program to demostrate Distance class for following tasks.
*
* TASK 1: Class definition with data members for feet and inches. Defining member functions for setting and displaying the distance.
* TASK 2: Defining default and overloaded constructor.
* TASK 3: Updating the set distance so that inches never exceeds 11
* TASK 4: Defining a member function for adding a distance to the currrent object.
*
* @author Saif Ullah Ijaz
*
*/

// SYSTEM INCLUDES
#include <iostream> 
using namespace std;

// Distance class definition
class Distance {
public:
// LIFECYCLE
	/** Default + Overloaded constructor.
	*/
	Distance(int = 0, float = 0.0);

// OPERATIONS
	/** function that displays the distance.
	*
	* @param void
	*
	* @return void
	*/
	void DisplayDistance();

	/** function that adds another distance object to the current distance.
	*
	* @param aDistance The reference to a constant distance object to be added
	*
	* @return void
	*/
	void AddDistance(const Distance& aDistance);

// ACCESS
	// setters
	void SetFeet(int = 0);
	void SetInches(float = 0.0);
	void SetDistance(int = 0, float = 0.0);
	/**
	# @overload void SetDistance(const Distance& aDistance);
	*/
	void SetDistance(const Distance& aDistance);

	// getters
	int GetFeet() const;
	float GetInches() const;
	const Distance& GetDistance()const;

private:

// DATA MEMBERS
	int mFeet;
	float mInches;
};
// end class Distance

// File scope starts here 

/////////////////////////////// PUBLIC ///////////////////////////////////////

//============================= LIFECYCLE ====================================

// Distance Default+Overloaded Constructor
Distance::Distance(int aFeet, float aInches) : mFeet(aFeet), mInches(aInches) {
	this->SetDistance(aFeet, aInches);
}
// end Distance constructor 

//============================= OPERATIONS ===================================
// function that displays the distance.
void Distance::DisplayDistance() {
	cout << "The distance is: " << this->GetFeet() << " Feet and " << this->GetInches() << " Inches." << endl;
}
// end function DisplayDistance

// function that adds another distance object to the current distance.
void Distance::AddDistance(const Distance& aDistance) {
	int tFeet;
	float tInches;
	tFeet = this->GetFeet() + aDistance.GetFeet();
	tInches = this->GetInches() + aDistance.GetInches();
	this->SetDistance(tFeet, tInches);
}
// end function AddDistance

//============================= ACESS      ===================================

// function that sets Feet
void Distance::SetFeet(int aFeet) {
	this->mFeet = aFeet;
}
// end function SetFeet

// function that sets Inches
void Distance::SetInches(float aInches) {
	this->mInches = int(aInches) % 12;
	this->mFeet += aInches / 12;
}
// end function SetInches

// function that sets Distance
void Distance::SetDistance(int aFeet, float aInches) {
	this->SetFeet(aFeet);
	this->SetInches(aInches);
}
// end function SetDistance

// function that sets the Distance
void Distance::SetDistance(const Distance &obj) {
	this->SetDistance(obj.GetFeet(), obj.GetInches());
}
// end function SetDistance

// function that gets Feet
int Distance::GetFeet() const {
	return this->mFeet;
}
// end function GetFeet

// function that gets Inches
float Distance::GetInches() const {
	return this->mInches;
}
// end function GetInches

// function that gets the Distance
const Distance& Distance::GetDistance()const {
	return *this;
}
// end function GetDistance

/////////////////////////////// MAIN   ///////////////////////////////////////

// function main begins program execution
void main() {
	{
		cout << "################ TASK 1 ######################" << endl;
		Distance d0;
		int dFeet;
		float dInches;
		cout << "Enter distance in Feet: ";
		cin >> dFeet;
		cout << "Enter distance in Inches: ";
		cin >> dInches;
		d0.SetDistance(dFeet, dInches);  // assigns values to the class attributes

		d0.DisplayDistance(); // displays the values of class attributes
		cout << "################ END OF TASK 1 ################\n" << endl;
	}

	{
		cout << "################ TASK 2 ######################" << endl;
		Distance d1, d2(10, 2); // initializes the values of d1 to 0 and values of d2 to 10, 2
		d1.DisplayDistance();
		d2.DisplayDistance();
		cout << "################ END OF TASK 2 ################\n" << endl;
	}

	{
		cout << "################ TASK 3 ######################" << endl;
		Distance obj(10, 12);	// the value of obj members will be feet: 11, inches:0
		obj.DisplayDistance();
		obj.SetDistance(4, 14); //the value of obj member will be feet: 5, inches:2
		obj.DisplayDistance();
		cout << "################ END OF TASK 3 ################\n" << endl;
	}

	{
		cout << "################ TASK 4 ######################" << endl;
		Distance d1(0, 3), d2(1, 2);
		d1.AddDistance(d2); // the function should add the value of d2 to d1
		d1.DisplayDistance(); // the values printed should be 1,5
		cout << "################ END OF TASK 4 ################\n" << endl;
	}
	system("pause");
}
// end main 
