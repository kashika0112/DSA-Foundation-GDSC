#include <bits/stdc++.h>
using namespace std;

int maxOfArray(int arr[], int n, int idx)
{
	if(idx >= n){
		return INT_MIN;
	}
	int misa = maxOfArray(arr, n, idx + 1);
	if(misa < arr[idx]){
		return arr[idx];
	}
	return misa;
}

int main()
{
	int arr[] = {2, 5, 10, 12, 9};
	int n = sizeof(arr)/sizeof(arr[0]);
	int ans = maxOfArray(arr, n, 0);
	cout<<ans<<endl;
}