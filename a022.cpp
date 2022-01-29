#include<iostream>
#include<string>
#include<string.h>
#include<stdio.h>
using namespace std;
/*
char A[1000];
int rever(int n){
    for(int i=0; i<n; i++){
        if(A[i]!=A[n-1-i]){
            return 0;
        }
        else{
            return 1;
        }
    }
}
int main(){
    scanf("%s", A);
    int n = strlen(A);

    if(rever(n)==1){
        cout << "yes" << "\n";
    }
    else{
        cout << "no" << "\n";
    }

    return 0;
}
*/
int rever(string s, int len){
    for(int i=0; i<len; i++){
        if(s[i]!=s[len-1-i]){
            return 0;
        }
        else{
            return 1;
        }
    }
}
int main(){
    string s;
    cin >> s;
    int len = s.size();
    if(rever(s, len)==0){
        cout << "no" << "\n";
    }
    else{
        cout << "yes" <<"\n";
    }
    return 0;
}
