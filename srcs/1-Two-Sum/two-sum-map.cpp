#include <iostream>
#include <vector>
#include <unordered_map>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        std::unordered_map<int, int> umap;
        for (int i = 0; i < nums.size(); i++) {
            if (umap.find(target - nums[i]) != umap.end()) {
                    return {umap[target - nums[i]], i};
            }
            umap[nums[i]] = i;
        }
        return {};
    }
};

int main() {
  Solution solution;

  std::vector<int> nums = {2, 7, 11 ,15};

  int target = 9;

  std::vector<int> result = solution.twoSum(nums, target);

  if (!result.empty()) {
    std::cout << "Los índices de los dós números cuya suma es " << target << " son: " << result[0] << " y " << result[1] << std::endl;
  } else {
    std::cout << "No se encontró una solución pra el target " << target << std::endl;
  }
}