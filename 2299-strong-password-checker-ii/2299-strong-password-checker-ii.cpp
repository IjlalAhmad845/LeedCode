class Solution {
public:
    bool strongPasswordCheckerII(string password) {
        if(password.size()<8)
            return false;
        
        int flag=0;
        for(int i=0;i<password.size();i++)
            if(password[i]>='a' && password[i]<='z')
                flag=1;
        
        if(flag==0)
            return false;
        
        flag=0;
        
        for(int i=0;i<password.size();i++)
            if(password[i]>='A' && password[i]<='Z')
                flag=1;
        
        if(flag==0)
            return false;
        
         flag=0;
        
        for(int i=0;i<password.size();i++)
            if(password[i]>='0' && password[i]<='9')
                flag=1;
        
        if(flag==0)
            return false;
        
        flag=0;
        
        string arr="!@#$%^&*()-+";
        set<char> st;
        for(int i=0;i<arr.size();i++)
            st.insert(arr[i]);
        
          for(int i=0;i<password.size();i++)
            if(st.find(password[i])!=st.end())
                flag=1;
        
        if(flag==0)
            return false;
        
        for(int i=0;i<password.size()-1;i++)
            if(password[i]==password[i+1])
                return false;
        
        return true;
    }
};