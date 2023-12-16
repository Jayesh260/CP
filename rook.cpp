#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        char a; 
        cin>>a;
        int b; 
        cin>>b;
        for(int i=1;i<9;i++){
            if(i==b){
                continue;
            }
            else{
                cout<<a<<i<<'\n';
            }
        }
        for(int i=97;i<105;i++){
            if(a==char(i)){
                continue;
            }
            else{
                cout<<char(i)<<b<<'\n';
            }
        }
    }
    return 0;
}
