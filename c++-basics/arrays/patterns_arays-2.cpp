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

