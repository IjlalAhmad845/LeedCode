class Solution {
    vector<int> v;
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        Spiral(matrix,matrix.size(),matrix[0].size());
        return v;
    }
    
    void Spiral(vector<vector<int>> arr, int m, int n)
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
         v.push_back(arr[upper][i]);
     }
         
     counter++;
     if (counter == iterations)
     break;
     upper++;
     for (int i = upper; i < lower; i++)
     {
         v.push_back(arr[i][right - 1]);
     }
         
     counter++;
     if (counter == iterations)
     break;
     right--;
     for (int i = right - 1; i >= left; i--)
     {
         v.push_back(arr[lower - 1][i]);
     }
     
     counter++;
     if (counter == iterations)
     break;
     lower--;
     for (int i = lower - 1; i >= upper; i--)
     {
         v.push_back(arr[i][left]);
     }
     
     counter++;
     if (counter == iterations)
     break;
     left++;
     }
    }

};