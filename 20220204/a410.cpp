#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;
    float det = a*e-d*b;
    float det_x = c*e-f*b;
    float det_y = f*a-c*d;
    if(det_x==0 && det==0){
        cout << "Too many" << "\n";
    }
    else if((det_x!=0 && det==0) || (det_y!=0 && det==0)){
        cout << "No answer" << "\n";
    }
    else{
        cout << "x=" << fixed << setprecision(2) << det_x/det << "\n";
        cout << "y=" << fixed << setprecision(2) << det_y/det << "\n";
    }

    return 0;
}
