class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<string> result(score.size(),"");
        
        int max=score[0];
        int index=0;
        for(int i=0;i<score.size();i++)
        {
            max=score[0];
            index=0;
            for(int j=0;j<score.size();j++)
            {
                if(max<score[j])
                {
                    max=score[j];
                    index=j;
                }
            }
            
            if(i==0)
            result[index]="Gold Medal";
            else if(i==1)
                result[index]="Silver Medal";
            else if(i==2)
                result[index]="Bronze Medal";
            else result[index]=to_string(i+1);
            
            score[index]=-1;
        }
        
        
        return result;
    }
};