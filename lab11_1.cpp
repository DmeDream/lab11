#include<iostream>
#include<ctime>
#include<cstdlib>
#include<string>
using namespace std;

int main(){
    cout << "Press Enter 3 times to reveal your future." << endl ;
    cin.get();
    cin.get();
    cin.get();
    srand(time(0));
        int x = rand()%9 ;
        if(x == 1)
            cout << "You will grade A" ;
        else if(x == 2)
            cout << "You will grade B+";
        else if(x == 3)
            cout << "You will grade B" ;
        else if(x == 4)
            cout << "You will grade C+";
        else if(x == 5)
            cout << "You will grade C" ;
        else if(x == 6)
            cout << "You will grade D+";
        else if(x == 7)
            cout << "You will grade D" ;
        else if(x == 8)
            cout << "You will grade F" ;
        else
            cout << "You will grade W" ;
        return(0);
}