// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int findMaxAverage(int arr[], int n, int k) {
        int currentSum=0;
        int avg=0;
        for(int i=0; i<k; i++){
            currentSum+=arr[i];
        }
        
        int maxSum=currentSum;
        for(int i=k; i<n; i++){
            currentSum+=arr[i];
            currentSum-=arr[i-k];
            
            if((currentSum)>(maxSum)){
                maxSum=currentSum;
                avg=i-k+1;
            }
           // avg=maxSum/k;
        }// code here
        return avg;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> k;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.findMaxAverage(arr, n, k);
        for (int i = ans; i < ans + k; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
  // } Driver Code Ends