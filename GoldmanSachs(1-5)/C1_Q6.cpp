#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        if(str1.length() < str2.length()){
            return gcdOfStrings(str2,str1);
        }
        else if(str1.find(str2) != 0){
            return "";
        }
        else if (str2==""){
            return str1;
        }
        else{
            return gcdOfStrings(str1.substr(str2.length()),str2);
        }
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        string str1,str2;
        cin >>str1>>str2;
        Solution ob;
        auto ans = ob.gcdOfStrings(str1,str2);
        cout << ans << "\n";
    }
    return 0;
}