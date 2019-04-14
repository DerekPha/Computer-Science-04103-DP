


/***********************************************
* Name: Derek Phansalkar
* Email: phansalkd3@students.rowan.edu
***********************************************
* In-class Problems 1
***********************************************/

#include <iostream>
#include <string>

using namespace std; 

const  float PI = 3.14159;

int main()
{

	float radius, area, circumference;
	
	//Display purpose of the program
	cout << " ******************************************"<<endl;
	cout << " This program takes in radius to compute area of circle" <<endl;
	cout << " ******************************************\n\n";
	
	//Get user input
	cout << "Please input radius: ";
	cin >> radius;
	
	//Compute area to PI*radius*radius
	area = PI* radius *radius; 
	
	//Display the area and circumference
	cout << "The area is = " << area << endl;
	cout << "The circumference is = "<<PI*2*radius<<endl;
	cout << "Program 1 has ended"<<endl;

	system("pause");


	float miles;

    //Display purpose of program
    cout << " ******************************************"<<endl;
    cout << " This program converts a given distance in miles to kilometers, meters, kilometers, and centimeters " <<endl;
    cout << " ******************************************\n\n";

    //Get user input
    cout<< "Please enter distance in miles: ";
    cin>>miles;
    cout<<"The distance in kilometers is "<<miles*1.6<<endl;
    cout<<"The distance in meters is "<<miles*1600<<endl;
    cout<<"The distance in centimeters is "<<miles*16<<endl;
    cout<<"The distance in milimeters is "<<miles*1600000<<endl;
    cout << "Program 2 has ended"<<endl;

    system("pause");


    //Display purpose of program
    cout << " ******************************************"<<endl;
    cout << " This program converts a temperature in Celsius to Fahrenheit" <<endl;
    cout << " ******************************************\n\n";

    float celsius;
    cout<<"Enter the temperature in degrees Celsius: ";
    cin>>celsius;
    cout<<"The temperature in degrees Fahrenheit is "<<celsius*1.8+32<<endl;
    cout<< "Program 3 has ended"<<endl;

    system("pause");


    //Display purpose of program
    cout << " ******************************************"<<endl;
    cout << " This program converts your age to the equivalent number of months, days, hours, minutes, and seconds. " <<endl;
    cout << " ******************************************\n\n";

    float age;
    cout<<"What is your age? ";
    cin>>age;
    cout<<"In months, your age is "<<age*12<<" months"<<endl;
    cout<<"In days, your age is "<<age*365.25<<" days"<<endl;
    cout<<"In hours, your age is "<<age*365.25*24<<" hours"<<endl;
    cout<<"In minutes, your age is "<<age*365.25*24*60<<" minutes"<<endl;
    cout<<"In seconds, your age is "<<age*365.25*24*60*60<<" seconds"<<endl<<endl;
    cout<< "Program 4 has ended"<<endl;

    system("pause");


    //Display purpose of program
    cout << " ******************************************"<<endl;
    cout << " This program converts the user's first initial into a block letter " <<endl;
    cout << " ******************************************\n\n";

    string first;
    cout<<"What is the first initial of your first name? ";
    cin>>first;
    if(first[0]=A)
    {

    }


}