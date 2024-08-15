#include "stdio.h"

int* findIntersectionValues(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {

    int count1 = 0;

    int count2=0;

    for (int i = 0; i < nums1Size;i++){
        for (int j = 0; j < nums1Size; j++)
        {
            if(nums1[i] == nums2[j]){
                count1++;
                break;
            }

            if (nums2[i] == nums1[j]){
                count2++;
                break;
            }

        }
        
    }

    returnSize[0] = count1;
    returnSize[1] = count2;

    return returnSize;

}