//remove element
//time:0ms
//space:9.58
int removeElement(int* nums, int numsSize, int val) {
    if(numsSize==0) return 0;
    int count =0;
    for (int i=0;i<numsSize;i++){
        if(nums[i]!=val){
            nums[count]=nums[i];
            count++;
        }
    }
    return count;
}
