class Solution {
public:
    int mySqrt(int x) {
 int target= x;
 if(x<2){
     return x;
 }
  int s=0;
  int e=x/2;
  int mid=s+(e-s)/2;
  int ans=-1;

  while(s<=e){
    if((long)mid*mid==target){
      return mid; //yha toh return krahe do equal aagya baki condns k liye baad meh kradena neeche return
    }
      
    if((long)mid*mid> target){
       //left search
      e=mid-1;
    }
    else{
      ans=mid; //ans store
      s=mid+1; // right search
    }
    mid=s+(e-s)/2;
      
  }
  return ans;
        
    }
};
