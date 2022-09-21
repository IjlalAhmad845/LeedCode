class Solution {
public:
    int largestInteger(int num) {
        vector<int> nums,even,odd;
        
        while(num!=0)
        {
            nums.push_back(num%10);
            num/=10;
        }
        
        for(auto i:nums)
        {
            if(i%2==0)
                even.push_back(i);
            else odd.push_back(i);
        }
        
        reverse(nums.begin(),nums.end());
        
        sort(even.begin(),even.end(),greater<int>());
        sort(odd.begin(),odd.end(),greater<int>());
    
        
        int i=0,j=0;
        for(auto x:nums)
        {
            if(x%2==0)
                num=num*10+even[i++];
            else 
                num=num*10+odd[j++];
        }
        
        return num;
    }
};