class Solution {
public:
    string removeDuplicates(string s) {
        string ans=""; //empty array create
        int i=0;

        while(i<s.length()){
       //i input wali string tk chlega

       //ans string ki length 0 sey jada hogi tbhi to compare kr skenge wrna tb tk toh bs push_back he hoga
           if( ans.length() > 0 && ans[ans.length()-1] == s[i]){ 
           ans.pop_back();
            }
           else{
           ans.push_back(s[i]);
            }

            i++;
        }
       
       

        
        return ans;
    }
};
