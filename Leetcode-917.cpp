class Solution {
public:
    string reverseOnlyLetters(string s) {
        int l=0; 
        int h=s.size()-1;
        while(l<h){
            //if((ch>=97 77 ch<=122) || (ch>=65 && ch<=90)
            if(isalpha(s[l]) && isalpha(s[h])){
                swap(s[l], s[h]);
                l++,h--;
            }
            else if(!isalpha(s[l])){ //s[l] is not alpha
                l++;
            }
            else {
                //s[h] -> not alpha
                h--;
            }
        }
        return s;
        
    }
};
