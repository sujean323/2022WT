#include<iostream>
using namespace std;

int main(){
    char s[10];
    int ans = 0;
    for(int i=0; i<10; i++){
        cin >> s[i];
    }
    //英文代號轉數字
    int n = (int)s[0];
    if(n>=65 && n<=72 || n==87){
        n -= 55;
    }
    else if(n>=74 && n<=78){
        n -= 56;
    }
    else if(n>=80 && n<=86 || n==90){
        n -= 57;
    }
    else if(n==88 || n==89){
        n -= 58;
    }
    else if(n==73){
        n -= 39;
    }
    else if(n==79){
        n -= 44;
    }
    int a = n/10; //十位數
    int b = n%10; //個位數
    ans = a + b*9;

    for(int i=1; i<10; i++){
        if(i==9){
            ans += (s[i]-48);
        }
        else{
            ans += (s[i]-48)*(9-i);
        }
    }

    if(ans%10==0){
        cout << "real";
    }
    else{
        cout << "fake";
    }

    return 0;
}

