#include<iostream>
using namespace std;

int main(){
    int n, h1, m1, h2, m2, m3, d;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> h1 >> m1 >> h2 >> m2 >> m3;
        if(h1==h2){
            d = m2-m1;
            if(d>=m3){
                cout << "Yes" << "\n";
            }
            else{
                cout << "No" << "\n";
            }
        }
        else{
            d = (60-m1)+m2;
            if(d>=m3){
                cout << "Yes" << "\n";
            }
            else{
                cout << "No" << "\n";
            }
        }
    }

    return 0;
}
