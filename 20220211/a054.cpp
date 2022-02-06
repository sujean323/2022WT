#include<iostream>
#include<string>
using namespace std;

int main(){
    int id[26]{10, 11, 12, 13, 14, 15, 16, 17, 34, 18, 19, 20, 21, 22, 35, 23, 24, 25, 26, 27, 28, 29, 32, 30, 31, 33};
    string s;
    int input[9];

    cin >> s;
    for(int i=0; i<9; i++){
        input[i] = s[i] - '0';
    }
    for(int i=0; i<26; i++){
        int a = id[i]/10;
        int b = id[i]%10;
        int check = 0;
        check += a+b*9;
        for(int j=0; j<9; j++){
            if(j==8){
                check += input[j];
            }
            else{
                check += input[j]*(8-j);
            }
        }
        int c = 10-(check%10);
        if(check%10==0){
            cout << char(i+65);
        }
    }

    return 0;
}
