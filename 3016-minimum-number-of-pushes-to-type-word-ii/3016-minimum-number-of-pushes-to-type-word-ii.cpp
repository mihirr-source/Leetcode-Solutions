class Solution {
public:
    int minimumPushes(string word) {
        unordered_map<char, int> freq;
        for(int i = 0; i<word.length(); i++){
            freq[word[i]]++;
        }
        vector<int> count;
        for(auto pair:freq){
            auto countc = pair.second;
            count.push_back(countc);
        }
        int ans = 0;
        if(count.size()<=8){
            for(int i = 0; i<count.size(); i++){
                ans += count[i];
            }
        }
        else{
            sort(count.begin(), count.end());
            int nums = 0;
            for(int i = count.size()-1; i>=0; i--){
                if(nums<8){
                    ans += count[i];
                }
                else if(nums>=8 && nums<16){
                    ans += 2*count[i];
                }
                else if(nums>=16 && nums<24){
                    ans += 3*count[i];
                }
                else{
                    ans += 4*count[i];
                }
                nums++;
            }
        }
        return ans;
    }
};