//You can have multiple functions with the same name as long as their parameter list is different.

//int add(int a, int b);

//double add(double a, double b);

//int add(int a, int b, int c)

 //Rule 1

//Different number of parameters ✅

//void print(int a);

//void print(int a, int b);

//Allowed.

//Rule 2

//Different data types ✅

//void print(int a);

//void print(double a);

//Allowed.

//Rule 3

//Different order of data types ✅

//void display(int a, double b);

//void display(double a, int b);

//Allowed.

//NOT Allowed

//Changing only the return type

//int sum(int a, int b);

//double sum(int a, int b);

//❌ Error.

//Because when you write

//sum(2,3);

//the compiler has no way to know which one you meant.

#include<iostream>

using namespace  std;

void printNumbers(int a){
    cout << a << endl;
}
void printNumbers(double a){
    cout << a << endl;
}

int main(){
    printNumbers(23) ;
    printNumbers(9.5);
}

#include<iostream>

using namespace std;

int sum(int a, int b){
    return a +b;
}
int sum(int a, int b, int c){
    return a+b+c;
}

int main(){
    cout << sum(9,5) << endl;
    cout << sum(1,2,3) << endl;
}


#include<iostream>

using namespace std;

int area(int a){
    return a * a;
}
int area(int l, int b){
    return l * b;
}
int main(){
    cout << " square = " << area(5) << endl;
    cout << "rectangle = " << area(5,5) << endl;
}

#include<iostream>

using namespace std;

int maximum(int a, int b){
    if (a > b ){
        return a;
    }
    else if( b > a){
        return b;

    }

}
double maximum(double a, double b){
    if (a > b ){
        return a;
    }
    else if( b > a){
        return b;

    }
}
int main(){
    cout << maximum(10,20) << endl;
    cout << maximum(10.2, 10.9) << endl;


}






