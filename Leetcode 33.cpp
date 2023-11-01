class Solution {
public:
int binarySearch(vector<int>arr,int target,int start, int end ){
  
  

  int mid=(start+end)/2;

  while(start<=end){  //start end sey aage nhi jana chahiye jab tak he loop chlega jabtk dono same jgah pr honge
    int element=arr[mid];

    if(element==target){
      return mid; //index return kra rhe hai hum toh bs
    }
    else if(target<element){
      //search in left
      end = mid-1;
    }
    else{
      //search in right 
      start=mid+1;
    }
    mid=(start+end)/2; //start or end update hogye hai toh mid dobara calculate krna pdega 
  }
  //element not found
  return -1;
  
}

int findpivot(vector<int> arr){
    int s=0;
    int e=arr.size()-1;
    int mid=s+(e-s)/2;

    while(s<=e){
        if(s==e){
            //single element
            return s;
        }
      if(mid+1 < arr.size() && arr[mid]>arr[mid+1]) //mid+1 array sey bhar nna chla jaye
        return mid;
      if(mid-1>=0 && arr[mid-1]>arr[mid]) //mid-1 , 0 index sey peeche nah rahe
        return mid-1;

      if(arr[s]> arr[mid])
        //left search
        e=mid-1;
      else
        //right search
        s=mid+1;   // s=mid becoz for one or single element where s,e,mid at same position there s=mid;
      mid=s+(e-s)/2;
      
    }
    return s;
  }
    int search(vector<int>& nums, int target) {
        int pivotindex=findpivot(nums);

        if(target>=nums[0] && target<= nums[pivotindex]){
            //search in array in 1st sorted array
            int ans=binarySearch(nums, target ,0, pivotindex);
            return ans;
        }

        if(pivotindex+1<nums.size()&&target>=nums[pivotindex+1] && target<= nums[nums.size()-1]){
            //search in 2nd sorted array
            int ans=binarySearch(nums,target,pivotindex+1,nums.size()-1);
            return ans;
        }
        return -1;
        
    }
};
