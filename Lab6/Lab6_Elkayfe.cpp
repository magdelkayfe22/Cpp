/*
Magd Elkayfe 
May 29 2025
Lab 6 conditional statement 
*/

#include<iostream>

using namespace std;

int main(){
    cout<<"\n------ example 1: bool variable ---------"<<endl;
    // declare variable
    bool check_positive;
    int number;
    // collect number
    cout<<"Enter a number: ";
    cin>>number;

    // check if the number is positive
    check_positive = number>0; // return 0 (if false) or 1 (if true)

    // prompt results
    cout<<"Is "<<number<<" positive?      "<<check_positive<<endl;

    cout<<"\n------ example 2: if statemnt ---------"<<endl;
    // check if 'number' is greater than or equal to 10
    if(number>= 10){
        number++;
    }
    cout<<"Number = "<<number<<endl;

    cout<<"\n------ example 3: if-else statemnt ---------"<<endl;
    // check if a number is even or odd 
    if(number %2 == 0){
        cout<<number<< " is even!"<<endl;
    }
    else{
        cout<<number<<" is odd!"<<endl;
    }
    cout<<"\n------ example 4: if-else statement for absolute value ---------"<<endl;
    // convert a number into an absolute value
    if(number<0){
        number *= -1; // number = number * -1
        cout<<"The absolute number is = "<<number<<endl;
    }
    else{
        cout<<"The number is positive = "<<number<<endl;
    }

    cout<<"\n------ example 5: multiway conditional statement ---------"<<endl;
    // display the emitting color according to the wavelength
    int wavelength = 0;
    string emitted_color = "";
    cout<<"Enter a wavelength: ";
    cin>>wavelength;
    if (wavelength>=379 && wavelength<=10)
        emitted_color = "infrared";
    
    else if(wavelength>=380 && wavelength<=520)
        emitted_color = "blue";

    else if(wavelength>=521 && wavelength<= 590)
        emitted_color = "green";

    else if(wavelength>=591 && wavelength<= 740)
        emitted_color = "red";

    else if(wavelength>= 741)
        emitted_color = "ultraviolet";

    else
        emitted_color = "udefined";

    // prompt results
    cout<<wavelength<<" nm emits = "<<emitted_color<<endl;

    cout<<"\n------ example 6: nested conditional statement ---------"<<endl;
    cout<<"Enter a number: ";
    cin>>number;
    // check if a number is even and positive, odd and positive, even and negative, odd and negative, or zero
    if(number>0)
    {
        if(number%2 ==0)
        cout<<"number is even and positive"<<endl;
        else
        cout<<"number is odd and positive"<<endl;
    
    }
    else if(number<0)
    {
        if(number%2 == 0)
        cout<<"number is even and negative"<<endl;
        else
            cout<<"number is odd and negative"<<endl;
    }
    else{
        cout<<"Number is zero"<<endl;
    }

    cout<<"\n------ Lab exercise ---------"<<endl;
    // program that determines the shipping cost based on the weight of a package 

    // enter the weight of the package
    float pack_weight = 0;
    float cost_ship = 0;
    cout<<"Enter the weight of the package: ";
    cin>>pack_weight;

    if(pack_weight <= 0)
        cost_ship = 0;
    if(pack_weight <= 2)
        cost_ship = 5.00;
    
    else if(pack_weight > 2 && pack_weight <= 5)
        cost_ship = 8.20;
    
    else if(pack_weight > 5 && pack_weight == 10)
        cost_ship = 10.25;

    else
        cost_ship = 12.50;

    // prompt results
    cout<<"A package of weight "<<pack_weight<<" pounds costs $"<<cost_ship<<endl;


    return 0;
}