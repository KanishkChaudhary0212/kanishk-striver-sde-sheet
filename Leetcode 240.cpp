class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=matrix.size();// row ka size starting sey end tk liya hai
        int col=matrix[0].size();//matrix[0] ka size ek row ke size sey no. of columns ptah cl jayenge;

        int rowIndex=0;
        int colIndex=col-1; //last column index le rhe hai ,row ko shuru sey chla rhe or column ko last sey ;

        while(rowIndex< row && colIndex>=0 ){
            // colindex jb tk 0 nah ho kuki last sey chla rhe hai column or row end tk chl rah hai;
            int element = matrix[rowIndex][colIndex];

            if(element==target){
                return 1; //true return inbool
            }

            if(element< target){
                rowIndex++;
            }
            else{
                colIndex--;
            }
        }
        return 0;

        
    }
};
