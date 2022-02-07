#include <iostream>
#include<string>
using namespace std;

int main(){
    int n;
    string s;
    string get_kill = "Get_Kill";
    string get_assist = "Get_Assist";
    string die = "Die";
    int k=0, a=0, d=0;//À»±þ, ¦º¤`, §U§ð
    int combo=0;

    cin >> n;
    for(int i=0; i<n; i++){
        cin >> s;
        if(s==get_kill){
            k++;
            combo++;
            if(combo==3){
                cout << "KILLING SPREE!" << "\n";
            }
            else if(combo==4){
                cout << "RAMPAGE~" << "\n";
            }
            else if(combo==5){
                cout << "UNSTOPPABLE!" << "\n";
            }
            else if(combo==6){
                cout << "DOMINATING!" << "\n";
            }
            else if(combo==7){
                cout << "GUALIKE!" << "\n";
            }
            else if(combo>=8){
                cout << "LEGENDARY!" << "\n";
            }
            else{
                cout << "You have slain an enemie." << "\n";
            }
        }
        else if(s==get_assist){
            a++;
        }
        else if(s==die){
            d++;
            if(combo<3){
                cout << "You have been slained." << "\n";
            }
            else{
                cout << "SHUTDOWN." << "\n";
            }
            combo=0;
        }
    }
    cout << k << "/" << d << "/" << a << "\n";

    return 0;
}
