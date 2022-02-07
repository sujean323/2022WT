#include<iostream>
using namespace std;

int main(){
    int a1, an, d;
    cin >> a1 >> an >> d;
    int n = (an-a1+d)/d;
    for(int i=0; i<n; i++){
        cout << a1 << " ";
        a1 += d;
    }

    return 0;
}
