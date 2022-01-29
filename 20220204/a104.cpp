#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n, tmp;
    vector<int>a;
    while(cin >> n){
        for(int i=0; i<n; i++){
            cin >> tmp;
            a.push_back(tmp);
        }
        sort(a.begin(), a.end());
        for(int i=0; i<n; i++){
            cout << a[i] << " ";
        }
        cout << "\n";
        a.clear();
    }
    return 0;
}
/*
6
7 9 0 4 1 8
8
1 9 9 0 0 9 2 8
*/
