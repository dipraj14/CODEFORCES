


// link:  https://www.youtube.com/watch?v=VALUvi3cU5U&t=706s  // optimize


/*
#include <bits/stdc++.h>

using namespace std;

void solve(){
    
    int n;
    int d;

    cin >> n >> d;  // 5 11 // 5 9
    
    int x;
    
    int x1;
     if(d > n){     // 9 > 5
        
        x = d/n;   // 1
        
        if(d % (x+1) != 0){     // 
            x1 = x+ (d/(x+1))+1;  // 1+5
        }
        
        else{
            x1 = x+ (d/(x+1));
        }
        
        
        
    }
    if( n > d){
        cout<<"YES" <<endl;
        
    }
    else if( n == d){
        cout<<"YES"<<endl;
    }
    
    else if(x1 <=n){
        cout<<"YES"<<endl;
    }
    else{
        cout<< "NO"<<endl;
    }
    
}

int main()
{
    
    int t;
    cin >> t;
    
    while(t--){
        solve();
    }
   
    return 0;
}


*/



/*
#include <bits/stdc++.h>

using namespace std;

#define int long long int

void solve(){
    
    int n;
    int d;

    cin >> n >> d;  // 5 11 // 5 9

    int flag =0;
    
    for(int x =0; x<n; x++){
        if(d % (x+1) == 0){

            if((x+ (d/(x+1))) <= n){

            flag =1;
            }
            
        }
        else{
            if((x+ (d/(x+1))+1) <= n){    // calculate the ceil short is = d+x-1/(x)

            flag =1;
            break;
            }
            
        }
        
    }

    if(flag == 1){
        cout<< "YES" <<endl;
    }
    else{
        cout<< "NO" <<endl;
    }
    
}

signed main()
{
    
    int t;
    cin >> t;
    
    while(t--){
        solve();
    }
   
    return 0;
}


*/

/*
#include <bits/stdc++.h>

using namespace std;

#define int long long int

void solve(){
    
    int n;
    int d;

    cin >> n >> d;  // 5 11 // 5 9

    int flag =0;

    
    
    for(int x =0; x<n; x++){   // o(n) = 10^9 sec if n<=10^9
        
        if(( x+ ((d+x+1-1)/(x+1)) ) <= n){   // short process to check ceil    // 
            flag =1;
            break;
        }
        
    }

    if(flag == 1){
        cout<< "YES" <<endl;
    }
    else{
        cout<< "NO" <<endl;
    }
    
}

signed main()
{
    
    int t;
    cin >> t;
    
    while(t--){
        solve();
    }
   
    return 0;
}


*/

/*

#include <bits/stdc++.h>

using namespace std;

#define int long long int

void solve(){
    
    int n;
    int d;

    cin >> n >> d;  // 5 11 // 5 9

    int flag =0;

    
    
    for(int x =0; x*x < d; x++){     // check till squre root 0f n complixity is log d
        
        if(( x+ ((d+x+1-1)/(x+1)) ) <= n){
            flag =1;
            break;
        }
        
    }

    if(flag == 1){
        cout<< "YES" <<endl;
    }
    else{
        cout<< "NO" <<endl;
    }
    
}

signed main()
{
    
    int t;
    cin >> t;
    
    while(t--){
        solve();
    }
   
    return 0;
}

*/

#include <bits/stdc++.h>

using namespace std;

#define int long long int

void solve(){
    
    int n;
    int d;

    cin >> n >> d;  // 9 19

    int root = sqrt(d);    // time complixity is to find sqrt(d)

    //int x1 = (root-1)+((d+root-1)/root) ;

    if ((root-1)+((d+root-1)/root) <= n){

        cout<< "YES" <<endl;
    }
    else{
        cout<< "NO" <<endl;
    }
    
}

signed main()
{
    
    int t;
    cin >> t;
    
    while(t--){
        solve();
    }
   
    return 0;
}