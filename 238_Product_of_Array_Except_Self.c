/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* productExceptSelf(int* nums, int numsSize, int* returnSize) {
    int *ans = malloc(numsSize * sizeof(int));
    *returnSize = numsSize;

     int product = 1;

    for(int i = 0; i < numsSize; i++)
    {
        ans[i] = product;
        product = product * nums[i];
    }

    product = 1;

    for(int i = numsSize - 1; i >= 0; i--)
    {
        ans[i] = ans[i] * product;
        product = product * nums[i];
    }

    return ans;
}
