#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    bool s=false;
    cin>>n;
    while(n>1){
        if(s){
            cout<<"I love that ";
            s=false;
        }else{
            cout<<"I hate that ";
            s=true;
        }
        n--;
    }
    cout<<(!s?"I hate it":"I love it")<<'\n';
    return 0;
}