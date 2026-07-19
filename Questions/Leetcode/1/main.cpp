#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> num_map;
        for(int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            try
            {
                num_map.at(complement);
                return {num_map[complement], i};
            }
            catch(const std::exception& e)
            {
                num_map[nums[i]] = i;
            }
        }
        return {};
    }

int main() {
    vector<int> nums = {-1,-2,-3,-4,-5};
    int target = -8;
    vector<int> result = twoSum(nums, target);
    for(int i : result) {
        cout << i << " ";
    }
    vector<int> nums2 = {3,3};
    int target2 = 6;
    vector<int> result2 = twoSum(nums2, target2);
    for(int i : result2) {
        cout << i << " ";
    }

    return 0;
}