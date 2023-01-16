class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int,int> umap;
        for(auto x: nums){
            umap[x]++;
        }
        int sum=0;
        for(auto x: umap){
            if(x.second==1){
                sum+=x.first;
            }
        }
        return sum;
    }
};
