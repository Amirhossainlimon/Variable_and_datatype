#include <iostream>
using namespace std;

int updateBit(int num, int i) {
    int n= num & ~(1<<i);
    return n|(1 << i);
}

int main() {
    int n,position;
    cout<<"Enter number:" ;
    cin>>n;
    cout<<"Enter Position:";
    cin>>position;

  cout << "After updating bit at position " << position << ": " << updateBit(n,position) << endl;


    return 0;
}

