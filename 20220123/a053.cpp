#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    if(n<11){
        cout << n*6 << "\n";
    }
    else if(n<21){
        cout << 60+(n-10)*2 << "\n";
    }
    else if(n<41){
        cout << 80+(n-20) << "\n";
    }
    else{
        cout << 100 << "\n";
    }

    return 0;
}
