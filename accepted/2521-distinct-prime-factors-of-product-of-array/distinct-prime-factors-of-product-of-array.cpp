class Solution {
public:
    void isprime(unordered_set<int>* m ,int n){
        for(int i=2;i*i<=n;i++){
            if(n%i==0){
                m->insert(i);
                while(n%i==0){
                    n/=i;
                }
            }
        }
        if(n>1){
            m->insert(n);
        }
    }
    int distinctPrimeFactors(vector<int>& nums) {
       unordered_set<int> factors;
       for(int i:nums){
        isprime(&factors,i);
       } 
       return factors.size();
    }
};