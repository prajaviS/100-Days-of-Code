class Solution {
public:
    int signFunc(double x){
        if(x>0){
            return 1;
        }
        else if(x<0){
            return -1;
        }
        else{
            return 0;
        }
    }
    int arraySign(vector<int>& nums) {
        int n=nums.size();
        double prod=1.0;
        for(int i=0;i<n;i++){
            prod*=nums[i];
        }
        return signFunc(prod);
        
        
    }
};
