/*
#include <bits/stdc++.h>

using namespace std;

#define int long long int

void solve(){
   

   int n;
   cin >> n;

   vector<int> v(n);
   int k;
   cin >> k;
   for(int i=0;i <n;i++){
       cin >> v[i];
   }

   int ans = 0;

   for(int i=0; i<n; i++){

       ans+= (v[i]/k);

   }

   cout << ans <<endl;



}

int32_t main()
{
    
    int t = 1;
    //cin >> t;
    
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
   cin >> n;

   vector<int> v(n);
   int k;
   
   for(int i=0;i <n;i++){
       cin >> v[i];
   }

   cin >> k;


   vector<int> dummy(v);   //10 30 42 44 44 44 78  // 13 34 45 78 80 99 

    sort(dummy.begin(),dummy.end());

    /*for(auto it: dummy){
        cout<< it <<" ";
    }
    cout<< endl;
    */
    
/*
   vector<int> ans;

   for(int i=n-1; i>= n-k ;i--){

       ans.push_back(dummy[i]);

   }

   vector<int> idx(k,-1);

    /*for(auto it: ans){
        cout<< it <<" ";
    }
    cout<< endl;
    */
    
/*
    for(int i =0;i <ans.size() ;i++){
        for(int j=0;j<n; j++){
            
            if(ans[i] == v[j] && idx[j]!=j){

                idx[i]= j;

            }
        }
    }

    

   sort(idx.begin(), idx.end());

   

   for(auto it : idx){
       cout<< v[it] <<" ";
   }
   


}

int32_t main()
{
    
    int t = 1;
    //cin >> t;
    
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
   cin >> n;

   vector<int> v(n);
   int k;
   
   for(int i=0;i <n;i++){
       cin >> v[i];
   }

   cin >> k;


   vector<int> dummy(v);   //10 30 42 44 44 44 78  // 13 34 45 78 80 99 

    sort(dummy.begin(),dummy.end());

    /*for(auto it: dummy){
        cout<< it <<" ";
    }
    cout<< endl;
    */
    
/*
   vector<int> ans;

   for(int i=n-1; i>= n-k ;i--){

       ans.push_back(dummy[i]);

   }

   vector<int> idx(k,-1);

    
    for(int i=0;i<ans.size();i++){
        if(ans[0] == dummy[i]){
            idx[0] = i;
            break;
        }
    }
    for(int i =1;i <ans.size() ;i++){  // 44 44 44 42
        for(int j=0;j<n; j++){

            for(int c = 0 ;c<i;c++){

               

                if(ans[i] == v[j] && idx[c] != j){

                idx[i]= j;
                }

            }

            
            
            
        }
    }

    for(auto it: idx){
        cout<< it <<" ";
    }
    cout<< endl;

    

   sort(idx.begin(), idx.end());

   

   for(auto it : idx){
       cout<< v[it] <<" ";
   }
   


}

int32_t main()
{
    
    int t = 1;
    //cin >> t;
    
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
   cin >> n;

   vector<int> v(n);
   int k;
   
   for(int i=0;i <n;i++){
       cin >> v[i];
   }

   cin >> k;

   priority_queue<pair<int, int> > pq;

   for(int i=0;i<n;i++){
       pq.push({v[i],i});
   }
   vector<int> idx;
   
   while(k--){
       idx.push_back( pq.top().second );
       pq.pop();
   }


   sort(idx.begin(),idx.end());

   for(auto it: idx){
       cout<< v[it]<<" ";
   }


   


}

int32_t main()
{
    
    int t = 1;
    //cin >> t;
    
    while(t--){
        solve();
    }
   
    return 0;
}