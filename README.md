# Distance---CPP-Class
Defining class in C++

## Task 1
Define a Class **Distance** with private attributes Feet (int) and Inches (float). Also, define public member functions:
  * Set_distance( ) – to assign values to the class attributes
  * Display_distance( ) – to display the values of class attributes

Include a main( ) program that creates an instance (object) of type **Distance**. Ask the user to enter the value of **Distance** variables and call the appropriate functions to set the object value and then display the object value.

*Define the class member functions outside the class using scope resolution operator (::).*
## Task 2
Define a constructor for the class **Distance**, as defined in Question 1 that should initialize the **Distance** attributes (feet, inches) to 0. Also, define an overloaded constructor that initializes the object to certain values.

For example, ```Distance d1, d2(10,2)``` should initialize the values of d1 to 0 and values of d2 to 10, 2
## Task 3
Make changes to the Set_distance( ) function and class constructor so that the values of inches never exceeds 11.

For example, for the code:
  * ```Distance obj(10,12)``` - the value of obj members will be feet: 11, inches:0
  * ```obj. Set_distance(4,14)``` - the value of obj member will be feet: 5, inches:2
## Task 4
Write a member function Add_distance( ) that takes a distance value as argument and adds its value to the calling object.

For example,
  * ```Distance d1(0,3), d2(1,2);```
  * ```d1.Add_distance(d2);``` - the function should add the value of d2 to d1
  * ```d1. Display_distance();``` - the values printed should be 1,5
