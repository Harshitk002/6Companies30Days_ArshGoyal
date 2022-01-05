#include <bits/stdc++.h>
using namespace std;
int partition(int arr[], int l, int r)
{
	int x = arr[r], i = l;
	for (int j = l; j <= r - 1; j++) {
		if (arr[j] <= x) {
			swap(arr[i], arr[j]);
			i++;
		}
	}
	swap(arr[i], arr[r]);
	return i;
}

int quickSelect(int arr[], int l, int r, int k)
{
	if (k > 0 && k <= r - l + 1) {
		int index = partition(arr, l, r);
		if (index - l == k - 1)
			return arr[index];
		if (index - l > k - 1)
			return quickSelect(arr, l, index - 1, k);
		return quickSelect(arr, index + 1, r,
							k - index + l - 1);
	}
	return INT_MAX;
}

int main()
{
	int arr[] = {};//The array with 10M entries
    int r = quickSelect(array,0,(arr.size()-1),10000000-100);
    vector<int>res;
    for(int i=0;i<10,000,000;i++){
        if(arr[i]>r){
            res.push_back(arr[i]);
        }
    }
	return 0;
}
