/*
1. What is an Array?
An array stores multiple values of the same data type under one name
int arr[5] = {10,20,30,40,50} -> sitting at indexes 0,1,2,3,4.
2. An Array is mutable 
-> accessible through indexing arr[0]
-> can update through indexing arr[1] = 300


*/

#include<iostream>
using namespace std;

int main(){
    int arr[5] = {10,20,30,40,50};
    cout << arr[0] << endl;
    cout << arr[1] << endl;
    cout << arr[2] << endl;
    cout << arr[3] << endl;
    cout << arr[4] << endl;


    arr[2] = 300;
    cout << arr[0] << endl;
    cout << arr[1] << endl;
    cout << arr[2] << endl;
    cout << arr[3] << endl;
    cout << arr[4] << endl;


}
