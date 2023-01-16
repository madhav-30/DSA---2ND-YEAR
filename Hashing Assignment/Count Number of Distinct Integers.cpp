class Solution {
public:

    int reverse(int n){
        int r,s=0;
        while(n>0){
            r=n%10;
            s=(s*10)+r;
            n=n/10;
        }
        return s;
    };

    int countDistinctIntegers(vector<int>& nums) {
        unordered_set<int> umap;
        for(auto x: nums){
            int r=reverse(x);
            umap.insert(x);
            umap.insert(r);
        }
        return umap.size();

    }
};
