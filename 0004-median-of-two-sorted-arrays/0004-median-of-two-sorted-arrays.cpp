class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        double res;
        for(int i = 0;i<nums2.size();i++){
            nums1.push_back(nums2[i]);
        }
        for(int i = 0;i<nums1.size();i++){
            cout << nums1[i] << endl;
        }
        sort(nums1.begin(), nums1.end());
        if(nums1.size() % 2== 0){
            int len = int(nums1.size() /2);
            res = (nums1[len-1]+nums1[len])/2.0;
        }else{
            res = nums1[(int)nums1.size() /2];
        }
        return res;
    }
};