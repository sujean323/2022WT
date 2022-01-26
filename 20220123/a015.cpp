#include<iostream>
using namespace std;

int main(){
    int row, col;
    while(cin >> row >> col){
        int A[row][col];
        for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                cin >> A[i][j];
            }
        }
        for(int i=0; i<col; i++){
            for(int j=0; j<row; j++){
                cout << A[j][i] << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}
/*
2 3
3 1 2
8 5 4
*/
