#include<iostream>
using namespace std;

int main(){
    int n, a;
    float sum=0;
    while(cin >> n){
        for(int i=0; i<n; i++){
            cin >> a;
            sum += a;
        }
        if(sum/n > 59){
            cout << "no\n";
        }
        else{
            cout << "yes\n";
        }
        sum = 0;
    }

    return 0;
}
