/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int *twoSum(int *nums, int numsSize, int target, int *returnSize)
{
    int ans[2], ans1 = 0, ans2 = 0;
    for (int i = 0; i < numsSize; i++)
    {
        for (int j = i + 1; j < numsSize; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                ans1 = i;
                ans2 = j;
            }
        }
    }
    ans[0] = ans1;
    ans[1] = ans2;
    return ans;
}