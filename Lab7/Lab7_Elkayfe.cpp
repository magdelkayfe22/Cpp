/*
Magd Elkayfe 
June 2, 2025
Lab 7: Switch-case statment
*/

#include<iostream>

using namespace std;

int main(){
    cout<<"-------- Example 1: switch case --------"<<endl;
    //switch-case to pick a day. The day is selected by number
    // declare variables
    int day;
    string dayoff ="";
    // collect the days
    cout<<"Pick a day off: "<<endl;
    cout<<"1 for Monday"<<endl;
    cout<<"2 for Tuesday"<<endl;
    cout<<"3 for Wednesday"<<endl;
    cout<<"4 for Thursday"<<endl;
    cout<<"5 for Friday"<<endl;
    cin>>day;
    //switch-case statment
    switch(day)
    {
    case 1:
    dayoff = "Monday";
    break;
    case 2: 
    dayoff = "Tuesday";
    break;
    case 3:
    dayoff = "Wednesday";
    break;
    case 4:
    dayoff = "Thursday";
    break;
    case 5:
    dayoff = "Friday";
    break;
    default:
    dayoff = "undefined";
    break;
    }
    // prompt results
    cout<<"Your day off is = "<<dayoff<<endl;

    cout<<"-------- Example 2: switch case --------"<<endl;
    // use switch case statemtn to select a gender. Gender is selected with a character
    // declare variables

    char gender;
    string selectedgender = "";
    // collect the gender
    cout<<"Pick a gender: "<<endl;
    cout<<"Enter m or M for male"<<endl;
    cout<<"Enter f or F for female"<<endl;
    cout<<"Enter o or O for other"<<endl;
    cin>>gender;
    //switch case
    switch(gender)
    {
    case 'm': case 'M':
    selectedgender = "MALE";
    break;
    case 'f': case 'F':
    selectedgender = "Female";
    break;
    case 'o': case 'O':
    selectedgender = "OTHER";
    break;
    default:
    selectedgender = "UNDEFINED";
    break;
    }
    // prompt results
    cout<<"Picked gender = "<<selectedgender<<endl;

    cout<<"-------- LAB exercise: --------"<<endl;

    // prompt user if they want to double the number. The user will type Y or y to select 'yes' or N or n for 'no'.

    //declare variables
    int number;
    char choice;

    // prompt user to enter a number
    cout<<"Enter a number: "<<endl;
    cin>>number;

    // prompt user if they want to double the number if selected other character the number will be set to zero
    cout<<"Do you want to double the number? (Y/N): "<<endl;
    cin>>choice;

    // switch case statement
    switch(choice)
    {
    case 'y': case 'Y':
        cout << "Doubled number: " << (number * 2) << endl;
        break;
    case 'n': case 'N':
        cout << "Number not doubled: " << number << endl;
        break;
    default:
        number = 0;
        break;
    }
    // prompt the results 
    cout<<"The number is set to "<<number<<endl;

    return 0;
}