#include<iostream>
using namespace std;

int main(){
    int n;
    long long int a[10];
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a[0] >> a[1] >> a[2];
        if(a[0]==1){
            cout << a[1] + a[2] << "\n";
        }
        else if(a[0]==2){
            cout << a[1] - a[2] << "\n";
        }
        else if(a[0]==3){
            cout << a[1] * a[2] << "\n";
        }
        else if(a[0]==4){
            cout << a[1] / a[2] << "\n";
        }
    }

    return 0;
}
