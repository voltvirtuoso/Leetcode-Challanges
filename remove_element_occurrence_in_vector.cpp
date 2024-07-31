class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        auto loc = find(nums.begin(), nums.end(), val);
        while (loc!=nums.end()){
            nums.erase(loc);
            loc = find(nums.begin(), nums.end(), val);
        }
        return nums.size();
    }
};
