void re(int* nums, int i, int j)
{
    int t;
    while (i < j)
    {
        t = nums[i];
        nums[i++] = nums[j];
        nums[j--] = t;
    }
}
void rotate(int* nums, int numsSize, int k)
{
    k %= numsSize;
    re(nums, 0, numsSize - 1);
    re(nums, 0, k - 1);
    re(nums, k, numsSize - 1);
}