 /*
Magd Elkayfe
June 17 2025 
console failure and io files 
*/

#include<iostream>
#include<fstream>

using namespace std;


#include "lab14_Elkayfe_function.cpp"

int main(){
    cout<<"\n------ Example 1: Console Failure -------\n"<<endl;
    checknumber();

      // recollect another number
    checknumber();

    cout<<"\n------- Example 2: Function that validates and returns a number -------\n"<<endl;
    float number = validatenumber();
    cout<<"Validated number = "<<number<<endl;

    cout<<"\n----- Example 3: read the file -------\n"<<endl;
    string fn = "testing.txt";
    readfile(fn);

    cout<<"\n----- Example 4: write in the file -------\n"<<endl;
    fn = "emailaddress.txt";
    writefile(fn);
    
    cout<<"\n----- Example 5: append data into existing data -------\n"<<endl;
    fn = "simplefile.txt";
    appendfile(fn);

    cout<<"\n----- Example 6: check if a file exists-------\n"<<endl;
    fn = "testing.txt";
    cout<<"Does file "<<fn<<" exist? = "<<checkfile(fn)<<endl;

   cout<<"\n------ Lab exercise 1: performing operations --------\n"<<endl;
    num_operation();

    cout<<"\n------ Lab exercise 2: performing operations --------\n"<<endl;
    // create data_user.txt
    fn = "data_user.txt";
    write_file(fn);

    // append to a new file
    fn = "new_file.txt";
    append_file(fn);

    // create and overwrite new file
    fn = "overwritten.txt";
    string text = "This is new file with new text";
    createandoverwrite(fn, text);
    
    return 0;
}
