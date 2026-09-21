class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        int atotal = 0;
        int btotal = 0;

        for(int x : aliceSizes){
            atotal += x;
        }

        for(int y : bobSizes){
            btotal += y;
        }

        int diff = (btotal - atotal)/2;

        for(int x : aliceSizes){
            int needed = x + diff;

            for(int y : bobSizes){
                if(y == needed){
                    return {x,y};
                }
            }
        }
        return {};
    }
};