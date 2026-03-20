class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        for(int i=0; i < n ;){
            if(nums[i]==val){
                n--;
                nums.erase(nums.begin()+i);
            }
            else{
                i++;
            }
        }
        return n;
    }
};
