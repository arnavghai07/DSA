class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        unordered_map<int, int> freq;

        for(int c : arr1){
            freq[c]++;
        }

        vector<int> ans;

        for(int x : arr2){
            while(freq[x] > 0){
                ans.push_back(x);
                freq[x]--;
            }
        }

        vector<int> remain;

        for(auto p : freq){
            while(p.second > 0){
                remain.push_back(p.first);
                p.second--;
            }
        }

        sort(remain.begin(), remain.end());

        for(int x : remain){
            ans.push_back(x);
        }

        return ans;
    }
};