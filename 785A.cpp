#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio();
    cin.tie(0);

    unsigned long long int n, r = 0;
    cin>>n;
    string s;
    for (int i= 0;i<=n;i++){
        getline(cin, s);

        if (s == "Tetrahedron")
            r += 4;
        if (s == "Cube")
            r += 6;
        if (s == "Octahedron")
            r += 8;
        if (s == "Dodecahedron")
            r += 12;
        if (s == "Icosahedron")
            r += 20;
    }
    cout<<r;
    return 0;
}
