int singleNumber(int* nums, int numsSize) {
 int h = 0;
for(int i = 0; i < numsSize; i++)
{
h ^= nums[i];
}

    return h;   
}
