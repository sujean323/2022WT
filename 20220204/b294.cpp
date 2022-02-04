#include<iostream>
using namespace std;

int main(){
    int n, a;
    int spend = 0;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a;
        spend = spend+a*(i+1);
    }
    cout << spend;

    return 0;
}
