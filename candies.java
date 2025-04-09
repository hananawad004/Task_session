public class candies {
    
    public int maximumCandies(int[] candies, long k) {
        // find max of array
        int maxcandi=0;
        for(int i=0;i<candies.length;i++ ){
            maxcandi=Math.max(maxcandi, candies[i]);

        }

    int left=0;
    int right=maxcandi;
    while(left<right){
    int middle=left+(right-left)/2;
    if(canallocate(candies,k,middle)){
            left=middle;
        }

    else{
        right=middle-1;
    }
        
    return left;
      }
        
    }
        private boolean canallocate(int[] candies, long k, int middle) {
            long maxch=0;
            for(int i=0;i<candies.length;i++){
                maxch+=candies[i]/middle;
            }
            return maxch >=k;   
          }
    
}
