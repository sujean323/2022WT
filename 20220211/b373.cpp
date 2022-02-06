#include<iostream>
using namespace std;

int main(){
    int n, a[10000];
    int ans = 0;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    for(int i=n-1; i>0; i--){
        for(int j=0; j<i; j++){
            if(a[j]>a[j+1]){
                swap(a[j], a[j+1]);
                ans++;
            }
        }
    }
    cout << ans << "\n";

    return 0;
}
