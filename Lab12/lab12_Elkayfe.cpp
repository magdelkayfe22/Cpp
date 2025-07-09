/*
Magd Elkayfe
June 12 2025
Introduction to array
*/

#include<iostream>
#include<cstdlib>
#include "lab12_Elkayfe_function.cpp"

using namespace std;

int main(){
cout<<"\n------- example 1: declaring an array -------\n";
    
    array_declare();

cout<<"\n------- example 2: character array -------\n";
    array_char();

cout<<"\n------- example 3: find the size of an array -------\n";
    int s = array_size();
    cout<<"The size of the array is = "<<s<<endl;

cout<<"\n------- example 4: loop through each element of an array -------\n";
    array_ages();

cout<<"\n------- example 5: passing an array to a function -------\n";
    // declare size array
    int x = 3;
    // declare array
    int numbers[x];
    // pass the array to the function
    fillup(x, numbers);
    print_elements(x, numbers);

    cout<<"\n------- example 6: array application -------\n";
    int m = max_num(x,numbers);
    cout<<"The maximum number is "<<m<<endl;

    cout<<"\n------- example 7: negative number counter -------\n";
    int c = count_negative(x, numbers);
    prompt_count(c, "negative");

    cout<<"\n------- example 8: count number between 1 and 5 -------\n";
    int p = count1_5(x, numbers);
    prompt_count(p, "between 1 and 5");

    cout<<"\n------- Lab exercise a: Youtube Video -------- \n";
    int* ptr; // * create integer pointer ptr = pointer
    int var = 7; // integer variable and 7 is the assigned address 
    int foo = 21; // integer variable and 21 is the assigned address
    // assigning the address of var and foo to ptr
    ptr = &var;
    ptr = &foo;
    // assigning the address of var to ref
    // ref is a reference to var
    // any change to ref will change var
    // any change to var will change ref
    // ref is not a pointer, it is a reference
    int& ref = var;

    cout<<"\n------- Lab exercise b -------- \n";
    // size of the array
    int q = 10;
    // declare the array
    int numbers2[q];

    // fill array
    ran_num(numbers2, q);
    cout<<"The assigned random numbers are: \n";
    print_elements(q, numbers2);
    int even_Count = count_even(numbers2, q);
    prompt_even_count(even_Count);

    
     return 0;
}