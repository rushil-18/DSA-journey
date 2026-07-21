#include <iostream>
using namespace std;

int main()
{
    int arr[5];

    // Take input
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter a number: ";
        cin >> arr[i];
    }

    // Assume the first element is the maximum
    int max = arr[0];

    // Start from index 1 because arr[0] is already stored in max
    for (int i = 1; i < 5; i++)
    {
        // If current element is larger than max,
        // replace max with the current element
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    // Print only after checking every element
    cout << "Maximum element = " << max << endl;

    return 0;
}



#include<iostream>
using namespace std;

int main(){
    int arr[5];
    for(int i = 0; i < 5 ; i++){
        cout << "enter a number:" ;
        cin >> arr[i]; 
    }
    
    for (int i = 0 ; i < 5 ; i++){
        cout << arr[i] << " ";
    }
    int min = arr[0];
    for(int i = 1 ; i < 5 ; i++){
        if (arr[i] < min ){
            min = arr[i];
        }
    }
    cout << "the minimun number is :" << min;

}
    
/*enter a number:1
enter a number:2
enter a number:3
enter a number:4
enter a number:5
1 2 3 4 5 the minimun number is :1*/

// finding the second largest number in an array 

/* two situatuons arr = 10,20,40,30
1. algorithm to find the largest 
2. alogorithm to find second largest -
-> we found largest 20,  then second largest next up we got 10
-> 40 shows up, it is largest. then 20 = second largest which was largest
-> 30 shows up, it is not largest. but second largest so replaced. 
-> and for duplicate values for eg. 50,40,50 then both first and second would be same
-> we need a number which is arr[i] > secondlargest && arr[i]!= Largest
*/

#include<iostream>
using namespace std;
int main(){
    int arr[6] = {10,20,40,30,50,50};
    int Largest;
    int secondlargest;
    if (arr[0] > arr[1]){
        Largest = arr[0];
        secondlargest = arr[1];
    }
    else{
        Largest = arr[1];
        secondlargest = arr[0];

    }
    for(int i = 2; i < 6 ; i++){
        if(arr[i] > Largest){
            secondlargest = Largest;                          // if we did reverse here then largest and second largest would be equal.
            Largest = arr[i];
            
        }
        else if(arr[i] > secondlargest && arr[i] != Largest){
            secondlargest = arr[i];

        }
    
    
    }
    cout << "the largest no. is" << Largest << endl;
    cout << "the second largest no. is " << secondlargest << endl;

}
// what if first two elements in array are same.

#include<iostream>
using namespace std;
int main(){
    int arr[6] = {10,20,40,30,50,50};
    int Largest = arr[0];
    for(int i=0 ; i < 6 ; i++){
        if(arr[i] > Largest ){                              //finding largest and storing it for initialization aswell could be answer.
            Largest = arr[i];
        }
    }
    int secondlargest;
    bool foundSecond = false;
    for(int i=0 ; i < 6 ; i++){
        if(arr[i]!= Largest && foundSecond == false){      // shouldnt be equal to largest and to make true && true.
            foundSecond =  true;                           //here initialization is done. so initialization dosent itterate.
            secondlargest = arr[i];


        }
        else if(arr[i] != Largest && arr[i] > secondlargest ){         // this is pretty obvious. here we are iterating to find the secondlargest
            secondlargest = arr[i];
        }
    }

    
 cout << "the largest element is :" << Largest <<endl;
 if(foundSecond == true){
    cout << "second largest element is : " << secondlargest << endl;

 }
 else {
    cout << " no second largest element" ; 
 }
}