
#include <bits/stdc++.h>

using namespace std;
int last_position (int n,int m,int k){
    if( m <= n-k+1){
        return m+k-1;
    }
    m=m-(n-k+1);
    return (m%n==0?n:m%n);
    
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,m,k;
        cin >>n>>m>>k;
        cout<<last_position(n,m,k)<<endl;
    }
    return 0;
}
