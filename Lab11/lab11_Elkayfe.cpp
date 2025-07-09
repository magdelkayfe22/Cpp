/*
Magd Elkayfe
Monday June 9 2025
Lab 11, predefined functions, recursive functions
*/


#include <iostream>
#include<cmath>
#include<cstdlib>

const double GRAVITY = 9.8;

using namespace std;

#include "lab11_Elkayfe_functions.cpp"

int main(){
    cout<<"\n-------Example 1: Calculate the hypotenuse of a right triangle-------\n";
    float side1 = side();
    float side2 = side();
    float cal_hyp = hyp(side1, side2);
    print_result(side1, side2, cal_hyp);

    cout<<"\n-------Example 2: Random number generator-------\n";
    int random = random_number();
    cout<<"random number generated = "<<random<<endl;

    cout<<"\n-------Example 3: Random number between -5 and 5-------\n";
    int rand5 = random_five();
    cout<<"random number between -5 and 5 = "<<rand5<<endl;

    cout<<"\n-------Lab exercise Part A: writing three functions-------\n";
    int time = ran_num();
    float distance = falling_distance(time);
    print_falling_distance(time, distance);


    cout<<"\n-------Example 4: Recursive function-------\n";
    cheer(4);

    cout<<"\n-------Example 5: Factorial sequence-------\n";
    int f = factorial(6);
    cout<<"The final answer is = "<<f<<endl;


    cout<<"\n-------Example 6: Linear recursive function-------\n";
    int r = linearfunction(3);
    cout<<"Total linear function = "<<r<<endl;
    

    cout<<"\n-------Lab exercise Part B: writing a recursive function-------\n";
    cout<<"Result "<<mystery(5)<<endl;

        return 0;


}