/*
 * @lc app=leetcode.cn id=1 lang=c
 *
 * [1] 两数之和
 */

// @lc code=start
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int *twoSum(int *nums, int numsSize, int target, int *returnSize)
{
    int i, j;
    int *res = NULL;
    *returnSize = 2;
    // 双重循环来解决
    for (i = 0; i < numsSize - 1; i++)
    {
        for (j = i + 1; j < numsSize; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                res = (int *)malloc(sizeof(int) * 2);
                res[0] = i;
                res[1] = j;

                return res;
            }
        }
    }
    return NULL;
}
// @lc code=end
