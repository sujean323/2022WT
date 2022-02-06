#include<iostream>
using namespace std;

int main(){
    int n;
    int a[1000];
    while(cin >> n){
        int t = 0;
        while(n){
            a[t] = n%2;
            n /= 2;
            t++;
        }
        for(int i=t-1; i>=0; i--){
            cout << a[i];
        }
        cout << "\n";
    }

    return 0;
}
