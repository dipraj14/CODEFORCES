#include <bits/stdc++.h>

using namespace std;

#define int long long int

void solve(){
    int n;
    cin >> n;

    string s;
    cin >> s;

    int odd = 0;

    for(int i=0;i <n ; i++){
        if((s[i]-'0')%2 != 0){
            odd++;
        }
    }
   vector<char> ans;
    if(odd <= 1){
        cout<< "-1" <<endl;
        return ;
    }
    else{
        int t = 0;

        for(int i=0; i<n ; i++){

            if((s[i]-'0')%2 != 0){
                ans.push_back(s[i]);
                //cout << s[i];
                t++;
            }
            if(t == 2){
                break;
            }
           

        }
            for(auto it: ans){
                cout<< it ;
            }
    //cout << endl;
         cout << endl;
            return ;
      
        
    }

   




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


