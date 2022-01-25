

bool validMountainArray(int* arr, int arrSize){
    if(arrSize < 3){
        return false;
    }else{
        int left = 0;
        int right = arrSize-1;
        while(left < arrSize -1 && arr[left]<arr[left+1]){
            left ++;
        }
        while(right >0 && arr[right-1]>arr[right]){
            right --;
        }
        if(left > 0 && left == right && right <arrSize-1){
            return true;
        }else{
            return false;
        }
    }
}