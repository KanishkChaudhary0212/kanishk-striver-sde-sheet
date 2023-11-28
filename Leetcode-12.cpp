class Solution {
public:
    string intToRoman(int num) {
        string romansymbols[] = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I" };

        int values[] = {1000,900,500,400,100,90,50,40,10,9,5,4,1};

        // values are mapped with romansymbols

        string ans="";

        for(int i=0;i<13;i++){  
            while(num>=values[i]){  //jese 1994>=1000 sey bda hai ,toh hum jbtk num 1000 sey bda rhega hum usme M add krte rhenge with help of romansymbols[i];
                ans=ans+romansymbols[i]; // jitne jrurt honge utne add hote rhenge roman values
                num = num-values[i];
            }

        }
        return ans;
    
        


        
    }
};
