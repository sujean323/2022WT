#include<iostream>
using namespace std;
int main(){
    int n;
    while(1){
        cin >> n;
        for(int i=2; i<=n; i++){
            int power = 0;
            while(n%i==0){
                //cout<<i<<"*";
                n = n/i;
                power++;
            }
            if(n==1){
                if(power>1){
                    cout << i << "^" << power;
                }
                else if(power==1){
                    cout << i;
                }
            }
            else{
                if(power>1){
                    cout << i << "^" << power << " * ";
                }
                else if(power==1){
                    cout << i << " * " ;
                }
            }
        }
        //cout<<"\b \n";
        break;
    }
    return 0;
}
