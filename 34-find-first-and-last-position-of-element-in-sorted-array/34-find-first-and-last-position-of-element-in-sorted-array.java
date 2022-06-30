class Solution {
    public int[] searchRange(int[] nums, int target) {
        int[] ans = {-1,-1};
        ans[0] = search(nums, target, true);
        if(ans[0] != -1){
            ans[1] = search(nums, target, false);
        }
        return ans;
    }    
    public static int search(int[] arr, int target, boolean targetINDEX){
        int start = 0, end = arr.length-1, answer = -1;
        while(start <= end){
            int mid = start +((end - start)/2);
            if(target > arr[mid]){
                start = mid + 1;
            }else if(target < arr[mid]){
                end = mid - 1;
            }else{
                answer = mid;  //potential answer
                if(targetINDEX){  
                    end = mid - 1;    //first occurence of the target
                }else{
                    start = mid + 1;  //second occurence of the target
                }
            }
        }
        return answer;
    }
}