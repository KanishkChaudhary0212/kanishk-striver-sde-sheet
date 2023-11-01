class Solution {
public:
    int divide(int dividend, int divisor) {
      
        if (divisor == 0 || (dividend == INT_MIN && divisor == -1)) {
            return INT_MAX;
        }
          if (divisor == 0 || (dividend == INT_MIN && divisor == 1)) 
            return INT_MIN;
    long long int s=0;
    long long int e = abs(dividend);
    long long int mid=s+(e-s)/2;
    long long int ans=0;

  while(s<=e){
    
    if(abs(mid*divisor) == abs(dividend)){
      //perfect solution
      //return mid; // ise shi ans nhi aata kbhi aage loop chl jata hai
      ans=mid; // ans mil chuka hai toh aage loop nhi chlana break; 
      break;
    }
    //not perfect solution
    if(abs(mid*divisor) > abs(dividend)){
      //left search
      e=mid-1;
    }
    
  
    else{
      //ans store
      ans=mid;
      //right search
      s= mid+1;
    }
     mid=s+(e-s)/2;
  }

  if((dividend>0 && divisor>0)|| (divisor<0 && dividend<0))
    return ans;
  else{
    return -ans;
        
  }
    }
};
