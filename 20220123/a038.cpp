#include<iostream>
using namespace std;

int rever(int n){
    static int ans = 0;
    if(n!=0){
        int tmp = n%10;
        ans = ans*10 + tmp;
        rever(n/10);
    }
    else{
        return ans;
    }
}
int main(){
    int n;
    cin >> n;
    cout << rever(n);

    return 0;
}
