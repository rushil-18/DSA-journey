//🧠 One thing to remember

//When beginners see nested loops, they often try to understand both loops at once.

//Don't.

//Always ask:

//What does the outer loop do? (Rows)
//What does the inner loop do? (Columns)

//rectangle problems :
#include<iostream>
#include<string>

using namespace std;

int main(){
    for(int i = 1; i<=5; i++){
        for(int j=1; j<=3 ; j++){
            cout << '*';

        }
    cout << endl;
    }
}
//output:
//***
//***
//***
//***
//***

//traingle problems:

int main(){


    for(int i = 1; i <= 3; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            cout << '*';
        }
    cout << endl;
}
}
//output:
//*
//**
//***


int main(){

    for (int i= 1; i <= 5; i++){                       // 5 rows going *,**,***,****,***** (actually just 1,2,3,4,5)
                                                       // now with that we have 6 minus wrt i. means at first 6-1, 6-2, 6-3.....
        for(int j=1; j <= 6-i ; j++){          
            cout <<'*';

        }
        cout << endl;    
    }
}
//output:
//*****
//****
//***
//**
//*

#include<iostream>
#include<string>

using namespace std;

int main(){
    
    for(int i=5 ; i >= 1; i--){
        for(int j=5; j >=1; j--){
            cout<<j;
        }
        
        cout << endl;
    }
}
//output:
//54321
//54321
//54321
//54321
//54321

