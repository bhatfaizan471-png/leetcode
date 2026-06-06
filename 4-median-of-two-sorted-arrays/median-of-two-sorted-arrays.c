double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    // Ensure nums1 is the smaller array
    if (nums1Size > nums2Size)
        return findMedianSortedArrays(nums2, nums2Size, nums1, nums1Size);

    int x = nums1Size;
    int y = nums2Size;

    int low = 0, high = x;

    while (low <= high) {
        int px = (low + high) / 2;
        int py = (x + y + 1) / 2 - px;

        int maxLeftX  = (px == 0) ? -2147483648 : nums1[px - 1];
        int minRightX = (px == x) ?  2147483647 : nums1[px];

        int maxLeftY  = (py == 0) ? -2147483648 : nums2[py - 1];
        int minRightY = (py == y) ?  2147483647 : nums2[py];

        if (maxLeftX <= minRightY && maxLeftY <= minRightX) {
            // Correct partition found
            if ((x + y) % 2 == 0) {
                int leftMax  = (maxLeftX > maxLeftY) ? maxLeftX : maxLeftY;
                int rightMin = (minRightX < minRightY) ? minRightX : minRightY;
                return (leftMax + rightMin) / 2.0;
            } else {
                return (maxLeftX > maxLeftY) ? maxLeftX : maxLeftY;
            }
        } else if (maxLeftX > minRightY) {
            high = px - 1;   // move left
        } else {
            low = px + 1;    // move right
        }
    }
    return 0.0; // should never reach here
}
