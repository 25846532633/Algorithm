#include <stdio.h>

void rotate(int* nums, int numsSize, int k) {
    k = k % numsSize;
    if (k == 0) return; // 不需要移动

    int* nums2 = (int*)malloc(numsSize * sizeof(int));

    // 复制后半部分到 nums2 的前面
    for (int i = 0; i < k; i++) {
        nums2[i] = nums[numsSize - k + i];
    }

    // 复制前半部分到 nums2 的后面
    for (int i = 0; i < numsSize - k; i++) {
        nums2[k + i] = nums[i];
    }

    // 将 nums2 的内容复制回 nums
    for (int i = 0; i < numsSize; i++) {
        nums[i] = nums2[i];
    }

    free(nums2);
}