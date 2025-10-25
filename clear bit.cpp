#include <iostream>
using namespace std;

int clearBit(int num, int i) {
    return num & ~(1<<i);
}

int main() {
    int n,position;
    cout<<"Enter number:" ;
    cin>>n;
    cout<<"Enter Position:";
    cin>>position;

  cout << "After clearing bit at position " << position << ": " << clearBit(n,position) << endl;


    return 0;
}


