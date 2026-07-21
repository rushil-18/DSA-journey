/* searching for a number linearly in an array is linear search */

#include<iostream>
using namespace std;
int main(){
    int arr[5];
    for(int i=0; i < 5; i++){
        cout << "enter a number:" << endl;
        cin >> arr[i];
    }
    int target;
    cout << "enter your linear search number:";
    cin >> target;
    
    cout << "your array is : " <<endl;
    for(int i =0; i < 5; i++){
        cout << arr[i] << " ";

    }
    bool found = false;
    for(int i=0 ; i<5 ; i++){
        if(arr[i] == target){

            found = true;
            cout << "found" << endl;
            cout << "found at index:" << i;
            break;
        
        }
        
            
    }
    if(found == false){
        cout << "target not found";      //we cannot put it in loop
    }
}

//version without break - it finds multiple elements. the break only finds one and breaks the loop.
#include<iostream>
using namespace std;

int main(){
    int arr[5];
    for(int i=0 ; i < 5 ; i++){
        cout << "enter a number:";
        cin >> arr[i];
        
    }
    int target;
    cout << "enter a target linear search number: ";
    cin >> target;
    
    int count = 0;
    
    for(int i=0 ; i<5 ; i++){
        if(arr[i] == target){
            
            count ++;
            cout << "found at index :" << i << endl;
            
        
        }
    cout << "the number of elements are: " << count; 
        
    }
    


