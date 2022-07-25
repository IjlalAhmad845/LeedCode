class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        string strs[] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
    
        set<string> st;
        for(int i=0;i<words.size();i++)
        {
            string s="";
            for(int j=0;j<words[i].size();j++)
            {
                s+=strs[words[i][j]-97];
            }
            st.insert(s);
        }
        
        return st.size();
    }
};