class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int>res;
        for(int i=0;i<index.size();++i){
            res.insert(res.begin()+index[i],nums[i]);
        }
        return res;
    }
};
//Time complexity - O(N)
//Space complexity - O(N)
