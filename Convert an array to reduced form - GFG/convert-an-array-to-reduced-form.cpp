//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// Converts arr[0..n-1] to reduced form.
	void convert(int arr[], int n) {
	    // code here
	    //10 20 30
	    int arr2[n];
	    for(int i=0;i<n;i++){
	        arr2[i]=arr[i];
	    }
	    sort(arr2,arr2+n);
	    unordered_map<int,int>mp;
	     for(int i=0;i<n;i++){
	        mp[arr2[i]]=i;
	      }
	      //10 -0
	      //20 -1
	      //40  2
	    int j=0;
	    for(int i=0;i<n;i++){
	        arr[i]=mp[arr[i]];
	        
	    }
	    
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.convert(arr, n);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends