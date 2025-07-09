/*
Magd Elkayfe
June 12 2025
Introduction to array
*/

#include<iostream>
#include<cstdlib>

using namespace std;

// example 1: declaring an array

void array_declare(){
    // declare an array with 5 values
    int score[5];
    cout<<"What is in scores array? "<<score<<endl;
    score[0] = 95;
    score[1] = 60;
    score[2] = 80;
    score[3] = 72;
    score[4] = 100;
    cout<<"The third score is = "<<score[2]<<endl;
    float average_score = (score[0] + score[1] + score[2] + score[3] + score[4]) / 5.0;
    cout<<"The average score is = "<<average_score<<endl;
}

// example 2: charcater array
void array_char(){
    // declare amd intialize a character array
    char syn[5] = {'%', '@', '$'};
    cout<<"The fourth symbol = "<<syn[3]<<endl;
    cout<<"The second symbol = "<<syn[1]<<endl;
    // update the fourth symbol
    syn[3] = '^';
    cout<<"The updated fourth symbol = "<<syn[3]<<endl;

}
// example 3: find the size of an array
int array_size(){
    char syn[] = {'%', '@', '$'};
    int ages[] = {5, 7, 9, 10, 2, 8};
    return (sizeof(ages) / sizeof(ages[0]));
}
// example 4: loop through each element of an array
void array_ages(){
    const int array_size = 5;
    int ages[array_size] = {5, 7, 9, 10, 2};
    for(int i = 0; i < array_size; i++){
        cout<<"age "<<i+1<<" = "<<ages[i]<<endl;
    }
}

// example 5: passing an array to a function
void fillup(int array_size,int arr[]){
    for(int i = 0; i< array_size; i++){
    cout<<"Enter number "<<(i+1)<<endl;
    cin>>arr[i];
    }
}
// function to print the array
void print_elements(int array_size, int arr[]){
    for(int i = 0; i< array_size; i++){
        cout<<arr[i]<<" \t ";
    }
    cout<<endl;
}

// example 6: maximum number
int max_num(int array_size, int arr[]){
    int max_value = arr[0];
    for(int i = 1; i < array_size; i++){
        if(arr[i] > max_value){
            max_value = arr[i];
        }
    }
    return max_value;
}

// example 7: function to count and return the amount of numbers that are negative
int count_negative(int array_size, int arr[]){
    // declare the counter
    int counter = 0;
    for(int i = 0; i < array_size; i++){
        if(arr[i] < 0){
            counter++;
        }
    }
    return counter;
}
// prompt results
void prompt_count(int result, string typecount){
    cout<<"There are "<<result<<" numbers that are "<<typecount<<endl;
}
// example 8: define a function to count and return the numbers that are between 1 and 5, inclusive

int count1_5(int array_size, int arr[]){
    int counter = 0;
    for(int i = 0; i < array_size; i++){
        if(arr[i] > 1 && arr[i] <= 5){
            counter++;
        }
    }
    return counter;
}


// Lab exercise a






// lab exercise b:

// a function that assigns a random number between 1 and 9 (inclusive) to each cell in an array of size 10.
void ran_num(int arr[], int array_size2) {
    srand(time(0));
    for (int i = 0; i < array_size2; i++) {
        arr[i] = 1 + rand() % 9;
    }
}
// a function that counts and returns the number of even numbers in the array.
int count_even(int arr[], int array_size2){
    int counter = 0;
    cout<<"The even numbers in the array are: ";
    for(int i = 0; i< array_size2; i++){
        if(arr[i] % 2 == 0){
            cout<<arr[i]<< " , ";
            counter++;
        }
    }
    return counter;
}

// prompt the results of the count of even numbers in the array
void prompt_even_count(int count) {
    cout<<endl;
    cout << "There are " << count << " even numbers in the array." << endl;
}