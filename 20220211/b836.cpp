#include<iostream>
using namespace std;

int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    long long int n, m, ans=1;
    while(cin >> n >> m){
        if(m==0){
            cout << "Go Kevin!!" << "\n";
        }
        else{
            while(ans<n){
                ans += m;
                if(ans==n){
                    cout << "Go Kevin!!" << "\n";
                    break;
                }
            }
            if(ans>n){
                cout << "No Stop!!" << "\n";
            }
        }
    }

    return 0;
}
