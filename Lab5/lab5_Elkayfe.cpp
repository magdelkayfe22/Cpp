/*
Magd Elkayfe 
May 29 2025, 
Lab 5: Strings Method 
*/

#include<iostream>

using namespace std;

int main(){
    cout<<"\n------ example 1: characters value ---------"<<endl;
    char symbol = '&'; // code = 38
    cout<<"Original symbol = "<<symbol<<endl;
    symbol += 3; // symbol = 38+3 = 41
    cout<<"Updated symbol = "<<symbol<<endl;

    cout<<"\n------ example 2: string indexing ---------"<<endl;
    string username = "peterpan";
    cout<<"The third character is = "<<username[2]<<endl;
    cout<<"The fifth character is = "<<username.at(4)<<endl;
    cout<<"\n------ example 3: String Length ---------"<<endl;
    // lenght () returns the number of characters in a string
    int len_username = username.length();
    cout<<"username has "<<len_username<<" characters. "<<endl;
    // finding the last character in a string using the length() method
    cout<<"The last character is = "<<username[len_username-1]<<endl;

    cout<<"\n------ example 4: string concatenation, + ---------"<<endl;
    string country = "UK";
    // concatenate username and country 
    string username_country = username+"@"+country+"@";
    cout<<"concatenate username and country = "<<username_country<<endl;

    cout<<"\n------ example 5: substracting characters ---------"<<endl;
    // substract the word 'pan' from the username_country variable
    string subs_word = username_country.substr(5,3);
    cout<<"The substracted word = "<<subs_word<<endl;

    cout<<"\n------ example 6: inserting characters into a string ---------"<<endl;
    // insert the word 'from' after the first @ symbol
    username_country.insert(9, "from = ");
    cout<<"After insert method = "<<username_country<<endl;

    cout<<"\n------ example 7: append characters to the end of a string ---------"<<endl;
    // append year '2025'
    username_country.append("2025");
    cout<<"After append method = "<<username_country<<endl;

    cout<<"\n------ example 8: replacing characters within a string ---------"<<endl;
    // replace the word 'pan' with joseph
    username_country.replace(5,3, "Joseph");
    cout<<"After replace method = "<<username_country<<endl;

    cout<<"\n------ example 9: erase characters from a string ---------"<<endl;
    // erase the word 'er'
    username_country.erase(3,2);
    cout<<"After erase method = "<<username_country<<endl;

    cout<<"\n------ example 10: find characters in a string ---------"<<endl;
    // find the index of 'ph'
    int find_ph = username_country.find("ph");
    cout<<"ph is in index = "<<find_ph<<endl;

    cout<<"\n------ Lab exercise ---------"<<endl;
    // ask user to type a word
    cout<<"Type a word: ";
    string new_word;
    cin>>new_word;
    // print the 4th character of the word
    cout<<"The 4th character is: "<<new_word[3]<<endl;
    // the length of the word is
    int len_new_word = new_word.length();
    cout<<"The length of the word is: "<<len_new_word<<" characters."<<endl;
    // replace three characters from the second character with "-- $ --"
    new_word.replace(1,3, "--$--");
    cout<<"After replacement: "<<new_word<<endl;

    //remove two characters from the end of the word
    new_word.erase(new_word.length() - 2);
    cout<<"After removing two characters from the end: "<<new_word<<endl;

    return 0;
}