#include<iostream>
using namespace std;

int main(){
    int arr[5] = {10,20,30,40,50};
    for(int i = 0 ; i < 5 ; i++){
        cout << arr[i] << " ";
    }
    for(int i = 4 ; i >=0 ; i-- ){
        cout << arr[i] << " ";

    }   
}
/*10 20 30 40 50 
50 40 30 20 10  */

//this was just reversing the array - just a normal print but to reverse indexes 
//swap() is used.

#include<iostream>
using namespace std;
int main(){
    int arr[5] = {10,20,30,40,50};
    int start = 0;
    int end = 4;

    while(start < end ){
        swap(arr[start] , arr[end]);
        start ++;
        end --;
    }
    for(int i=0; i < 5; i++){
        cout << arr[i] << endl;

    }

}
//This is called the Two-Pointer Technique
// for even number of elements in an array 


#include<iostream>
using namespace std;
int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int start = 0;
    int n = 10;
    int end = n-1;                        //or u culd just directly np.

    while(start < end){
        swap(arr[start] , arr[end]);

        start ++;
        end --;

    }
    for(int i=0 ; i < 10 ; i++){
        cout << arr[i] << endl;


    }

}

//copying an array to another array

#include<iostream>
using namespace std;
int main(){
    int arr[5] = {10,20,30,40,50};
    int arr1[5];

    for(int i =0 ; i < 5; i++){
        arr[i] = arr1[i];
        cout << arr1[i] << endl;

    }
}
