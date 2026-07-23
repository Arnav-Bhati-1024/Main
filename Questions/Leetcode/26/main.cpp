#include<iostream>
#include<vector>
std::vector<int> nums ={1,1,1,2,2,3,3,4,4,5,5,6,7,7,8,9,10};
int removeDuplicates(std::vector<int>& nums) {
        int u=1;
        for (int i=1;i<nums.size();i++){
            if(nums[i]!=nums[i-1]){
                nums[u]=nums[i];
                u++;
            }
        }
        return u;
};
void pv(std::vector<int> v){
    for (auto i:v){
        std::cout << i << "_";
    }
    std::cout << "\n";
};
int main() {
    pv(nums);
    std::cout << removeDuplicates(nums) << "\n";
    pv(nums);
}
