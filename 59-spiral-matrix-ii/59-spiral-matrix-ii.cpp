class Solution {
    
    int itr=1;
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> arr(n,vector<int>(n,0)); 
        Spiral(arr,n,n);
        
        return arr;
    }
    
    void Spiral(vector<vector<int>> &arr,int m, int n)
    {
     int upper = 0, lower = m, left = 0, right = n;
     int iterations = 0;
     if (m == n)
     iterations = 2 * m - 1;
     else if (m < n)
     iterations = 2 * m;
     else if (m > n)
     iterations = 2 * n;
     int counter = 0;
     
     while (1)
     {
     for (int i = left; i < right; i++)
     {
         arr[upper][i]=itr++;
     }
         
     counter++;
     if (counter == iterations)
     break;
     upper++;
     for (int i = upper; i < lower; i++)
     {
         arr[i][right - 1]=itr++;
     }
         
     counter++;
     if (counter == iterations)
     break;
     right--;
     for (int i = right - 1; i >= left; i--)
     {
         arr[lower - 1][i]=itr++;
     }
     
     counter++;
     if (counter == iterations)
     break;
     lower--;
     for (int i = lower - 1; i >= upper; i--)
     {
         arr[i][left]=itr++;
     }
     
     counter++;
     if (counter == iterations)
     break;
     left++;
     }
    }
};