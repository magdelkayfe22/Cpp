/*
Magd Elkayfe
June 4, 2025
nested loops
*/

#include<iostream>

using namespace std;

int main(){
    cout<<"\n-------- Example 1: Continue statement--------"<<endl;
    // fill up the table according to the following code:
    int count = 0;
    int i = 10;
    while(i>5){
        i--;
        if(i%2==0){
            count += i;
            continue;
        }
        count -= 3;
    }
    cout<<"Final count is "<<count<<endl;

    /*  Table analysis
    loop iteration  |   while(i>5)  |   i--     |   if(i%2==0)      |   count += i  |   count -= 3  
    -----------------------------------------------------------------------------------------------
            1       |while(10>5)TRUE|i =10-1=9  | if(9%2==0)FALSE   |   skip        |  count = 0-3 = -3
    ----------------------------------------------------------------------------------------------------
            2       |while(9>5)TRUE |i = 9-8=8  | if(8%2==0)TRUE    | count= -3+8=5 |  skip
    -----------------------------------------------------------------------------------------------------
            3       |while(8>5)TRUE|i=8-1=7     |if(7%2==0)FALSE    | skip          | count = 5-3= 2
    ------------------------------------------------------------------------------------------------------
            4       |while(7>5)TRUE|i=7-1=6     |if(6%2==0)TRUE     | count= 2+6=8  | skip
    ------------------------------------------------------------------------------------------------------
            5       |while(6>5)TRUE|i=6-1=5     |if(5%2==0)FALSE    | skip          | count = 8-3=5
    ------------------------------------------------------------------------------------------------------
            6       |while(5>5)FALSE --->> STOP WHILE LOOP

        what would be prompting in the terminal? 
        FINAL COUNT IS 5
    */

    cout<<"\n-------- Example 2: nested loop --------"<<endl;
    int n = 0;
    //outer loop
    while(n++ < 3){
        cout<<"\n OUTER LOOP "<<n<<"\t\t";
        // inner loop
        cout<<"\tinner loop = ";
        int m = 0;
        while(m++ < 5){
            cout<<"\t"<<m;
        }
    }
    cout<<"\n-------- Example 3: nested loop--------"<<endl;
    // cinema seating grid
    // declare indentifiers
    int rows = 0;
    int seats = 0;
    // collect data 
    cout<<"Enter the number of rows = ";
    cin>>rows;
    cout<<"Enter the number of seats = ";
    cin>>seats;
    // create a 2d seating grid
    cout<<"\nSeat arrangement"<<endl;
    for(int r =1; r<= rows; r++){
        for(int s = 1; s<=seats; s++){
            cout<<"Row "<<r<<" seat "<<s<<"\t";

        }
        cout<<endl;
    }
    cout<<"\n-------- Example 4: 2D Plotting --------"<<endl;
    // 9-by-9 graph
    int graph_size = 9;
    for(int row = 1; row<= graph_size; row++){
        for(int col=1; col<=graph_size; col++){
            if(row==5 || col==5)
                cout<<" x ";
            else
                cout<<" . ";
        }
            cout<<endl;
        }

    cout<<"\n-------- Example 5: 2D Plotting of letter H --------"<<endl;
    // 10-by-10
    int plot_size = 10;
    for(int row=1; row<= plot_size; row++){
        for(int col = 1; col<=plot_size; col++){
            if((col>=3 && col<= 4 && row>=3 && row<= 8) || (col>=5 && col<= 6 && row >=5 && row<= 6) || (col>=7 && col<= 8 && row>=3 && row<= 8))
                cout<<" % ";
            else
                cout<<" . ";
        }
        cout<<endl;
    }

    cout<<"\n---------- Lab Exercise A -----------"<<endl;
    // create a number guessing game where the user guesses a number between 1-10:
    // first validate that the number entered is in the range [1-10]. if not prompt "Re-enter a valid number."
    // second provide feedback on whether the guessed number is too high, too low or correct.
    // third make sure loop continues till the user guesses the correct number.

    const int GUESS = 6;
    int num = 0;

    while(true){
        cout<<"Guess a number between 1 and 10: ";
        cin>>num;
        if(num < 1 || num > 10){
            cout<<"This number is not between 1 and 10. Try again!"<<endl;
            continue; // continue to the next loop
        }
        if(num < GUESS){
            cout<<"The entered number is too low. Try again!"<<endl;
        } 
        else if(num > GUESS){
            cout<<"The entered number is too high. Try again!"<<endl;
        } 
        // exit the loop when the guess is correct
        else{
            cout<<"Congratulations! You guessed the correct number: "<<GUESS<<endl;
            break;
        }

    }
    
    cout<<"\n---------- Lab Exercise B -----------"<<endl;
    int plot_size2 = 10;
    for(int row = 1; row <= plot_size2; row++){
        for(int col = 1; col <= plot_size2; col++){
            if((col >= 3 && col <=4 && row >= 3 && row <= 8) || (col >= 5 && col <= 6 && row >= 7 && row <= 10) || (col >= 7 && col <= 8 && row >= 3 && row <= 8))
                cout<<" % ";
            else
                cout<<" . ";
        }
        cout<<endl;
    }
    return 0;
}