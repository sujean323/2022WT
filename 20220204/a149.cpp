#include<iostream>
#include<string>
using namespace std;

int main(){
    int T;
    int ans=1;
    string n;
    cin >> T;
    for(int i=0; i<T; i++){
        cin >> n;
        for(int j=0; j<n.size(); j++){
            ans *= char(n[j] - '0');
        }
        cout << ans << "\n";
        ans = 1;
    }

    return 0;
}
