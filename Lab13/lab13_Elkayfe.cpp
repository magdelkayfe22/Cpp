/*
Magd Elkayfe
June 16 2025 , pointers, references, array application
*/
const int SIZE_ROW = 2;
const int SIZE_COL = 3;
#include <iostream>

using namespace std;

#include "lab13_Elkayfe_function.cpp"

int main(){
    cout<<"\n-----------Example 1: pointer and reference-----------\n";
    pointer_ref();

    cout<<"\n-----------Example 2: Passing an address into a function-----------\n";
    string something = "Hello World!";
    printvalue(something);
    printbyref(something);
    printbyaddress(&something);


    cout<<"\n-----------Example 3: Pointer in an array-----------\n";
    pointer_array();

    cout<<"\n-----------Example 4: Passing an array using dereference-----------\n";
    int array_size = 3;
    int arr_nums[array_size];
    fillup(array_size, arr_nums);
    printelements(array_size, arr_nums);

    cout<<"\n-----------Example 5: searching a value-----------\n";
    int a[ARRAY_SIZE];
    int listsize;
    int searchnumber = 8;

    fillarray(a, listsize);
    printelements(listsize, a);
    int search_number = search(a, listsize, searchnumber);
    cout<<"What is the index of number "<<searchnumber<<"? = "<<search_number<<endl;

    cout<<"\n-----------Example 6: 2D array -----------\n";
    array_2d(); 

    cout<<"\n-----------Example 7: passing a 2D array into a function -----------\n";
    // declare an array 2 by 3
    int numbers_2d[SIZE_ROW][SIZE_COL];
    fillup_2d(numbers_2d);
    print_2d(numbers_2d);
    int total_even = count_even(numbers_2d);

    cout<<"\n----------Lab exercise 1: find max-----------\n";
    int maxnumber = findmax(a, listsize);
    cout<<"The maximum number is "<<maxnumber<<endl;
    

    cout<<"\n--------Lab exercise 2: 2D array size 5 by 5--------\n";
    int arraynumber2d[ARRAY_SIZE][ARRAY_SIZE] = {0};
    int max = 200; 
    int min = 150;

    // populate array with random numbers between 1 and 255
    populatearray2d(arraynumber2d);

    // find the numbers in array 'populatearray2d' that are between max and min
    int totalnumber = range2d(arraynumber2d, max, min);
    cout<<"\vArray has "<<totalnumber<<" numbers between "<<min<<" and "<<max<<endl; 
    
    // print the array
    print2darray(arraynumber2d);

    return 0;
}