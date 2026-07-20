/*
here we are printing an array as we defined any value to it
loop 1 is used for user input 5 times and create an array.
loop 2 is used for printing the stored array. - pattern 1 
loop 3 is used to get sum, first by initializing sum = 0,
then sum = sum + arr[i] -> 0+1 = 1 ; 1+2 = 3; etc. 
for total sum we can just put sum  - pattern 2.

*/


#include<iostream>

using namespace std;

int main(){
    int arr[5] ;
    for(int i = 0; i<5; i++){
        cout << "enter a number:";                // cause of the enter a number: we get o/p as

        cin >>  arr[i];
    }
    for(int i = 0 ; i < 5 ; i++){

      
        cout << "the numbers are :" << arr[i] << endl;
    }
    int sum = 0; 
    
    for(int i = 0; i<5 ; i++){
        sum = sum + arr[i];        // sum += arr[i], product *= arr[i]
        cout  << sum << endl;      //cause of the the sum is: we get o/p as
    }
    cout  << sum << endl;          // outside of loop
        
}
/* output :
enter a number:1
enter a number:2
enter a number:3
enter a number:4
enter a number:5
the numbers are :1
the numbers are :2
the numbers are :3
the numbers are :4
the numbers are :5
the sum is : 1
the sum is : 3
the sum is : 6
the sum is : 10
the sum is : 15 
15 <- outside of loop. */
/* pattern 2 - sum of the array stored.*/

#include<iostream>
using namespace std;

int main(){
    int arr[5];
    for(int i=0 ; i < 5 ; i++){
        cout << "enter a number : "<< endl;
        cin  >> arr[i] ;
    
    }
    for(int i=0 ; i < 5 ; i++ ){
        cout << arr[i] << endl;
        
    }
    int sum = 0;
    int avg;
    for(int i = 0 ; i<5 ; i++ ){
        sum += arr[i];
                               /*//simple logic as we alr have sum and number of elements
                                is already defined in array. AND AVG SHOULD NOT BE IN LOOP.*/

        

    }
    avg = sum/5;
    cout << "the sum is: " << sum <<endl;
    cout << "the avg is: " << avg << endl; 

        
}

/*
enter a number : 
1
enter a number : 
2
enter a number : 
3
enter a number : 
4
enter a number : 
5
1
2
3
4
5
the sum is: 15
the avg is: 3 */

