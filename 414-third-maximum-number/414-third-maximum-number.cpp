class Solution {
public:
    int thirdMax(vector<int>& nums) {
        // vector<int>(set<int>(nums.begin(),nums.end())).at()
        set<int>s(nums.begin(),nums.end());
        if(s.size()<3)
        {
            return *(--s.end());
        }
        int c =3;
        auto it = s.end();
        while(c--)
        {
            it--;
        }
        return *it;
    }
};