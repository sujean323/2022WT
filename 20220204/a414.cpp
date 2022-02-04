#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
    int n;
    while(scanf("%d", &n) && n!=0){
        int c = 0;
        while(n%2){
            c++;
            n /= 2;
        }
        printf("%d\n", c);
    }

    return 0;
}
