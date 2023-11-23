class Solution {
public:
    int expandAroundIndex(string s, int i, int j){
        int count =0;
        // jab tak match krega tb tk count increment krdo and i peeche and j aage krdo
        while(i>=0 && j<s.length() && s[i] == s[j]){
            count++;
            i--;
            j++;
        }
        return count; 
    }
    int countSubstrings(string s) { 
        int totalcount=0;
        int n=s.length();

        for(int i=0; i<n; i++){
            //odd case
            int oddKaans = expandAroundIndex(s,i,i); // i or j ki dono ki value i he bheji hai
            totalcount = totalcount+oddKaans;

            //even case
            int evenKaans= expandAroundIndex(s,i,i+1); // j ki vslue i+1
            totalcount = totalcount+evenKaans;
        }
        return totalcount;
        
    }
};
