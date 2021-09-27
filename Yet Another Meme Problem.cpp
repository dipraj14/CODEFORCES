#include <bits/stdc++.h>

using namespace std;

#define int long long int

void solve(){
    
     int a, b;
     cin >> a >> b;

     int count= 0;

     for(int i = 9; i<=b ;i= i*10+9){
         count++;
     }

     int ans = a*count;

     cout<< ans << endl;

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


