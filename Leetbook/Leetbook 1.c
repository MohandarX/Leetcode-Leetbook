int removeDuplicates(int* nums, int numsSize)
{
    if (numsSize == 0)
    {
        return 0;
    }
    int right, left = 0;
    for (right = 1; right < numsSize; right++)
    {
        if (nums[left] != nums[right])
        {
            nums[++left] = nums[right];
        }
    }
    return left + 1;
}