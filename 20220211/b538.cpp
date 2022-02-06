#include<iostream>
using namespace std;

int gcd(int a, int b){
    if(b==0){
        return a;
    }
    else{
        return gcd(b, a%b);
    }
}
int main(){
    int a, b, c, d, ans1, ans2;
    char z;

    while(cin >> a >> b >> c >> d >> z){
        switch(z){
            case '+' :
                ans1 = a*d + b*c;
                ans2 = b*d;
                break;
            case '-' :
                ans1 = a*d - b*c;
                ans2 = b*d;
                break;
            case '*' :
                ans1 = a*c;
                ans2 = b*d;
                break;
            case '/' :
                ans1 = a*d;
                ans2 = b*c;
                break;
        }
        int g = gcd(ans1, ans2);
        ans1 /= g;
        ans2 /= g;
        if(ans2<0){
            ans1 = -ans1;
            ans2 = -ans2;
        }
        if(ans2==1){
            cout << ans1 << "\n";
        }
        else{
            cout << ans1 << "/" << ans2 << "\n";
        }
        ans1=0;
        ans2=0;
    }

    return 0;
}
