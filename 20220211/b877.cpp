#include<iostream>
using namespace std;

int main(){
    int a, b, ans;
    cin >> a >> b;
    if(a>b){
        cout << 100+b-a << "\n";
    }
    else{
        cout << b-a << "\n";
    }

    return 0;
}
