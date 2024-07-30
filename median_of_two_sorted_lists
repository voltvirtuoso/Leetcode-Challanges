class Solution(object):
    def findMedianSortedArrays(self, nums1, nums2):
        """
        :type nums1: List[int]
        :type nums2: List[int]
        :rtype: float
        """
        temp = nums1+nums2
        temp.sort()
        return temp[(len(temp)/2)] if len(temp)%2==1 else (temp[len(temp)/2]+temp[len(temp)/2-1])/2.0
