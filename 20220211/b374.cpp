#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    int n, ans_time=1;
    vector<int>ans;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    sort(a, a+n);
    for(int i=0; i<n; i++){
        int current=1;
        while(a[i]==a[i+1]){
            current++;
            i++;
        }
        if(current>ans_time){
            ans.clear();
            ans.push_back(a[i]);
            ans_time = current;
        }
        else if(current==ans_time){
            ans.push_back(a[i]);
        }
    }
    for(int i=0; i<ans.size(); i++){
        cout << ans[i] << " " << ans_time << "\n";
    }

    return 0;
}
