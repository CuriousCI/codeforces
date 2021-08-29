#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    unsigned long long int n,m;
    int l;
    cin>>n>>m;
    while(m>0){
        l=n%10;
        if(l==0){
            m--;
            n/=10;
        }else if(m>=l){
            n-=l;
            m-=l;
        }else if(l>m){
            n-=m;
            break;
        }
    }
    cout<<n;
    return 0;
}