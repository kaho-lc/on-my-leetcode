/*
 * @lc app=leetcode.cn id=94 lang=c
 *
 * [94] 二叉树的中序遍历
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int *inorderTraversal(struct TreeNode *root, int *returnSize)
{

    int* res = malloc(sizeof(int) * 200);
    *returnSize = 0;
    helper(root, res, returnSize);
    return res;
}

void helper(struct TreeNode *root, int *res, int *resSize)
{
    if (root == NULL)
    {
        return;
    }

    helper(root->left, res, resSize);
    res[(*resSize)++] = root->val;
    helper(root->right, res, resSize);
}
// @lc code=end
