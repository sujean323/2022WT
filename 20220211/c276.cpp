#include<iostream>
#include<string>
using namespace std;

int main(){
    int n, a=0, b=0;
    string ans, guess;
    cin >> ans >> n;
    for(int i=0; i<n; i++){
        cin >> guess;
        for(int j=0; j<4; j++){
            for(int k=0; k<4; k++){
                if((ans[j]==guess[k]) && (j==k)){
                    a++;
                }
                else if((ans[j]==guess[k]) && (j!=k)){
                    b++;
                }
            }
        }
        cout << a << "A" << b << "B\n";
        a=0, b=0;
    }

    return 0;
}
