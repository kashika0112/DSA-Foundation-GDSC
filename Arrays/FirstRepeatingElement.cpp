// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function template in C++

class Solution {
  public:
    // Function to return the position of the first repeating element.
    int firstRepeated(int arr[], int n) {
        // code here
        int indx = n+1;
        unordered_map<int, int> maps;
        unordered_map<int, int> ::iterator it;
        for(int i = 0; i<n; i++){
            it = maps.find(arr[i]);
            if(it != maps.end()){
                if(indx > it->second)
                    indx = it->second;
            }
            else{
                maps.insert(make_pair(arr[i], i));
            }
        }
        if(indx == n+1)
            return -1;
        else
            return arr[indx];
    }
};

// { Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int arr[n];

        for (int i = 0; i < n; ++i) cin >> arr[i];
        Solution ob;
        cout << ob.firstRepeated(arr, n) << "\n";
    }

    return 0;
}
  // } Driver Code Ends