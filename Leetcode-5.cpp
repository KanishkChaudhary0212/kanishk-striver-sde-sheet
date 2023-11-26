class Solution {
public:
    bool isPalindrome(string&s, int start, int end){
        while(start<=end){
            if(s[start]!= s[end]){
                return false;
            }
                else {
                    start++,end--;
                }
        }
     return true;
    }
    
    string longestPalindrome(string s) {
        string ans="";
        for(int i=0; i<s.size(); i++){
            for(int j=i; j<s.size(); j++){
                if(isPalindrome(s,i,j)){ //yha pr i start ka work krr rha hai or j joki end chla jata hai single i=0 pr wo j end ka kaam krr rah hai
                    string t=s.substr(i, j-i+1); // j-i+1 bhi length dikhayega substr meh
                    ans=t.size() > ans.size() ? t : ans; // agr t string ka size ans joki empty hai initially usse bda h toh toh t rhnedo wrna ans string ko he rhnedo

                }
            }
        }
        return ans;
        
    }
};
