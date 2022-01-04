#include <bits/stdc++.h>

using namespace std;
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int len = 0, ans=INT_MAX,sum=0,j=0,i=0;
        while(j<nums.size())
        {
            sum+=nums[j];
            len+=1;
              while(sum>=target)
              {
                    ans = min(ans,len);
                  len-=1;
                  sum-=nums[i++];
              }
             j++;
            if(j>nums.size()-1) break;
        }
        if(ans==INT_MAX) return 0;
        return ans;
    }
};

int main() {
    int target=7;
    vector<int> nums{2,3,1,2,4,3};
    Solution ob;
    int ans=ob.minSubArrayLen(target,nums);
    cout<<ans<<endl;

}  // } Driver Code Ends