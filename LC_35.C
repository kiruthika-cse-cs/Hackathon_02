int searchInsert(int* nums, int numsSize, int target) {
  int i;
  int n= numsSize;
  for(i=0;i<n;i++){
    if(nums[i]==target){
        return i;
    }else if(target<nums[i])
    return i;
  }
  return i++;  
}
