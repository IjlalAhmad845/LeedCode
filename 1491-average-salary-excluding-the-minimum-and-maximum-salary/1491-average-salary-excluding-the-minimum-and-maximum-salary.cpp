class Solution {
public:
    double average(vector<int>& salary) {
        sort(salary.begin(),salary.end());
        
        int n=salary.size();
        
        int sum=accumulate(salary.begin()+1,salary.end()-1,0);
        
        double result=(double)sum/(n-2);
        
        return result;
    }
};