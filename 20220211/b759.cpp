#include<iostream>
#include<string>
using namespace std;

int main(){
    string x;
    cin >> x;
    for(int i=0; i<x.size(); i++){
        cout << x.substr(i, x.size()-i) << x.substr(0, i) << "\n";
    }

    return 0;
}
