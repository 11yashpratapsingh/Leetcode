class Solution {
public:
    int countPrimes(int n) {
        vector<bool> prime(n+1,true);
        prime[0] = prime[1] = false;
        int cnt = 0;
        for(int i=2;i<=n;i++){
            if(prime[i]){
                for(int j=2*i;j<=n;j+=i){
                    prime[j] = false;
                }
            }
        }
        
        for(int i=2;i<n;i++){
            if(prime[i]) cnt++;
        }
        
        return cnt;
    }
};