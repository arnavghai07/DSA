class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        unordered_map<string, int> mp;
        vector<string> ans;
        
        for(int i =0; i < list1.size(); i++){
            mp[list1[i]] = i;
        }

        int minsum = INT_MAX;

        for(int j = 0 ; j < list2.size(); j++){
            if(mp.count(list2[j])){

                int sum = mp[list2[j]] + j;

                if(sum < minsum){
                    minsum = sum;

                    ans.clear();
                    ans.push_back(list2[j]);
                }
                else if(sum == minsum){
                    ans.push_back(list2[j]);
                }    
            }
        }
        return ans;
        
    }
};