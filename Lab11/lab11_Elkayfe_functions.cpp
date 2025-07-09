/*
Magd Elkayfe
Monday June 9 2025
Lab 11, predefined functions, recursive functions
*/


#include <iostream>
#include<cmath>
#include<cstdlib>

using namespace std;


// example 1: Calculate the hypotenuse of a right triangle
// function to collect a number

float side(){
    int s;
    cout<<"Enter a positive number: ";
    cin>>s;
    while(s <= 0){
        cout<<"Invalid! Enter a positive number: ";
        cin>>s;
    }
    return s;
}


// function that calculates the hypotenuse
// hyp = square_root(side1^2 + side2^2)
float hyp(float side1, float side2){
    return sqrt(pow(side1, 2) + pow(side2, 2));
}

// function to print results
void print_result(float side1, float side2, float hyp){
    cout<<"The hypotenuse of a right triangle with sides "<<side1<<" and "<<side2<<" is: "<<hyp<<endl;
}

// example 2: random number generator
int random_number(){
    // set different seed for rand()
    srand(time(0));
    return rand();
}



// example 3; random number between -5 and 5
int random_five(){
    // set different seed for rand()
    srand(time(0));
    return (-5 + rand() % 11);
}
// Lab exercise Part A: writing three functions
// randomly generate a number between 1 and 100
int ran_num(){
    srand(time(0));
    return (rand() % 100 + 1);
}

// calculate the falling distance of an object using the formula 
// distance = 0.5 *gravity * time^2
// time is collected from the first function and passes as an argument
float falling_distance(float time){
    return 0.5 * GRAVITY * pow(time, 2);
}

// prompt the results
void print_falling_distance(float time, float distance){
    cout<<"The falling distance in "<<time<<" seconds is "<<distance<<" meters"<<endl;
}

// example 4: recursive function
void cheer(int n){
    if(n <=1){
        cout<<"STOP"<<endl;
    }
    else{
        cout<<(n*2)<<"\t";
        cheer(n-1);
    }
}

/* TABLE OF ANALYSIS
function name          | int n | if(n <= 1) | else |               else
iterations             |     | true or false | cout<<(n*2)       | cheer(n-1)
        1               n =5 | false          5*2 = 10     5-1=4
        2               n =4 | false           4*2 = 8      4-1=3
        3               n =3 | false           3*2 = 6      3-1=2
        4               n =2 | false           2*2 = 4      2-1=1
        5               n =1 | true            STOP

10 8 6 4 STOP
*/

// example 5: factorial sequence
int factorial(int n){
    if(n != 1){
        return (n * factorial(n - 1));
    }
    else{
        return 1;
    }

}

/* TABLE OF ANALYSIS
Function
Literation|          | if(n != 1)                           | else |
                n |   return (n * factorial(n - 1))         |return 1
    1          n = 4 | true,  return (4 * factorial(3))    |   skip    |
    2          n = 3 |  true, (4* return (3 * factorial(2)))    |   skip    |
    3          n = 2 |  true, (4*3* return (2 * factorial(1)))    |    skip   |
    4          n = 1 | false,                             | return 1 |

    cout<<"The factorial of 4 is: "<<factorial(4)<<endl;
*/

// Example 6: linear recursive function
int linearfunction(int m){
    if(m > 10){
        return -6;
    }
    else{
        return (linearfunction(m +2) * (m-4));
    }
}
/* TABLE OF ANALYSIS
Function
Literation|          | if(m > 10)                           | else |
                m |   return -6                             |return (linearfunction(m +2) * (m-4))
    1          m = 3 | false,                               | linearfunction(5) * (3-4=-1)
    2          m = 5 | false,                               | linearfunction(7) * ((5-4=1) * -1)
    3          m = 7 | false,                               | linearfunction(9) * (7-4=3 * 1 * -1)
    4          m = 9 | false,                               | linearfunction(11) * (9-4=5 * 3 * 1 * -1)
    5          m = 11| true, return -6                      |

    (-6 * 5 * 3 * 1 * -1) = 90
*/

// Lab exercise part B: writing a recursive function
int mystery(int n){
    if( n<= 1){
        return 1;
    }
    else{
        return (mystery(n-1) + n*2);
    }
}
/* TABLE OF ANALYSIS
Function
Literation|int n | if(n<=1)          |else
                 | | true or false   | return (mystery(n-1) + (n*2))
   1      n = 5  | false,            |         return (mystery(4) + (5*2 =10))
   2      n = 4  | false,            |         return (mystery(3) + (4*2 =8) + 10)
   3      n = 3  | false,            |         return (mystery(2) + (3*2 = 6) + 10 + 8)
   4      n = 2  | false,            |         return (mystery(1) + (2*2=4) + 10 + 8 + 6)
   5      n = 1  | true, return 1    |

    cout<<"Result "<<mystery(5)<<endl;
    Result = 1 + 4 + 6 + 8 + 10 = 29
*/
