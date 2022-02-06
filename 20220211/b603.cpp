#include<iostream>
using namespace std;

int gcd(int tmp1, int tmp2){
    if(tmp2==0){
        return tmp1;
    }
    else{
        return gcd(tmp2, tmp1%tmp2);
    }
}
int main(){
    int x1, y1, x2, y2, z, a, b, c, d;
    cin >> x1 >> y1 >> x2 >> y2;
    int tmp1 = (x2-x1)*(x2-x1);
    int tmp2 = (y2-y1);
    /*if(tmp1%tmp2==0){
        z = tmp2/tmp1;
        a = 1;
        b = z;
        c = -2*x1*z;
        d = z*x1*x1+y1;
    }
    else{*/
        z = gcd(tmp1, tmp2);
        tmp1 /= z;
        tmp2 /= z;
        a = tmp1;
        b = tmp2;
        c = -2*x1*tmp2;
        d = tmp2*x1*x1 + tmp1*y1;
    //}
    cout << a << "y = " << b << "x^2 + " << c << "x + " << d;

    return 0;
}
