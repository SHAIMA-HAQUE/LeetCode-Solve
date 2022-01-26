

int searchInsert(int* nums, int numsSize, int target){
    int res;
    int low = 0;
    int high = numsSize -1;
    res = binary_search(nums, numsSize, low, high, target);
    return res;
}

int binary_search(int *nums, int numsSize,int low, int high, int target){
    int mid;
    if(high < low){
        return low;
    }
    mid = (low+high)/2;
    if(nums[mid]>target){
        return binary_search(nums, numsSize, low, mid-1, target);
    }else if(nums[mid]<target){
        return binary_search(nums, numsSize, mid+1, high, target);
    }else{
        return mid;
    }
}