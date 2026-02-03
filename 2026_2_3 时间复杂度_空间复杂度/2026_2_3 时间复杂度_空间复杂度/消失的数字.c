
int missingNumber(int* nums, int numsSize) {
    int i = 0;
    int sum = 0;
    for (int i = 0; i <= numsSize; i++)
    {
        sum += i;
    }
    for (int i = 0; i < numsSize; i++)
    {
        sum -= nums[i];
    }
    return sum;
}

int missingNumber2(int* nums, int numsSize) {
    int i = 0;
    int sum = 0;
    for (int i = 0; i <= numsSize; i++)
    {
        sum ^= i;
    }
    for (int i = 0; i < numsSize; i++)
    {
        sum ^= nums[i];
    }
    return sum;
}