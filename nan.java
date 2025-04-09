public class nan implements na {
    public int minZeroArray(int[] nums, int[][] queries) {
    int n=nums.length,left=0,right=queries.length;
    if(!currentIndexZero(nums,queries,right)){
        return -1;
    }
    while(left<=right){
        int middle=left+(right-left)/2;
      if(currentIndexZero(nums, queries, middle)){
        right=middle-1;
      }  
      else{
        left=middle+1;
      }

    }



return left; 

    }
   private boolean  currentIndexZero(int []nums,int [][]queries,int k){
   int sum=0, n=nums.length;
  int []diff=new int [n+1];
  for(int queryindex=0;queryindex<k;queryindex++){
    int left=queries[queryindex][0];//2
    int right=queries[queryindex][1];//
    int val=queries[queryindex][2];


    diff[left]+=val;
    diff[right+1]-=val;
  }
 for(int numindex=0;numindex<n;numindex++){
    sum+=diff[numindex];
    if(sum<nums[numindex])
    return false;
 }
 return true;
   }
}
