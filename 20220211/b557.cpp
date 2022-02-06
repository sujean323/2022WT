#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int T, N;
    cin >> T;
    for(int i=0; i<T; i++){
        cin >> N;
        int a[104]={0}, ans=0;
        for(int j=0; j<N; j++){
            cin >> a[j];
        }
        sort(a, a+N);
        for(int j=0; j<N-2; j++){
            for(int k=j+1; k<N-1; k++){
                for(int l=k+1; l<N; l++){
                    int x = a[j]*a[j];
                    int y = a[k]*a[k];
                    int z = a[l]*a[l];
                    if(z==x+y){
                        ans++;
                    }
                }
            }
        }
        cout << ans << "\n";
    }

    return 0;
}
