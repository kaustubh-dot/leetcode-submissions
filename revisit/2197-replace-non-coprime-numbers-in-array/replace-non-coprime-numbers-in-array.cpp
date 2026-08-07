class Solution {
public:
    vector<int> replaceNonCoprimes(vector<int>& nums) {
        if(nums.size()==1){
            return nums;
        }
        stack<int> st;
        for(int i:nums){
            int curr=i;
            while(!st.empty()&&gcd(curr,st.top())>1){
                curr=lcm(curr,st.top());
                st.pop();
            }
            st.push(curr);
        }
        vector<int> ans;
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};