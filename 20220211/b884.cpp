#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n, x, y;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> x >>y;
        int r, yee;
        r = abs(x)+abs(y);
        yee = 100-r;
        if(0<yee && yee<=30){
            cout << "sad!\n";
        }
        else if(30<yee && yee<=60){
            cout << "hmm~~\n";
        }
        else if(60<yee && yee<100){
            cout << "Happyyummy\n";
        }
        else{
            cout << "evil!!\n";
        }
    }

    return 0;
}
