#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int a, b, c, D, x1, x2;
    cin >> a >> b >> c;
    D = b*b-4*a*c;
    x1 = (-b+sqrt(D))/(2*a);
    x2 = (-b-sqrt(D))/(2*a);
    if(D >= 0){
        if(x1 == x2){
            cout << "Two same roots x=" << x1;
        }
        else{
            cout << "Two different roots x1=" << x1 << " , x2=" << x2;
        }
    }
    else{
        cout << "No real root\n";
    }

    return 0;
}
