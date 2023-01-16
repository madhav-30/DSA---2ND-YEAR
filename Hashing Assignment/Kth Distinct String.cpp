class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        string c="";
        unordered_map<string,int> umap;
        for(string x: arr){
            umap[x]++;
        }
        for(string x: arr){
            if(umap[x]==1){
                k--;
            }
            if(k==0){
                return x;
            }
        }
        return c;
    }
};
