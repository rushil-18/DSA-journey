#include<iostream>

using namespace std;

int main(){


for(int i = 1; i <= 10; i++)
{
    if(i == 5)
        break;

    cout << i << endl;
}
}

#include<iostream>

using namespace std;

int main(){
    while(true){                 //loops until password right
        int password;
        cin >> password;

        if (password == 1234){
            cout << "welcome!";
            break;
        

        
        }

    }
}



//continue : 
int main(){
for(int i = 1; i <= 5; i++)
{
    if(i == 3)
        continue;

    cout << i << endl;
}
}

