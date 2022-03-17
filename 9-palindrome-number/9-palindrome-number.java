class Solution {
    public boolean isPalindrome(int n) {
         int r,sum=0,temp;    
   
  boolean ans=true;
  temp=n;    
  while(n>0){    
   r=n%10;  //getting remainder  
   sum=(sum*10)+r;    
   n=n/10;    
  }    
  if(temp==sum)    
  ans=true;    
  else    
   ans =false;
        
        return ans;
      
    }
}