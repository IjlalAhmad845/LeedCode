class Solution {
public:
    int trap(vector<int>& height) {
        vector<int> left;
        vector<int> right;
        
        left.push_back(0);
        right.push_back(0);
        
        for(int i=1;i<height.size();i++)
        {
            left.push_back(max(left[i-1],height[i-1]));
            right.push_back(max(right[i-1],height[height.size()-i]));
        }
        
        reverse(right.begin(),right.end());
        
        
        int result=0;
        for(int i=0;i<height.size();i++)
        {
            int val = min(left[i],right[i])-height[i];
            if(val>=0)
                result+=val;
        }
        
        return result;
    }
};