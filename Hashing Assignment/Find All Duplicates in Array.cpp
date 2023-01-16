class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int,int> umap;
        vector<int>ans;
        for(auto x: nums){
            umap[x]++;
        }
        for(auto x: umap){
            if(x.second==2){
                ans.push_back(x.first);
            }
        }
        return ans;
    }
};
