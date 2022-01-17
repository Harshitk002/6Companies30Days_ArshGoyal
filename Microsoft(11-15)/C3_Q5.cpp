// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends



class Solution
{
    public:
    //Function to calculate the span of stockâ€™s price for all n days.
     vector <int> calculateSpan(int price[], int n)
   {
      vector<int> ans;
      int cnt = 1;
      ans.push_back(1);
      for(int i=1; i<n; i++)
      {
          cnt = 1;
          if(price[i]>price[i-1])
          {
              cnt = ans[ans.size()-1];
              for(int j=i-cnt-1; j>=0; j--)
              {
                  if(price[j]<=price[i])
                  {
                      cnt++;
                  }
                  else{
                      break;
                  }
              }
              cnt++;
              ans.push_back(cnt);
          }
          else if(price[i]==price[i-1])
          {
              ans.push_back(ans[ans.size()-1]+1);
          }
          else{
              ans.push_back(cnt);
          }
          
      }
      return ans;
   }
};





// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int i,a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		Solution obj;
		vector <int> s = obj.calculateSpan(a, n);
		
		for(i=0;i<n;i++)
		{
			cout<<s[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
  // } Driver Code Ends