class KthLargest {
    vector<int> v;
    int num;
public:
    KthLargest(int k, vector<int>& nums) {
        v=nums;
        sort(v.begin(),v.end());
        num=k;
    }
    
    int add(int val) {
        int i;
        
        for(i=0;i<v.size();i++)
        {
            if(v[i]>val)
            {
                break;
            }
        }
        
        v.insert(v.begin()+i,val);
        return v[v.size()-num];
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */