#include <iostream>

using namespace std;

int main()
{
    int value,time,newAmount;
    cin >> value;
    cin >> time;
    for (int i=1; i<=time; i++){
        newAmount = value*0.07;
        newAmount += value;
        value = newAmount;
    }
    cout << newAmount;
    return 0;
}
