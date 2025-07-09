/*
Magd Elkayfe 
May 28 2025, numerical Operators
*/

#include<iostream>

using namespace std;

int main(){
    cout<<"\n ------- example 1: modulus operator -------"<<endl;
    cout<<" Reminder of 7 divided by 5 = "<<(7%5)<<endl;
    cout<<"\n------- example 2: Assignment operators ------"<<endl;
    int n1 = 5;
    int n2 = 9;
    cout<<"Original n1 = "<<n1<<endl;
    cout<<"Orignal n2 = "<<n2<<endl;
    n1 ++;
    cout<<"n1++ = "<<n1<<endl;
    n2--;
    cout<<"n2-- = "<<n2<<endl;
    n1 += 4; 
    cout<<"n1 += 4 --> "<<n1<<endl;
    n2 -= 6;
    cout<<"n2 -= 6 --> "<<n2<<endl;
    
    n1 /= 3;
    n2 *= 6;
    cout<<"n1 /= 3 --> "<<n1<<endl;
    cout<<"n2 *= 6 -->"<<n2<<endl;

    n2 %= 5;
    n1 %= 2;

    cout<<"n1 %= 2 --> "<<n1<<endl;
    cout<<"n2 %= 5 --> "<<n2<<endl;

    cout<<"\n------ example 3: comparison operator -------"<<endl;
    int n3 = -15;
    int n4 = 10;

    cout<<"Original n3 =                "<<n3<<endl;
    cout<<"Orignal n4 =                 "<<n4<<endl;
    cout<<"is n3 equal to n4?           "<<(n3 == n4)<<endl;
    cout<<"is n3 greater than 0?        "<<(n3>0)<<endl;
    cout<<"is n4 less than 100?         "<<(n4<100)<<endl;
    cout<<"is n3 multiple of 3?         "<<(n3%3 == 0)<<endl;
    cout<<"is n4 is not equal to 8?     "<<(n4 != 8)<<endl;
    cout<<"is n3 not an even num?       "<<!(n3 %2 == 0)<<endl;

    cout<<"\n------ example 4: Boolean operator --------"<<endl;
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"is n even and positive?      "<<(n%2 == 0 && n>0)<<endl;
    cout<<"is n odd and negative?       "<<(n%2 != 0 && n<0)<<endl;
    cout<<"is n between 1 and 9?        "<<(n >= 1 && n<= 9)<<endl;
    cout<<"is n not between -5 and 5?   "<<!(n>=-5 && n<= 5)<<endl;
    cout<<"is n not between -5 and 5?   "<<(n<-5 || n>5)<<endl;

    cout<<"\n------ Lab 4 exercise --------"<<endl;
    int n0;
    cout<<"Enter a number: ";
    cin>>n0;

    //char ch;
    cout<<"Enter a character: ";
    char typeChar;
    cin>>typeChar;

    // triple the number using assignment operators
    n0 *= 3;
    cout<<"Triple the number                        "<<n0<<endl;

    // remainder of the character value with 60
    typeChar %= 60;
    cout<<"Remainder of the character               "<<int(typeChar)<<endl;

    // is the number <= character value
    cout<<"is the number <= character value?        "<<(n0 <= int(typeChar))<<endl;

    // is the number <= -1 pr character value !=5
    cout<<"is the number <=-1 or character value !=5? "<<(n0 <= -1 || int(typeChar) != 5)<<endl;

    // is the character value between -2 and 2
    cout<<"is the character value between -2 and 2? "<<(int(typeChar) >= -2 && int(typeChar) <= 2)<<endl;

    return 0;
}