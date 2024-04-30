int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    // int arr[numsSize];
    int* result = (int*)malloc(2 * sizeof(int));
    if (result == NULL) {
        // Memory allocation failed
        *returnSize = 0;
        return NULL;
    }
    for (int i=0; i < numsSize; ++i){
        for (int j=i+1; j<numsSize; ++j){
            if (nums[j] == target - nums[i]) {
            result[0]=i;
            result[1]=j;
            *returnSize = 2;
            return result;
        }
    }

    }

    *returnSize = 0;
    free(result); // Free allocated memory
    return NULL;
}
