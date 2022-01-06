#include <bits/stdc++.h>
using namespace std;
int longestMountain(vector<int>& a) {
            
            int ans = 0;
            int i = 1 , n = a.size() , inc_start , inc_end , dec_start ,dec_end ;
            
            while(i < n){
                inc_start = i-1;
                while(i < n && a[i] > a[i-1]) i++;
                inc_end = i-1;
                while(i < n && a[i] == a[i-1]) i++;
                dec_start = i-1;
                while(i<n && a[i-1] > a[i]) i++;
                dec_end = i-1;
                if(inc_end != inc_start && dec_end!= dec_start && inc_end == dec_start) ans = max(ans , dec_end - inc_start+1);
                
            }
            
            return ans;
            
    }
int main() {
     vector<int> a={2,1,4,7,3,2,5};
     cout <<longestMountain(a) << endl;      
} 
