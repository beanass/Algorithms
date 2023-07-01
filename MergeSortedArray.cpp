
#include "MergeSortedArray.h"

void MergeSortedArray::merge(std::vector<int> &nums1, int m, std::vector<int> &nums2, int n) {
    std::vector<int> tmp;
    int j = 0;
    for (int i = n-1; i >=0 ; ++i, j++) {
        if(nums1[m-1-j] < nums2[i]){
            //nums1[m+i] =
        }
    }
}
