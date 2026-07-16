#include<iostream>

using namespace std;

int main(){
    int arr[5]={5,10,15,20,25};
    for(int i = 0; i < 5; i++){          // i is index 0 is 5 initialization ; <5 is 4 so 25.
        cout << arr[i] << endl;
    }
return 0;
}
/*
output :
5
10
15
20
25
*/

#include<iostream>

using namespace std;

int main(){
    int arr[5]={5,10,15,20,25};
    for(int i = 4; i >= 0; i--){          //reverse logic
        cout << arr[i] << endl;
    }
return 0;
}
/*output:
25
20
15
10
5*/
/*
#include<iostream>

using namespace std;

int main(){
    int arr[5]={5,10,15,20,25};

    for(int i=0 ; i < 5 ; i++){

        cout << arr[i]+=5 << endl;            //its correct but kind of better to reassign it to varible.

    }
    return 0;
}
*/

#include<iostream>

using namespace std;

int main(){
    int arr[5]={5,10,15,20,25};

    for(int i=0 ; i < 5 ; i++){

        arr[i]+=5;
        cout << arr[i] << endl;           //like this. 

    }
    return 0;
}
/*
10
15
20
25
30*/
