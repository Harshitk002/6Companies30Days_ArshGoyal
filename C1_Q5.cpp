// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

#define ull unsigned long long


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// #define ull unsigned long long
	/* Function to get the nth ugly number*/
	ull getNthUglyNo(int n) {
	    // code here
	    ull ugly[n];
	    ull i2=0,i3=0,i5=0;
	    ull next_mul_of_2=2;
	    ull next_mul_of_3=3;
	    ull next_mul_of_5=5;
	    ull next_ugly_number=1;
	    ugly[0]=1;
	    for(int i=1;i<n;i++){
	        next_ugly_number = min (next_mul_of_2,min(next_mul_of_3,next_mul_of_5));
            ugly[i]=next_ugly_number;
            if(next_ugly_number == next_mul_of_2){
                i2 = i2 + 1;
                next_mul_of_2 = ugly[i2] * 2;
            }
            if(next_ugly_number == next_mul_of_3){
                i3 = i3 + 1;
                next_mul_of_3 = ugly[i3] * 3;
            }
            if(next_ugly_number == next_mul_of_5){
                i5 = i5 + 1;
                next_mul_of_5 = ugly[i5] * 5;
            }
	    }
        return next_ugly_number;
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.getNthUglyNo(n);
        cout << ans << "\n";
    }
    return 0;
}
  // } Driver Code Ends