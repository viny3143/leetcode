class Solution {
public:
    int minimumLength(string s) {
        
        int n=s.size();
        int i=0;
        int j=n-1;
       if(s[i]!=s[j])return n;
       char c = s[i];
        while(i<j){
             
            while(s[i]==c and i<j-1 ){
                i++;
            }
            while(j>i-1 and s[j]==c){
                j--;
            }
            if(s[i]==s[j]){
                c=s[i];
            }
            else 
            {   
                break;
            }
        }
        return j-i+1;
    }
};