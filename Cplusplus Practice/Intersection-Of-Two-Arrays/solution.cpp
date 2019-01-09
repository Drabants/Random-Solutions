class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> countArrays;
        for (int i : nums1){
            countArrays[i]++;
        }
        vector<int> intersections;
        for(int i : nums2){
            if (countArrays[i] > 0){
                intersections.push_back(i);
                countArrays[i]--;
            }
        }
        return intersections;
    }
};
