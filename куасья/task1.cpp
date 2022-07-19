#include <iostream>
#include <vector>

using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> ivector;
        int flag = 0;

        for (int i = 0; i < n; i++) {
            if (flag == 1) { break; }
            for (int j = 0; j < n; j++) {
                if (nums[i] + nums[j] == target && i != j) {
                    ivector = { i, j };
                    flag = 1;
                    break;
                }
            }
        }
        return ivector;
    }
};

int main() {
    vector <int> nums1;
    nums1 = { 3,2,4 };
    int target2 = 6;
    Solution func;
    vector <int> yavect = func.twoSum(nums1, target2);
    std::cout << yavect[0] << yavect[1];
    return 0;
}
