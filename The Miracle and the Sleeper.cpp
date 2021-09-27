#include <bits/stdc++.h>

using namespace std;

#define int long long int

void solve(){
    
    int l , r;
    cin >> l >> r;   // r>=l

    int b = r/2 + 1;

    int ans = max(l,b);

    cout << r%ans << endl;



}

int32_t main()
{
    
    int t;
    cin >> t;
    
    while(t--){
        solve();
    }
   
    return 0;
}


