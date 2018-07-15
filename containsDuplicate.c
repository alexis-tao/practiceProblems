/**
 * Practice Problem: https://leetcode.com/problems/contains-duplicate/description/
 */
int cmprNums (int *a, int *b) {
    return *a-*b;
}

bool containsDuplicate(int* nums, int numsSize) {
    qsort(nums, numsSize, sizeof(int), cmprNums);
    for (int i = 0; i < numsSize-1; ++i) {
        if (nums[i] == nums[i+1]){
            return true;
        }
    }
    return false;
}