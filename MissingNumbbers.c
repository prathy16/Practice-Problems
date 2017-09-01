int missingNumber(int* nums, int numsSize) {
  int sum_N = (numsSize*(numsSize+1))/2;
  for(int i=0; i< numsSize; i++)
      sum_N = sum_N-nums[i];
  return sum_N;
}
