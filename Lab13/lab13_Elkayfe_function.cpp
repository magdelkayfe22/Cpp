/*
Magd Elkayfe
June 16 2025 , pointers, references, array application
*/

#include <iostream>

using namespace std;

// example 1: pointer and reference

void pointer_ref(){
    // declare a variable
    int num = 12;
    char sym = '$';
    string n = "Peter";

    // declare a pointer
    int* pointer_num;
    char* pointer_char;
    string* pointer_string;

    // check what is a pointer equal to
    cout<<"Check a pointer after declaration = "<<pointer_string<<endl;

    // pointer intialization with memory address of the variable
    pointer_num = &num;
    pointer_char = &sym;
    pointer_string = &n;
    cout<<"Check a pointer after initialization = "<<pointer_string<<endl;

    // deference operator to obtain the vvalue of the memory address
    cout<<"dereference a pointer = "<<*pointer_string<<endl;
}

// example 2: Passing an address into a function
// function to print a value 
void printvalue(string v){
    cout<<"Value: "<<v<<endl;
}
// function to print a value by reference
void printbyref(string& v){
    cout<<"Passed by reference: "<<v<<endl;
}
// function to pass a memory address
void printbyaddress(string* v){
    cout<<"Passed by address: "<<v<<endl;
}

// example 3: Pointer in an array
void pointer_array(){
    const int s = 5;
    int arr[s] = {1, 2, 3, 4, 5};

    // pointer to an array
    int *ptr = arr;

    // loop through the array using pointer
    for(int i = 0; i< s; i++){
        // access to an array element using pointers
        cout<<"Value = "<<*(ptr + i)<<endl;
    }
}
// example 4: passing an array to a function
void fillup(int sizearray, int *arr){
    for(int i = 0; i<sizearray; i++){
        cout<<"Enter a number: ";
        cin>>arr[i];
    }
}

void printelements(int sizearray, int *arr){
    cout<<"Array elements are:";
    for(int i = 0; i<sizearray; i++){
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
}

// example 5: search application
// function to collect up to five postive numbers. if the user enters a negative number or zero, the collection of numbers stops.
// numberuserindex --> value oof the total consecutive positive numbers entered by the user
const int ARRAY_SIZE = 5;
void fillarray(int *arr, int &numberuserindex){
    int number, index = 0;
    do{
        cout<<"Enter a postive number: ";
        cin>>number;
        if(number > 0){
            arr[index] = number;
            index++;
        }
    }while(number > 0 && index < ARRAY_SIZE);
    // update the value of variable numberuserindex
    numberuserindex = index;
}

// function to return an index of the targe number or -1 if the number was not found 
int search(int *arr, int numberuserindex, int target){
    int index = 0; // the index of the target number
    bool found = false;
    while(!(found) && index < numberuserindex){
        if(target == arr[index])
        found = true;
        else
        index++;
    }
    if(found)
        return index;
        else 
        return -1;
}
// example 6: multidimensional array, 2D array
void array_2d(){
    // declare 2d array of size 3 by 5
    int array2d[3][5]= {
        {1, 2, 3, 4, 5}, // row 1
        {-5, 10, -3 , -9, -1}, // row 2
        {10, 20}  // row 3
    };
    // loop through each element in the 2D array
    for(int row = 0; row< 3; row++){
        for(int col = 0; col< 5; col++){
            cout<<array2d[row][col]<<" \t";
        }
        cout<<endl;
    }
}

// example 7: passing a 2D array into a function 
void fillup_2d(int a[SIZE_ROW][SIZE_COL]){
    for(int row = 0; row < SIZE_ROW; row++){
        for(int col = 0; col <SIZE_COL; col++){
            cout<<"Enter a number for row "<<row+1<<" and column "<<col+1<<": ";
            cin>>a[row][col];
        }
    }
}
// function to print a 2D array
void print_2d(int a[][SIZE_COL]){
    for(int row = 0; row< SIZE_ROW; row++) {
        for(int col = 0; col< SIZE_COL; col++){
            cout<<a[row][col]<<"\t";
        }
        cout<<endl;
    }
}
// function that counts and returns the total of even numbers in a 2D array
int count_even(int a[][SIZE_COL]){
    int counter = 0;
    for(int row = 0; row < SIZE_ROW; row++){
        for(int col = 0; col < SIZE_COL; col++){
            if(a[row][col] % 2 == 0){
                counter++;
            }
        }
    }
    return counter;
}

// Lab exercise 1: find the maximum number in array 'a'
int findmax(int *arr, int numberuserindex){
    if (numberuserindex == 0) {
        return -1;
    }
    int maxnum = arr[0];
    for (int i = 1; i < numberuserindex; i++) {
        if (arr[i] > maxnum) {
            maxnum = arr[i];
        }
    }
    return maxnum;
}

// Lab exercise 2: define a function to populate a 2D array of a size 5 by 5 with random numbers between 1 and 255.

// function one : populate array with random numbers from 1-255
void populatearray2d(int arr[ARRAY_SIZE][ARRAY_SIZE]){
    srand(time(0));
    
    for(int i = 0; i<ARRAY_SIZE; i++){
        for(int q = 0; q<ARRAY_SIZE; q++){
            arr[i][q] = 1 + rand() % 255;
        }
    }
}

// function two: count the numbers between min and max
int range2d(int arr[ARRAY_SIZE][ARRAY_SIZE], int max, int min){
    int counter = 0;

    for(int i = 0; i< ARRAY_SIZE; i++){
        for(int q = 0; q< ARRAY_SIZE; q++){
            if(arr[i][q] >= min && arr[i][q] <= max){
                counter++;
            }
        }
    }
    return counter;
}

// print the array
void print2darray(int arr[ARRAY_SIZE][ARRAY_SIZE]){
    for(int i = 0; i < ARRAY_SIZE; i++){
        for(int q = 0; q < ARRAY_SIZE; q++){
            cout<< arr[i][q]<<"\t";
        }
        cout<<endl;
    }
}