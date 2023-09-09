//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) {
        int k;
        for(int i=1;i<=n;i++)
        {
            if(i%2==0)
                k=0;
            else
                k=1;
            for(int j=1;j<=i;j++)
            {
                cout<<k<<" ";
                k=1-k;
            }
            cout<<endl;
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

        Solution ob;
        ob.printTriangle(n);
    }
    return 0;
}
// } Driver Code Ends