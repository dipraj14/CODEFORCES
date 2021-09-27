
#include <bits/stdc++.h>

using namespace std;


int main()
{
    int t;
    cin >>t;
    
    int table[t][3];
    for(int i=0; i<t ;i++){
        for(int j=0 ;j <3;j++){
            cin>> table[i][j];
        }
    }
    int sum = 0;
    int count = 0;
    for(int i=0; i<t; i++){
        for(int j=0; j<3; j++){
            sum += table[i][j];
        }
        if(sum >= 2){
            count ++;
        }
        sum = 0;
    }
    
    cout << count ;
   

}
