// for loop : A for loop is just a while loop with the setup written neatly in one place.
// for(initialization ; condition ; update)
#include<iostream>
using namespace std;

int main(){

    int start = 1;  //isnt this req? - isnt
    int i;
    cout << "eneter a number:";
    cin >> i;

    for(int start=1 ; start<=i ; start++ ){
        cout << start << endl;

    }

    return 0;

    
}
//output:
//eneter a number:5
//1
//2
//3
//4
//5

//exercises :
#include<iostream>
using namespace std;

int main(){

    int start = 1;  //isnt this req?
    int i = 10;           //you dont need an extra variable for this program
    

    for(int start=1 ; start<=i ; start++ ){
        cout << start << endl;

    }

    return 0;

    
}
//output:
//1
//2
//3
//4
//5
//6
//7
//8
//9
//10
//reverse 
#include<iostream>
#include<string>

using namespace std;

int main(){
    int j=1;
    for(int i=5 ; j<=i; i--){
        
        cout << i << endl;
    }
}
//output:
//5
//4
//3
//2
//1
//without initializing another variable
#include<iostream>
#include<string>

using namespace std;

int main(){
    
    for(int i=5 ; i >= 1; i--){
        
        cout << i << endl;
    }
}
//output:
//5
//4
//3
//2
//1


#include<iostream>
using namespace std;

int main(){

    
    int i = 1;
    

    for(int start=10 ; i<=start ; start-- ){
        cout << start << endl;

    }

    return 0;

    
}


#include<iostream>
using namespace std;

int main(){

    int a = 1;
    int b;
    cout << "enter a number:";
    cin >> b;

    for(int c = b; a<=c ; c--){  //cause if u do for(int b )- the system wont take the user input itll be ignored
        cout << c << endl;
    }
    return 0;
}



