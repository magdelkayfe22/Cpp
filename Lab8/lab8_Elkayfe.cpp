/*
Magd Elkayfe
June 3, 2025
Repetion: Loop Mechanisms 
*/

#include<iostream>

using namespace std;

int main(){
    cout<<"\n-------- Example 1: for loop as an increment counter ---------"<<endl;
    // for loop to count from 1-10 inclusive(including the 1 and 10)
    for(int n = 1; n <= 10; n++){
        cout << n << "\t";
    }
    // n is a local variable for of the for loop
    cout<<"\n-------- Example 2: for loop as an decrement counter ---------"<<endl;
    // for loop to count from 5 to -5 inclusive
    int m = 5;
    for(m; m >= -5; m--){
        cout << m << "\t";
    }
    cout<<endl<<"Final m = "<<m<<endl;

    cout<<"\n-------- Example 3: for loop as an increment counter with different steps ---------"<<endl;
    // print from 1 to 20 with step of 3
    for(int n = 1; n<= 20; n+= 3){
        cout<<n<<"\t";
    }
    cout<<endl;

    cout<<"\n-------- Example 4: for loop with nested conditional statement ---------"<<endl;
    // print from 0 to 30 with a step of 4. if the count is multiplied of 5, it will print HELLO instead of the number 
    for(int step =0; step <=30; step +=4){
        if(step %5==0 && step != 0)
            cout<<"HELLO"<<"\t";
        else
            cout<<step<<"\t";
    }
    
    cout<<"\n-------- Example 5: for loop with nested conditional statement ---------"<<endl;
    // count how many numbers are multiplied 5 from a counter between -10 and 10 with a step 3
    int counter_mul5 = 0;
    for(int counter = -10; counter <= 10; counter +=3){
        cout<<counter<<"\t";
        if(counter %5 == 0 && counter != 0)
            counter_mul5 ++;
    }
    // prompt results 
    cout<<endl<<"There is/are "<<counter_mul5<<" number/s multiple of 5"<<endl;

    cout<<"\n-------- Example 6: for loop as an increment counter ---------"<<endl;
    // add all even numbers from a counter between -1 and 9
    int sum_even = 0;
    for(int n = -1; n<=9; n++){
        cout<<n<<"\t";
        if(n%2==0 && n!=0){
            sum_even += n;
    }
    }
    //prompt results 
    cout<<endl<<"Sum of all even numbers = "<<sum_even<<endl;


    cout<<"\n-------- Lab Exercise A ---------"<<endl;
    // fill up the table
    int sum = 0, count = 0;
    for(int n = 20; n> 10; n -= 2){
        if (n % 3 == 0)
        {
            count ++;
            continue;
        }
        sum +=n;
    }
    cout<< "The sum is: "<<sum<<endl
        << "The count is: "<<count<<endl;

    /*
    Table 
    Loop iteration     |    n    |  n>0 (T/F) |   |   if(n%3==0)   |   count++    |   sum+=n      |    n-=2
            1          |    20   |    20>10 (true) | False          | skip         | sum = 0 +20 =20|  n= 20-2=18 
            2               18          18>10 (True)  True            1              skip               n = 18-2= 16
            3               16      16>10 (true)        false            skip       sum = 20 + 16 = 36    n = 16-2 = 14
            4               14          14>10 true      false           skip          sum = 36+ 14 = 50   n = 14-2 = 12
            5               12          12>10 true      true            2             skip                 n = 12-2 = 10
            6               10          10>10 false >> STOP FOR LOOP

        PROMPT
        The sum is 50
        The count is 2    

        
    */

    cout<<"\n-------- Lab Exercise B ---------"<<endl;
    int i = 0, add = 0;
    while(i<=10){
        i++;
        if(i<5 && i != 2){
            cout<<"i = "<<i<<endl;
        }
        else{continue;}
            add +=i;
    }
    cout<<"add = "<<add<<endl;
    /*
    Table
    Loop iteration  |   i<= 10 (T or F) |   i++ |   if(i<5 && i !=2) T o F  |   cout<<"i = "<<i;    | else T o F    |   add +=i;
    -----------------------------------------------------------------------------------------------------------------------------
            1       |   True            | 0+1=1 |   True                    |cout<<"i = 1"<<i;      | True          | 1
            2       | True              | 1+1=2 |   False     ---->>> SKIP
            3       | True              |2+1 = 3|   True                    |cout<<"i = 3"<<i;      | True          | 4
            4       | True              |3+1 = 4|   True                    |cout<<"i = 4"<<i;      | True          | 8
            5       | True              |5+1 = 6| False ---> skip loop  
            6       | True              |6+1=7  |False-->>
            7       | True              |7+1=8  |False-->
            8       |True               |8+1=9  |False-->
            9       |True               |9+1=10 |False--->
            10      |True               |10+1=11|False--->
            11      |False ----> SKIP LOOP
    */

    cout<<"\n------ WHILE LOOP -------"<<endl;
    cout<<"\n--------- example 7: while loop as a counter -------"<<endl;
    //use a while loop to print from 1 to 5, inclusive
    // intial value for the while loop
    m = 1;
    while (m<=5)
    {
        cout<<m<<"\t";
        m++; // update of loop variable 'm'
    }
    cout<<"\n-------- Example 8: while loop as a decrement counter ---------"<<endl;
    //use while loop to print from 3 to 0
    int p = 3;
    while(p>=0){
        cout<<p<<"\t";
        p--;
    }
    cout<<endl<<"Update loop variable within the while loop condition"<<endl;
    p = 3;
    while(p-->=0){
        cout<<p<<"\t";
    }
    cout<<"\n-------- Example 9: while loop to validate a number ---------"<<endl;
    // enter a number between 10 and 20. use a while to recollect the number if it is not between 10 and 20
    int number;
    cout<<"Enter a number: ";
    cin>>number;
    while(!(number >=10 && number<=20)){
        cout<<"Invalid! Enter a number between 10 and 20: ";
        cin>>number;
    }
    cout<<"Entered number = "<<number<<endl;

    cout<<"\n-------- Example 10: do-while loop ---------"<<endl;
    char choice = 'y';
    do{
        cout<<"Enter a number: ";
        cin>>number;

        if(number==0){
            cout<<"The number is zero"<<endl;
        }
        else if(number%2==0){
            cout<<number<<" is even!"<<endl;
        }
        else{
            cout<<number<<" is odd!"<<endl;
        }
        cout<<"Do you want another run? ";
        cin>>choice;
    }while (choice == 'y' || choice == 'Y');
    cout<<"Thank you for using our services!"<<endl;

    cout<<"\n-------- Example 11: do while loop as a checkpoint ---------"<<endl;
    // do-while loop to validate if the number is between 1 and 9
    int num;
    do{
        cout<<"Enter a number: ";
        cin>>num;

    }while(!( (num>= 1) && (num<=9) ));
    cout<<num<<" is valid!"<<endl;

    cout<<"\n-------- Example 12: break statements in a loop ---------"<<endl;
    // collect and sum four negative numbers. if the user enters a positive number or zero, the loop will terminate 
    int sum_negative = 0;
    int loop_counter = 1;
    int neg_number;
    cout << "Enter four negative numbers: ";
    while(loop_counter++ <=4){
        cin>>neg_number;
        if(neg_number < 0){
            sum_negative += neg_number;
        } else {
            cout<<"A non-negative number was entered! Loop will be terminated!"<<endl;
            break;
        }
    }
    // prompt results
    cout << "The sum of all negative numbers = " << sum_negative << endl;


     cout<<"\n-------- Example 13: break statement in a loop ---------"<<endl;
     // simulate = ATM
     int balance = 1000;
     int withdraw_amount = 0;
     int selection;
     char choice_transcation = 'y';
     do{
        cout<<"How can I help you today? "<<endl;
        cout<<"1 for account balance"<<endl;
        cout<<"2 for withdraw"<<endl;
        cout<<"3 for exit"<<endl;
        cin>>selection;
        if(selection==1){
            cout<<"Your balance is $"<<balance<<endl;
            cout<<"Do you want to make another transcation: ";
            cin>>choice_transcation;
            if(choice_transcation != 'y' && choice_transcation != 'Y'){
                break;
            }
        }
        else if(selection==2){
            cout<<"How much do you want to withdraw? ";
            cin>>withdraw_amount;
            while(withdraw_amount>balance){
                cout<<"Insufficent fund. Enter an amount less than "<<balance<<endl;
                cin>>withdraw_amount;
            }
            cout<<"Withdrew amount $"<<withdraw_amount<<endl;
            balance -= withdraw_amount;
            cout<<"Do you want to make another transcation: ";
            cin>>choice_transcation;
            if(choice_transcation != 'y' && choice_transcation != 'Y'){
                break;
            }
        }
        else if(selection==3){
            cout<<"Thank you for banking with us! Good-Bye!"<<endl;
            break;
        }
        else{
            cout<<"Invalid selection! Try again!"<<endl;
        }
     }while(true);

    return 0;
}