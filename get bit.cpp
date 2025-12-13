#include <iostream>
using namespace std;

int getBit(int num, int i) {
    return (num >> i) & 1;
}

int main() {
    int n,position;
    cout<<"Enter number:" ;
    cin>>n;
    cout<<"Enter Position:";
    cin>>position;


    cout << "Bit at position " << position << " is: " << getBit(n, position) << endl;

    return 0;
}

