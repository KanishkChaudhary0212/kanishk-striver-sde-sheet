// Sort Colours
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int start =0;
        int end = nums.size()-1;
        int i=0;

        while(i<=end){
            if(nums[i]==0){
                swap(nums[start],nums[i]);
                start++;
                i++;
            }
            // agar 1 aayega toh aage check karo next zero k liye kiuki zero we need to keep it atmost left side
            else if(nums[i]==1){
                i++;
            }
            else{
                swap(nums[end],nums[i]);
                end--;
            }
        }


        
    }
};
