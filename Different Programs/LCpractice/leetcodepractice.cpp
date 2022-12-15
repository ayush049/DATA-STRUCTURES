//pivot index #724

// class Solution {
// public:
//     int pivotIndex(vector<int>& nums) {
//         int p=-1,r=0,l=0;
//         for(int i=1;i<nums.size();i++){
//             r=r+nums[i];
//         }
//         for(int i=1;i<nums.size();i++){
//             if(l==r)
//                 return i-1;
//             l=l+nums[i-1];
//             r=r-nums[nums.size()-i];
//         }
//         if((l==r) & (nums.size()==1))
//             return nums.size()-1;
//      return -1;
//     }
// };
