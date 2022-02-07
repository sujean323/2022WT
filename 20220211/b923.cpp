#include<iostream>
using namespace std;

int main(){
    int n, x, top=0;
    int sk[100004];
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> x;
        if(x==1){
            top--;
        }
        else if(x==2){
            cout << sk[top] << "\n";
        }
        else if(x==3){
            top++;
            cin >> sk[top];
        }
    }

    return 0;
}
