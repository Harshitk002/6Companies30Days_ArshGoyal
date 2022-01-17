// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
#include <string>

using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    void getCombination(int arr[], int idx, int &N, string &curr, vector<string> &res, string map[]) {
        if(idx == N) {
            res.push_back(curr);
            return;
        }
        
        for(char ch : map[arr[idx]]) {
            curr.push_back(ch);
            getCombination(arr, idx+1, N, curr, res, map);
            curr.pop_back();
        }
    }
    
    vector<string> possibleWords(int a[], int N)
    {
        string curr = "";
        vector<string> res;
        string map[10] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        
        getCombination(a, 0, N, curr, res, map);
        return res;
    }
};


// { Driver Code Starts.

int main() {
  
	int T;
	
	cin >> T; //testcases
	
	while(T--){ //while testcases exist
	   int N;
	    
	   cin >> N; //input size of array
	   
	   int a[N]; //declare the array
	   
	   for(int i =0;i<N;i++){
	       cin >> a[i]; //input the elements of array that are keys to be pressed
	   }
	   
	   Solution obj;
	   
	  vector <string> res = obj.possibleWords(a,N);
	  for (string i : res) cout << i << " ";
	   cout << endl;
	}
	
	return 0;
}  // } Driver Code Ends