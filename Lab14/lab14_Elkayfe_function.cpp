/*
Magd Elkayfe
June 17 2025 
console failure and io files 
*/

#include<iostream>
#include<fstream>
// Declare the objects to handle the input and output files
ifstream fin;
ofstream fout;

using namespace std;

// example 1: console failure 
void checknumber(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;

    if(cin.fail())
    cout<<"ERROR! input dismatched data type"<<endl;
    else
        cout<<"Entered number = "<<num<<endl;
    
    // clear cin flat
    cin.clear();
    cin.ignore(10000, '\n');

    // prompt message to end function 
    cout<<"--- END OF FUNCTION! ---"<<endl;
    cout<<num<<endl;
}
// example 2: Function that validates and returns a number
float validatenumber(){
    float n;
    bool isNotValid = false;
    do{
        cout<<"Enter a number: ";
        cin>>n;
        isNotValid = cin.fail();
        cin.clear();
        cin.ignore(10000, '\n');

    }while(isNotValid);
    return n;
}

// example 3: read write 
void readfile(string filename){
    fin.open(filename);
    // declare a string variable to temporary hold each line in the file
    string line;
    /*
    use a loop to read each line in the file.
    use *getline* to read each line
    */
   int linecounter = 1;
   while(getline(fin, line)) {
       cout << "Line " << linecounter << ": " << line << endl;
       linecounter++;
   }
   // close the file
   fin.close();
}  

// example 4: write a file
// fout open:
// if the file exists, it will overwrite the file
// if the file does not exist it will create a new one

void writefile(string filename){
    fout.open(filename);
    // write the following text in the 'filename'
    for(int n = 1; n <= 3; n++){
        fout<<"Good morning "<<n<<endl;
    }
    fout<<"Magd Elkayfe"<<endl;
    fout.close();
}

// example 5: append data into 
void appendfile(string filename){
    fout.open(filename, ios::app);

    for(int n = 3; n>=1; n--){
        fout<<n<<endl;
    }
    fout<<"GAME OVER!"<<endl;

    fout.close();
}

// example 6: to check if a file existed 
// function that returns true if a file exists or false if the file doesnt exist
bool checkfile(string filename){
    fin.open(filename);
    if(fin.fail())
        return false;
    else
        return true;
}

// Lab Exercise a:
// function that collects two numbers and uses the following operations '+, -, *, /, and %' operations 

int operation(int num1, int num2){
    char oper;

    while(true){
        cout<<"Enter an operation: ";
        cin>>oper;

        if(cin.fail()){
            cin.clear();
            cin.ignore(10000, '\n');
            cout<<"INVALID! Try again.";
            continue;
        }
        if (oper == '-')
            return num1 - num2;
        else if (oper == '+')
            return num1 + num2;
        else if (oper == '*')
            return num1 * num2;
        else if(oper == '/'){
            if(num2 == 0){
                cout<<num2<<" Cannot divide by zero.";
                continue;
            }
            return num1/num2;
        }
        else if (oper == '%'){
            if(num2 == 0){
                cout<<num2<<" Cannot modulo by zero.";
                continue;
            }
            return num1 % num2;
        }
        else{
            cout<<"Invalid Operator! Try again.";
        }
    }
}

// Function to collect two numbers and perform an operation
void num_operation() {
    int num1;
    cout<<"Enter the first number: ";
    cin>>num1;

    // check if num1 is valid
    while(cin.fail()){
        cin.clear();
        cin.ignore(10000, '\n');
        cout<<"Invalid! Enter the first number: ";
        cin>>num1;
    }
    int num2;
    cout<<"Enter the second number: ";
    cin>>num2;

    // check if num2 is valid
    while(cin.fail()){
        cin.clear();
        cin.ignore(10000,'\n');
        cout<<"Invalid! Enter the second number: ";
        cin>>num2;
    }

    int result = operation(num1, num2);
    cout << "Result: " << result << endl;
}

// Lab exercise b: 
// function to create and write a new text file: 'data_user.txt'
// the text file will contain 'This is my output file - Students full name.\n'

void write_file(string filename){
    fout.open(filename);
    fout<<"This is my output file - Magd Elkayfe.\n"<<endl;
    fout.close();
}

// append
void append_file(string filename){
    fout.open(filename, ios::app);
    fout<<"This is the appended message."<<endl;
    fout.close();
}
// new file and overwrite in file
void createandoverwrite(string filename, string text){
    fout.open(filename);
    fout<< text;
    fout.close();   
}