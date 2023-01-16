class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char,int> umap;
        for(char x: jewels){
            umap[x]++;
        }
        int c=0;
        for(char x: stones){
            if(umap.find(x)!=umap.end()){
                c++;
            }
        }
        return c;
    }
};
