#include<iostream>
#include<cstdlib>
#include<ctime>
#include<string>
using namespace std;

int main()
{
    int a,b,c;
    string grade1[9] ={"A","B+","B","C+","C","D+","D","F","W"};
    cout << "Press Enter 3 times to reveal your future.";
    cin.get();
    cin.get();
    cin.get();
    srand(time(0));
    int x = rand()%9;
    cout << "You will get " << grade1[x] << " in this 261102.";

    return 0;
}

// cout << "Press Enter 3 times to reveal your future.";
// cout << "You will get A in this 261102.";
