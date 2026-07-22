#include<iostream>
using namespace std;

int main(){
    int arr[5];   
    int n = 5;                                //n=5. so iterations = 4 
    for(int i=0 ; i < 5 ; i++){
        cout << "enter a number : " <<endl; 
        cin >> arr[i];

    }
    for(int pass =0; pass < n-1 ; pass++){          //2. we need it 4 more times right.

    
        for(int i=0 ; i < n-1 - pass ; i++){               //1. sorted once highest is sent backside.
            if (arr[i] > arr[i+1]){
                swap(arr[i], arr[i+1]);
        }
    }
    }
    for(int i = 0 ; i<5 ; i++){
        cout << arr[i] << " " ;

    }
}
/*2 3 6 7 9 */