//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) {
        for(int i=1;i<=n;i++)
        {
            int j=1;
            while(j<=i)
            {
                cout<<j<<" ";
                j++;
            }
            
            for(int j=2*n-1;j>2*i-1;j--)
            {
                cout<<"  ";
            }
            
            j--;
            while(j>0)
            {
                cout<<j<<" ";
                j--;
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