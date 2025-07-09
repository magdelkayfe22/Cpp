/*
Magd Elkayfe
June 4 2025
introductions to functions */

#include<iostream>

using namespace std;

// example 1: function that doesnt return any value
void print_hi(){
    cout<<"Good Afternoon"<<endl;
    return; //optional line no need to put return
}

// example 2: function that has parameter
void greeting(string name){
    cout<<"Welcome to function "<<name<<endl;
}

// example 3: function with return value
string tired(bool a){
    if(a){
        return "Yes";
    }
    else{
        return "No";
    }
}
void print_tired(string b){
    cout<<"Are you tired today? "<<b<<endl;
}

// example 4: function to calculate the area rectangle
double area_rectangle(double length, double width){
    return length * width;
}

// prompt results 
void print_area(double length, double width, double area){
    cout.setf(ios::fixed);
    cout.precision(2);
    cout<<"A rectangle with length "<<length<<" and width = "<<width<<" has an area of "<<area<<endl;
}

// Example 5: Calculate a Faherenheit temperature using a Celsius.
// Celsius will be passed to the Function

float fah(float celsius){
    float f = celsius * 1.8 + 32;
    return f;
}
// print the results
void print_temp(float c, float f){
    cout<<c<<"C is equavilent to "<<f<<"F"<<endl;
}

// Example 6: Function to print if a number is postive or negative or zero
void check_num(int num){
    if(num>0){
        cout<<num<<" is a positive"<<endl;
    }
    else if(num<0){
        cout<<num<<" is a negative"<<endl;
    }
    else{
        cout<<"The number is zero"<<endl;
    }
}

// Example 7: Local variable
int add(int num1, int num2){
    int sum = num1 + num2;
        return sum; // 'sum' is a local variable of function 'add'

}

// example 8: Global Variable
void update_number(){
    // update the global variable 'number'
    number *= 2;;
    cout<<"Updated number = "<<number<<endl;
}

// Lab exercise:
// Defining four functions

// 1. collect an integer between 1 and 10 from the user and return it.
// if number is not between 1 and 10, ask user to re-enter the number
int collect_number(){
    int num;
    do{
        cout<<"Enter a number between 1 and 10: ";
        cin>>num;
        if(num < 1 || num > 10){
            cout<<"Re-enter a number between 1 and 10!"<<endl;
        }
    } while(num < 1 || num > 10);
        return num;
}
// 2. use the collected number and print the collected number up to 15, inclusive in steps of 1
void print_number(int num){
    cout<<"The collected number is: "<<num<<endl;
    for(int i = num; i <= 15; i++){
        cout<<i<<" ";
    }
}
// 3. return the collected integers up to 15 that are not a multiple of 3
int not_three(int num){
    int count = 0;
    cout<<"\nThe numbers that are not multiples of 3: ";
    for(int i = num; i <= 15; i++){
        if(!(i % 3 != 0)){
            cout<<i<<" ";
            count++;
        }
    }
    return count;
}
// 4. the fourth function will prompt results 
// from __ up to 15, there are __ numbers that are not multiples by 3.
// first blank is enetered number, second blank is the returning number from function 3 

void results(int num){
    int count = not_three(num);
    cout<<"\nFrom "<<num<<" up to 15, there are "<<count<<" numbers that are not multiples of 3."<<endl;
}