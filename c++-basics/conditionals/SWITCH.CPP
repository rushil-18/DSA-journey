#include<iostream>
#include<string>

using namespace std;

int main(){
    int num1;
    int num2;
    char op;

    cout << "enter your first number: ";
    cin >> num1;

    cout << "enter your second number: ";
    cin >> num2;

    cout << "enter an operator (+,-,*,/,%)";
    cin >> op;

    switch (op)
    {
        case '+':
            cout << num1 + num2;
            break;
        case '-':
            cout << num1 - num2;
            break;

        case '*' :
            cout << num1 * num2;
            break;

        case '/':
            if (num2 == 0){
                cout << "cannot divide by zero";}
            else{
            cout << num1 / num2; }
            break;

        case '%':
            if (num2 == 0){
                cout << "cannot divide by zero";}
            else{
            
                
            cout << "the reminder is" << num1 % num2;}
            break;
        
        default : 
            cout << "not a valid operator";
    }
    return 0;

}