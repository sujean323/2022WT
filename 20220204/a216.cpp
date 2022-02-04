#include<iostream>
using namespace std;

long long int fn(int n){
    if(n==1){
        return 1;
    }
    else{
        return n+fn(n-1);
    }
}
long long int gn(int n){
    if(n==1){
        return 1;
    }
    else{
        return fn(n)+gn(n-1);
    }
}
int main(){
    int n;
    while(cin >> n){
        cout << fn(n) << " " <<gn(n) << "\n";
    }

    return 0;
}
