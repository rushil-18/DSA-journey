#include<iostream>


using namespace std;

void greet(){
    cout << "hello\n";
    cout << "welcome\n";
}

int main(){
    greet();
    greet();
    greet();
}
//output:
//hello
//welcomex3

//Four important words
//1. Function Name
//greet()

//Name:

//greet
//2. Return Type
//void

//means

//"This function returns nothing."

//We'll learn int, double, bool, etc., soon.

//3. Parameters
//greet()

//Inside the brackets...

//Currently:

//()

//No parameters.

//We'll add them later.

//4. Function Call
//greet();

//This actually executes the function.


#include<iostream>
#include<string>
using namespace std;

void square(){
    cout << "**********\n";
}

int main(){
    square();
    square();
    square();
    square();
    square();
}