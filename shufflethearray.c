/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* shuffle(int* nums, int numsSize, int n, int* returnSize){
     int secv[n];
    int *vec = (int*) malloc(numsSize * sizeof(int));
    for(int i = 0;i<n;i++){
        secv[i] = nums[n+i];
    }
    for(int i = 0;i<numsSize;i++){
        if(i % 2 == 0){
            vec[i] = nums[i/2]; 
        }
        else{
            vec[i] = secv[i/2];
        }
    }
    *returnSize = numsSize;
    return vec;
}