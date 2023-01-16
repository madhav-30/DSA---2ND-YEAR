class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int,int> umap;
        for(int i=0; i<nums.size(); i++){
            umap[nums[i]]++;
        }
        int total=0;
        for(auto x: umap){
                total+=(x.second*(x.second-1)/2);
        }
        return total;
    }
    
};
