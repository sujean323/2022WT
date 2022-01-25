#include<iostream>
using namespace std;

int main(){
    int n;
    int a[20];
    cin >> n;
    for(int i=0; i<n; i++){
        for(int j=0; j<4; j++){
            cin >> a[j];
        }
        if(a[1]/a[0] == a[2]/a[1]){
            int r = a[1]/a[0];
            for(int i=0; i<4; i++){
                cout << a[i] << " ";
            }
            cout << a[3]*r << "\n";
        }
        else{
            int d = a[1] - a[0];
            for(int i=0; i<4; i++){
                cout << a[i] << " ";
            }
            cout << a[3]+d << "\n";
        }
    }

    return 0;
}
/*
2
1 2 3 4
1 2 4 8
*/
