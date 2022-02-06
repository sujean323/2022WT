#include<iostream>
using namespace std;

int main(){
    int T, N, M, arr[15][15];
    cin >> T;
    for(int i=0; i<T; i++){
        int flag = 1;
        cin >> N >> M;
        int arr[N][M];
        for(int j=0; j<N; j++){
            for(int k=0; k<M; k++){
                cin >> arr[j][k];
            }
        }
        for(int j=0; j<N; j++){
            for(int k=0; k<M; k++){
                if(arr[j][k] != arr[N-1-j][M-1-k]){
                    flag = 0;
                    break;
                }
            }
        }
        if(flag==1){
            cout << "go forward" << "\n";
        }
        else{
            cout << "keep defending" << "\n";
        }
    }

    return 0;
}
