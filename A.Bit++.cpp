
#include <bits/stdc++.h>

using namespace std;

int main()
{
   
   int t;
   cin >> t;
   
   vector<string> v;
   
   while(t--){
       string s;
       cin >> s;
       v.push_back(s);
   }
   int x = 0;
   for(auto c: v){
       if(c == "++X" || c=="X++"){
           x = x +1;
       }
       else if(c == "--X" || c == "X--"){
           x = x-1; ;
       }
       
   }
   
   cout << x ;

    return 0;
}
