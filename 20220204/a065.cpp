#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main(){
    string s;
    cin >> s;
    for(int i=0; i<6; i++){
        cout << abs(int(s[i+1] - s[i]));
    }

    return 0;
}
