class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
        vector<int> v(num_people,0);
        
        int itr=0;
        int sum=0;
        while(candies>=0)
        {
            int candy=itr+1;
            if(candy<=candies)
                v[(itr)%num_people]+=candy;
            else 
                v[(itr)%num_people]+=candies;
            itr++;
            candies-=itr;
        }
        
        return v;
    }
};