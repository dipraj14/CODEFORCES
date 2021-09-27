
#include <bits/stdc++.h>

using namespace std;

int main()
{
   
int v[5][5];
int ans;


for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
        cin >> v[i][j];
    }
}

 for (int i = 0; i <5 ; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if(v[i][j] == 1 ){
                ans = abs((i+1) - 3) + abs ((j+1) - 3);
                
            }
        }   
   
    }
   
   cout<< ans;
    

    return 0;
}
