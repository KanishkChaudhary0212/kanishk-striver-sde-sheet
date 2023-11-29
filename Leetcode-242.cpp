class Solution {
public:
    bool isAnagram(string s, string t) {
        int n=s.length();
        int m=t.length();
        if(n!=m){
            return false;
        }
        int freqTable[256]={0}; // array of int for 256 ASCII values containing initially 0 value
        for(int i=0;i<s.size();i++){
            freqTable[s[i]]++; // automatically jo character s string sey aayega ye isko convert krdega uski ASCII meh , toh uss same ASCII pr jitni baar value gyi hogi wha coun++ hota rha hoga similarly for each character unki ascii positions joki freqTable mh index ka kaam kregi wha accordingly count++ hota rhega 

 //ek trah sey typecasting horhi hai hrr ek character[i] jb aaynege toh ye apne aap he character ko convert krdega uski corresponding ascii meh toh character[i] prr gye ++ krdiya yani 0 ko 1; jese s[i] pr mila a toh a freqTable mh particular ascii pr he toh jayega nah freqTable toh int data type ki hai wha pr ++ kr rhe hai

        }
        for(int i=0;i<t.size();i++){
            freqTable[t[i]]--;
        }

        for(int i=0;i<256;i++){
            if(freqTable[i]!=0){
                return false;
            }
        }
        return true;
    }
};
