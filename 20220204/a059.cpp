#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n, a, b, root, ans;
    while(cin >> n){
        for(int i=0; i<n; i++){
            cin >> a >> b;
            for(int j=a; j<=b; j++){
                root = sqrt(j);
                if(j==root*root && j%root==0){
                    ans += j;
                }
            }
            cout << "Case " << i+1 << ": " << ans << "\n";
            root = 0;
            ans = 0;
        }
    }
    return 0;
}
