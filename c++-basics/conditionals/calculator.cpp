#include<iostream>
#include<string>

using namespace std;

int main(){
    int number1;
    int number2;
    char op ;
   

    cout << "enter your first number:";
    cin >> number1;

    cout << "enter your second number: ";
    cin >> number2;

    cout << "enter an operator: (+,-,*,/,%)";
    cin >> op;


    if(op == '+'){
        cout << "the sum is : " << number1 + number2 ;
    }
    else if (op == '-'){
        cout << "the difference is :" << number1 - number2;

    
    }
    else if(op == '*'){
        cout << "the multiplication is : " << number1 * number2;
    }
    else if(op == '/'){
        if (number2 == 0){
            cout << "cannot perform division by zero";
        }
        else {
        cout << "the division is : " << number1 / number2;
        }
    }
    else if(op == '%'){
        cout << "the remainder is : " << number1 % number2;
    }
    else{
        cout << "invalid operator";
    }
    return 0;





    
}

