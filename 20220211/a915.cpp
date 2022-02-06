#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    int input[n][2];
    for(int i=0; i<n; i++){
        for(int j=0; j<2; j++){
            cin >> input[i][j];
        }
    }
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-1-i; j++){
            if(input[j][0]==input[j+1][0]){
                if(input[j][1]>input[j+1][1]){
                    swap(input[j][0], input[j+1][0]);
                    swap(input[j][1], input[j+1][1]);
                }
            }
            else if(input[j][0]>input[j+1][0]){
                swap(input[j][0], input[j+1][0]);
                swap(input[j][1], input[j+1][1]);
            }
        }
    }
    for(int i=0; i<n; i++){
            cout << input[i][0] << " " << input[i][1] << "\n";
    }

    return 0;
}
