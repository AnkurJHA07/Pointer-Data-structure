#include <iostream>
using namespace std;

int main(){
    int a = 5;
    //creating a refrence araible
    int& b = a;
    cout << a << endl;
    cout << b << endl;

    a++;
    cout << a << endl;
    cout << b << endl;

    b++;
    cout << a << endl;
    cout << b << endl;
    return 0;
}