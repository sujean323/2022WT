#include<iostream>
using namespace std;

int main(){
    int n, m;
    int sum = 0;
    int ans = 0;
    while(cin >> n >> m){
        while(sum<=m || sum==0){
            sum += n;
            n++;
            ans++;
        }
        cout << ans << "\n";
        sum=0;
        ans=0;
    }
    return 0;
}
