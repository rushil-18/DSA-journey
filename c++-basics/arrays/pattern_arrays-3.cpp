#include<iostream>
using namespace std;

int main(){
    int arr[5];
    for(int i = 0; i < 5; i++){
        cout << "enter a number:";
        cin >> arr[i];

    }
    int count = 0;
    for(int i = 0 ; i < 5 ; i++  ){
        if(arr[i] % 2 == 0){    
            count ++;
        }

    }
    cout << "the number of even numbers: " << count; 

}


/*
Count even numbers

count = 0;

if(arr[i] % 2 == 0)
    count++;

Count positive numbers

if(arr[i] > 0)
    count++;

Count numbers greater than 10

if(arr[i] > 10)
    count++;

Count numbers divisible by 5

if(arr[i] % 5 == 0)
    count++;
    
The "between 10 and 20" one would be:

if(arr[i] >= 10 && arr[i] <= 20)
{
    count++;
}

The && means AND.*/