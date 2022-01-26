#include<iostream>
using namespace std;

int main(){
    int x, n;
    int a = 0;
    int b = 0;
    int c = 0;

    cin >> n;
    for(int i=0; i<n; i++){
        cin >> x;
        if(x%3==0){
            a++;
        }
        else if(x%3==1){
            b++;
        }
        else if(x%3==2){
            c++;
        }
    }
    cout << a << " " << b << " " << c;

    return 0;
}
