//void returns nothing - it does a functions set of instruction and kudha hafizz
// so if we were to calculate or perform something extra we tend to add
//return values like int, bool,      - and we use return for it.

#include<iostream>

using namespace std;

int add(int a , int b){
    return a + b;
}

int main(){
    int answer =  add(10,20);         //need a variable to display values btw blah whys this so complicated
    cout << answer;
    cout << add(10,30) << endl;    
    
    
                                   

}

#include<iostream>
using namespace std;

int maximum(int a, int b){

    if(a > b){
        return a;
    }
    else if(b > a){
        return b;
    }
    else{
        cout << "Both numbers are equal" << endl;
        return a;
    }

}

int main(){

    cout << maximum(5,5);

    return 0;
}




#include<iostream>
using namespace std;

bool even(int n){

    if(n % 2 == 0){
        return true;
    }
    else{
        return false;
    }

}

int main(){

    cout << boolalpha << even(8);

    return 0;
}








#include<iostream>

using namespace std;

int factorial(int n){
    if(n<0){
        return 0;
    }
    else if( n==0 || n==1){
        return 1;
    }
    else {
        int fact = 1;
        for(int i= 1 ; i<=n; ++i){       
            fact = fact*i;              //factorial logic. fact=1; then i<=n. n could be anything. ++i means pre increment - efficient for loops.
        } 
    return fact;
    }
}
    



int main(){
    cout << factorial(5);
}
     


//power doesnt actually exist in c++

#include<iostream>
using namespace std;

int power(int n, int m){

    int answer = 1;

    for(int i = 1; i <= m; i++){
        answer = answer * n;
    }

    return answer;

}

int main(){

    cout << power(2,5);

    return 0;
}