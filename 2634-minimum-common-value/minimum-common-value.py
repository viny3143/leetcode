class Solution:
    def getCommon(self, nums1: List[int], nums2: List[int]) -> int:
        # nums1.sort()
        # nums2.sort()
        # set(nums1)
        # set(nums2)
        # # print(nums1)
        # # print(nums2)
        # for i in nums1:
        #     if i in nums2:return i
        # return -1
        nums1_set = set(nums1)
        nums2_set = set(nums2)
        common_elements = nums1_set.intersection(nums2_set)
        if common_elements:return min(common_elements)
        else:return -1