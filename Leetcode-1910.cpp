class Solution {
public:
    string removeOccurrences(string s, string part) {
        int pos = s.find(part); //pos meh part ka starting index store hoga
        while(pos!= string::npos){
            // jab tk hume valid index mil rha hai jb tk chlega loop

            s.erase(pos,part.length());
            pos=s.find(part); //pos ko dobara update krdiya bachi hui string mh bhi toh firse dhundenge nah substring(part) ko

        }
        return s;
    }
};
