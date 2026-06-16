#include <math.h>
#include <fenv.h>

#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define MIN(a, b) ((a) < (b) ? (a) : (b))

double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    // Ensure nums1 is the smaller array to optimize binary search range O(log(min(m, n)))
    if (nums1Size > nums2Size) {
        return findMedianSortedArrays(nums2, nums2Size, nums1, nums1Size);
    }
    
    int m = nums1Size;
    int n = nums2Size;
    int low = 0, high = m;
    
    while (low <= high) {
        int partitionX = (low + high) / 2;
        int partitionY = (m + n + 1) / 2 - partitionX;
        
        // If partitionX is 0, it means nothing is on the left side of nums1. Use -INFINITY.
        // If partitionX is m, it means nothing is on the right side of nums1. Use INFINITY.
        int maxLeftX = (partitionX == 0) ? -1e7 : nums1[partitionX - 1];
        int minRightX = (partitionX == m) ? 1e7 : nums1[partitionX];
        
        int maxLeftY = (partitionY == 0) ? -1e7 : nums2[partitionY - 1];
        int minRightY = (partitionY == n) ? 1e7 : nums2[partitionY];
        
        // Check if we found the correct partition
        if (maxLeftX <= minRightY && maxLeftY <= minRightX) {
            // If the total number of elements is odd
            if ((m + n) % 2 != 0) {
                return (double)MAX(maxLeftX, maxLeftY);
            }
            // If the total number of elements is even
            return ((double)MAX(maxLeftX, maxLeftY) + MIN(minRightX, minRightY)) / 2.0;
        } 
        else if (maxLeftX > minRightY) {
            // We are too far right in nums1, move left
            high = partitionX - 1;
        } 
        else {
            // We are too far left in nums1, move right
            low = partitionX + 1;
        }
    }
    
    return 0.0; // Should never be reached if inputs are sorted
}