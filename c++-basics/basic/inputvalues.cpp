#include<iostream>
#include<string>

using namespace std;

int main(){

    string name;
    int age;
    double cgpa;
    bool married;
    char gender;

    cout << "enter your name :";     //not over yet, here we just created a input box using cin for variable name.
    cin >> name;                     //only reads one word btw after a space its gone so we use getline(cin,name)

    cout << "enter your age :";
    cin >> age;

    cout << "enter your cgpa : ";
    cin >> cgpa;

    cout << "are you married (true/false) :";
    cin >> boolalpha >> married;               //you can input true or false

    cout << "enter your gender : ";
    cin >> gender;


    //output design
    cout << "\n=======STUDENT DETAILS==========\n";

    cout << "Student name is : " <<name <<"\n";
    cout << "Age is :" <<age << "\n";
    cout << "cgpa:" <<cgpa << "\n";
    cout << "Married : "<< boolalpha << married << "\n";   //you get output as true or false instead of 1 or 0.
    cout << "gender :" << gender << "\n";
    
    return 0;


    }

    //enter your name :rushil
//enter your age :20
//enter your cgpa : 8.15
//are you married (true/false) :false
//enter your gender : M

//=======STUDENT DETAILS==========
//Student name is : rushil
//Age is :20
//cgpa:8.15
//Married : false
//gender :M