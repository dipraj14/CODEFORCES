#include<bits/stdc++.h>
using namespace std;

// we store the array linearky decresing fssion
// https://leetcode.com/problems/sliding-window-maximum/

// in future donn't get the the logic pls check ---- https://www.youtube.com/watch?v=CZQGRp93K4k
vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        
        vector<int> ans;
        deque<int> dq;
        
        for(int i=0;i<nums.size();i++){
            if(!dq.empty() && dq.front() == i-k){
                dq.pop_front();
            }
            while(!dq.empty() && nums[dq.back()] < nums[i]){
                dq.pop_back();
            }
            dq.push_back(i);
            
            if(i>=k-1) {
                ans.push_back(nums[dq.front()]);
            }
        }
        
        return ans;
        
}
int main(){
  int n;
  cin >> n;

   vector<int> nums(n);

   for(int i=0;i < n;i++){
       cin >> nums[i];
   }

   int k;
   cin >> k;

   vector<int> ans = maxSlidingWindow( nums,  k);

   for(auto x: ans){
       cout<< x <<" ";
   }


}