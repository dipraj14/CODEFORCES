
#include <bits/stdc++.h>

using namespace std;

 string remVowel(string str) // remove all the vowles of a string
{
    regex r("[aoyeui]");
     
    return regex_replace(str, r, "");
}

int main()
{
    
    string str;
    cin >>str;
   for(int i=0; i<str.length(); i++){
      if(str[i]>=65&&str[i]<=90)
         str[i]=str[i]+32;
   }
   
   string no_vowl = remVowel(str);
   
   //cout << no_vowl;
    //aBAcAba
    vector<char> ans;
    
    for(int i=0; i<no_vowl.length() ; i++){
        ans.push_back('.');
        ans.push_back(no_vowl[i]);
    }
    for(auto x: ans){
        cout<< x;
    }
    return 0;
}
