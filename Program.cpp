class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()==0) return 0;
        queue<int> q;
        q.push(nums[0]);
        for(int i=1;i<nums.size();i++){
            if(q.back()!=nums[i])
                q.push(nums[i]);
        }
        nums.clear();
        while(!q.empty()){
            int x=q.front();
            q.pop();
            nums.push_back(x);
        }
        return nums.size();
    }
};
