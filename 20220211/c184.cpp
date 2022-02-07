#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    while(cin >> n && n!=0){
        vector<int>p,a;
        int sum_p=0, sum_a=0;
        for(int i=1; i<n; i++){
            if(n%i==0){
                p.push_back(i);
            }
        }
        for(int i=0; i<p.size(); i++){
            sum_p += p[i];
        }
        if(sum_p==n){
            cout << "=" << n << "\n";
        }
        else{
            for(int i=1; i<sum_p; i++){
                if(sum_p%i==0){
                    a.push_back(i);
                }
            }
            for(int i=0; i<a.size(); i++){
                sum_a += a[i];
            }

            if(sum_a==n){
                cout << sum_p << "\n";
            }
            else{
                cout << 0 << "\n";
            }
        }
    }

    return 0;
}
