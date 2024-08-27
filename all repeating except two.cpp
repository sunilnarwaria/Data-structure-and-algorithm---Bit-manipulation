class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        long long int xxor = 0;
        for(int i = 0;i <n;i++){
            xxor = xxor ^ nums[i]; //XOR of all the numbers or watch pepcoding solution by Sumit malik 
        }
        long long int rmsb = xxor & -xxor; // this will give right most set bit

        int x = 0;
        int y = 0;
      // below for loop will find the those two numbers from xor of two number using trick of right most set bit
        for(int i = 0; i < n;i++){
            if((nums[i] & rmsb) == 0){
                x = x ^ nums[i];
            }else{
                y = y ^ nums[i];
            }
        }
        ans.push_back(x);
        ans.push_back(y);
        return ans;
        
    }
};
