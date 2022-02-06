#include<iostream>
using namespace std;

int main(){
    int x, y, h, m;
    cin >> x >> y;
    h = x+2;
    m = y+30;
    if(m>=60){
        h++;
        m -= 60;
    }
    if(h>=24){
        h -= 24;
    }
    if(h<10 && m==0){
        cout << "0" << h << ":" << m << "0" << "\n";
    }
    else if(h<10){
        cout << "0" << h << ":" << m << "\n";
    }
    else if(m==0){
        cout << h << ":" << m << "0" << "\n";
    }
    else{
        cout << h << ":" << m << "\n";
    }

    return 0;
}
