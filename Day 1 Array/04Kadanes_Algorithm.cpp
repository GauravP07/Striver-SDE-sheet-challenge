class Solution {
public:
    int maxSubArray(vector<int>& nums) {
      int cs=0,ls=INT_MIN;

      for(int i=0;i<nums.size();i++){
          cs+=nums[i];
           ls=max(ls,cs);
          if(cs<0){
              cs=0;
          }

         
      }

      return ls;
    }
};