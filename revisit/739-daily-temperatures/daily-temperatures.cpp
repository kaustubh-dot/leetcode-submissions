class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& arr) {
        vector<int> ans(arr.size(),0);
        stack<int> st;
        int n=arr.size();
        st.push(n-1);
        ans[n-1]=0;
        for(int i=n-2;i>=0;i--){
            while(!st.empty() && arr[st.top()]<=arr[i]){
                st.pop();
            }
            if(st.empty()){
                ans[i]=0;
                st.push(i);
            }
            else{
                ans[i]=st.top()-i;
                st.push(i);
            }

        }
        return ans;
    }
};