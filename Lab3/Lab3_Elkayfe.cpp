/*
Magd Elkayfe 
May 28, 2025, Numerical Variables
*/

#include<iostream>

using namespace std;

int main(){

    cout<<"\n------ Example 1: Integer -------"<<endl;
    // Short, Integer, and Long --> whole numbers

    int n1 = 3.2;

    short n2 = -10.9;

    long n3= 2285.165;

    cout<<"n1 = "<< n1 <<"\t";
    cout<<"n2 = "<< n2 <<"\t";
    cout<<"n3 = "<< n3 <<"\t";


    cout<<"\n------ Example 2: float and double -------"<<endl;
    // float and double --> whole and decimal (fraction)  numbers.
    float n4 = -6.25;
    double n5 = 10.9;
    cout<<"n4 = "<<n4<<"\t";
    cout<<"n5 = "<<n5<<"\t";

    cout<<"\n------ Example 3: Bool data type -------"<<endl;
    // bool --> true = 1, false = 0
    bool testing = false;
    bool result = true;
    cout<<"Testing = "<<testing<<"\t";
    cout<<"Result = "<<result<<"\t";

    cout<<"\n------ Example 4: arithmetic operators -------"<<endl;
    // Calculate the height of a free fall object
    // height = 0.5*gravity*time^2
    // Step 1) Declare the variables
    float time = 0 , height = 0;
    const float GRAVITY = 9.8;
    // set numbers to one decimial place
    cout.setf(ios::fixed);
    cout.precision(1);
    // step 2) prompt a message asking user to type to enter a falling time, Save the entered time in a variable 'time'
    cout<<"Enter a falling time: ";
    cin>>time;
    // Step 3) calculate the height
    height = 0.5*GRAVITY*time*time;
    //Step 4) prompt result
    cout<<"The height of a falling object is: "<<height<<" meters"<<endl;


    cout<<"\n------ Lab 3 Exercise -------"<<endl;
    // Program to calculate the area of a circle and the volume of the sphere
    // Area of a circle = PI * radius^2 
    // Volume of sphere = (4/3) * PI * radius^3

    const double PI = 3.14159265358979323846;
    int radius;
    float area = 0 , volume = 0 ;

    // prompt a message for radius
    cout<<"Enter the radius of the circle and sphere: ";
    cin>>radius;

    // calculate the area
     area = PI * radius * radius;

    // calculate the volume
    volume = (4.0/3.0) * PI * radius * radius * radius;

    // prompt the results and calculations 
    cout<<"The area of the circle is "<<area<<endl;
    cout<<"The volume of the sphere is "<<volume<<endl;

    return 0;
}

