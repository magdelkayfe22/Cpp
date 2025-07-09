/*
Magd Elkayfe
June 4 2025
introductions to functions */

// global variable
int number = 10;
const float GRAVITY = 9.8; // constant variable


#include<iostream>
#include "lab10_Elkayfe_functions.cpp"

using namespace std;

int main(){
    cout<<"\n-------- Example 1: void function --------"<<endl;
    print_hi();

     cout<<"\n-------- Example 2: function with arguments --------"<<endl;
     greeting("ANNA");
     greeting("JASON");
     string n = "PETER";
    greeting(n);
    
     cout<<"\n-------- Example 3: functions with return value --------"<<endl;
     string t = tired(false);
     print_tired(t);
     t = tired(true);
     print_tired(t);

    cout<<"\n--------example 4: function to calculate the area rectangle-------"<<endl;
    double length = 5.2;
    double width = 2;
    double area = area_rectangle(length, width);
    print_area(length, width, area);
    

    cout<<"\n--------example 5: function to calculate the temperature in Fahrenheit-------"<<endl;
    float celsius = 21.5;
    float fahrenheit = fah(celsius);
    print_temp(celsius, fahrenheit);

    cout<<"\n--------example 6: function to check if a number is positive or negative or zero-------"<<endl;
    check_num(0);


    cout<<"\n--------Example 7: Local Variable--------"<<endl;
    // 'sum' is a local variable of function 'main'
    int sum = add(3, 4) - add(7, 2);
    cout<<"The final sum is "<<sum<<endl;

    cout<<"\n--------example 8: Global Variable--------"<<endl;
    cout<<"Number in the main function "<<number<<endl;
    update_number();
    number += 10;
    cout<<"Number in the main function after update "<<number<<endl;
    update_number();

    cout<<"\n--------Lab Exercise:---------"<<endl;
    int collected_number = collect_number();
    print_number(collected_number);
    results(collected_number);
    return 0;
}