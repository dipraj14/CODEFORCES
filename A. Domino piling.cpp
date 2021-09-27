#include <bits/stdc++.h>
 
using namespace std;
 
 
int main()
{
    int m,n;
    cin >> m >> n;
    
    int ans;
    
    if(m %2 == 0){
        ans = (m/2) * n;
    }
    else{
        ans = (m/2)*n + n/2;
    }
    
    cout << ans ;
 
}