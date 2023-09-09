class Solution {
public:
    bool digitCount(string nums) {
        unordered_map<int,int>mp;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            mp[nums[i]-'0']++;
        }
        for(int i=0;i<n;i++)
        {
            if(mp[i]!=nums[i]-'0')
                return 0;
        }
        return 1;
    }
};