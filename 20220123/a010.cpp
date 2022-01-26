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
/*
#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i=2; i<=n; i++){
        int power = 0;
        while(n%i==0){
            n = n/i;
            power++;
        }
        if(power>=2){
            cout << i << "^" << power;
        }
        else if(power==1){
            cout << i;
        }
        if(n==1){
            cout << "\n";
        }
        else if(n%i !=0 && power>0){
            cout << "*";
        }
        power = 0;
    }

    return 0;
}

#include<iostream>
using namespace std;
int main(){
    int n;
    while(1){
        cin >> n;
        for(int i=2; i<=n; i++){
            while(n%i==0){
              cout<<i<<"*";
              n = n/i;
            }
        }
        cout<<"\b \n";
        break;
    }
    return 0;
}
*/
