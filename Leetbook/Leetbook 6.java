class Solution {
    public int pivotIndex(int[] nums) 
    {
        int len = nums.length;
        int i = 0;
        int left = 0;
        int j = 0;
        int sum = 0;
        for(i = 0;i < len;++i)
        {
            sum+=nums[i];
        }
        for(i = 0;i < len;++i)
        {
            for(j = 0;j < i;j++)
            {
                left+=nums[j];
            }
            if(sum - nums[i] == left * 2)
            {
                return i;
            }
            left = 0;
        }
        return -1;
    }
}
