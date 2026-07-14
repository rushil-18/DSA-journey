// parameter is a variable that belongs to the function 

#include<iostream>

using namespace std;

void greet(string name){          // string is just the data type ; name is a parameter
    cout << "wassup "<< name <<endl;
}

int main(){
    greet("rushil");
    greet("shenanigan");    //thats argument
}
//output :
//wassup rushil
//wassup shenanigan



#include<iostream>

using namespace std;

void square(int n){
    for(int i=1 ; i <= n ; i++){
        cout<< "*" << n <<endl;
    }
}
int main(){
    square(5);
    square(6);
    square(7);
}
//output :
//*****
//******/
//*******/


