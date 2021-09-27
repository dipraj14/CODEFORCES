

#include <iostream>

using namespace std;
#define int long long int

void solve(){
       int x , y , a ,b;
   cin >> x >> y >> a >> b;   //  7 5
   
   int total = 0;
   
   if(x > y){
       
       total += a*(x-y);
       
       int left = y*(b);
       int rigth = y*(2*a);
       total += min(left,rigth);
       cout<< total << endl;
   }
   else{
       total += a*(y-x);
       
       int left = x*(b);
       int rigth = x*(2*a);
       total += min(left,rigth);
       cout<< total << endl;
       
   }
   
  
}

int32_t main()
{
    int t;
    cin >> t;
   while(t--){
       solve();
   }

    
}




/*
#include <iostream>

using namespace std;
#define int long long int

void solve(){
       int x , y , a ,b;
   cin >> x >> y >> a >> b;   //  7 5
   
   int total = 0;
   
   if(x > y){
       
       total += a*(x-y);
       
       int left = (b);
       int rigth = (2*a);
       total += (y*min(left,rigth));
       cout<< total << endl;
   }
   else{
       total += a*(y-x);
       
       int left = (b);
       int rigth = (2*a);
       total += ( x* min(left,rigth) );
       cout<< total << endl;
       
   }
   
  
}

int32_t main()
{
    int t;
    cin >> t;
   while(t--){
       solve();
   }

    
}

*/



/*


#include <bits/stdc++.h>

using namespace std;
#define int long long int

void solve(){
       int x , y , a ,b;
   cin >> x >> y >> a >> b;   //  7 5
   
   int total = 0;
   
   if(x > y){
       swap(x,y);
   }
       total += a*(y-x);
       
       int left = (b);
       int rigth = (2*a);
       total += (x* min(left,rigth) );
   
   cout<< total << endl;
}

int32_t main()
{
    int t;
    cin >> t;
   while(t--){
       solve();
   }

    
}












*/














