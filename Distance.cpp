#include<iostream> 

using std::cout; 
using std::endl; 
using std::cin; 

class Distance{ 
	int Feet; 
	float Inches; 
public: 
	Distance(int, float); 
	void Set_distance(int, float); /*assign values to the class attributes*/
	void Display_distance();	/*display the values of class attributes*/
	void Add_distance(Distance); 
	int getFeet(); 
	float getInches(); 
}; 

Distance::Distance(int aFeet = 0, float aInches = 0.0){ 
	Set_distance(aFeet, aInches); 
} 

void Distance::Set_distance(int aFeet, float aInches){ 
	Feet = aFeet; 
	if (aInches > 11){ 
		Feet += int(aInches) / 12; 
		Inches = int(aInches) % 12; 
	} 
	else{ 
		Inches = aInches; 
	} 
} 

void Distance::Display_distance(){ 
	cout << "The distance is: " << Feet << " Feet and " << Inches << " Inches." << endl; 
} 

int Distance::getFeet(){ 
	return Feet; 
} 

float Distance::getInches(){ 
	return Inches; 
} 

void Distance::Add_distance(Distance d){ 
	int tFeet,tInches; 
	tFeet= Feet + d.getFeet(); 
	tInches = Inches + d.getInches();
	Set_distance(tFeet, tInches); 
} 

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
		d0.Set_distance(dFeet, dInches);  // assigns values to the class attributes

		d0.Display_distance(); // displays the values of class attributes
		cout << "################ END OF TASK 1 ################\n" << endl;
	}

	{
		cout << "################ TASK 2 ######################" << endl;
		Distance d1, d2(10, 2); // initializes the values of d1 to 0 and values of d2 to 10, 2
		d1.Display_distance();
		d2.Display_distance();
		cout << "################ END OF TASK 2 ################\n" << endl;
	}

	{
		cout << "################ TASK 3 ######################" << endl;
		Distance obj(10, 12);	// the value of obj members will be feet: 11, inches:0
		obj.Display_distance();
		obj.Set_distance(4, 14); //the value of obj member will be feet: 5, inches:2
		obj.Display_distance();
		cout << "################ END OF TASK 3 ################\n" << endl;
	}

	{
		cout << "################ TASK 4 ######################" << endl;
		Distance d1(0, 3), d2(1, 2);
		d1.Add_distance(d2); // the function should add the value of d2 to d1
		d1.Display_distance(); // the values printed should be 1,5
		cout << "################ END OF TASK 4 ################\n" << endl;
	}
	system("pause"); 
}