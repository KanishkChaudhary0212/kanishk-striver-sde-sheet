// first index of first occurence in a string
class Solution {
public:
    int strStr(string haystack, string needle) {
        int n= haystack.size();
        int m= needle.size();

        for(int i=0; i<=n-m ; i++){ // n-m kiuki last index n-m tk he chlega 10-3=7 uske baad toh sad hume mil he nhi skta hai string meh
            for(int j=0; j<m ; j++){
                if(needle[j]!= haystack[i+j]){
                    break;
                }
                if(j == m-1){ // j=m-1 ie 3-1=2 j pura chla saare charcaters match hogye toh i return krdo
                    return i;
                }
            }
        }
        return -1;
        
    }
};
