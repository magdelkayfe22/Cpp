/* 
Magd Elkayfe 
Lab , Input and Output stream
May 27, 2025
*/

#include<iostream>
// cin = console input
// cout = console output 
// endl = end line 

using namespace std;

// loading function
int main(){
    cout<<"Hello World!"<<endl; // ; is end of code line
    cout<<"Magd Elkayfe\n"; 
    cout<<"\tWelcome to C++";

    cout<<"\n----- Example 2: String and char variables, cin ------"<<endl;
    string lastname;
    string firstname = "Magd";
    cout<<"User first name = "<<firstname<<endl;
    firstname = "Anna";
    cout<<"Updated name = "<<firstname<<endl;
   
    // collect lastname
    cout<<"Enter a last name ";
    cin>>lastname;

    // prompt to collect last name
    cout<<"The collected last name = "<<lastname<<endl;

    cout<<"\n----- Example 3: char variables -------"<<endl;

    // declare variable
    char symbol;
    // declare and initialize a char variable
    char character = '@';

    // collect a symbol
    cout<<"Enter a symbol: ";
    cin>>symbol;

    //prompt result
    cout<<"Symbol = "<<symbol<<"\ncharacter = "<<character<<endl;

    cout<<"\n------ Lab2 Exercise ------"<<endl;

    //declare a country
    string Country;

    // Gender
    char Gender;

    // user input
    cout<<"Enter a Country: ";
    cin>>Country;

    cout<<"Select a gender (f for female, m for male, o for others): ";
    cin>> Gender;

    // prompt results 
    cout<<"Entered country:\t"<<Country<<endl;
    cout<<"Selected gender:\t"<<Gender<<endl;


    return 0;
}
