#include <iostream>
#include <limits>
#include <cstddef>

#define ARRAY_SIZE 5

bool two_sum(const int nums[ARRAY_SIZE], const int target, std::size_t& index0, std::size_t& index1) {
    for (std::size_t i = 0; i < ARRAY_SIZE; ++i) {
        for (std::size_t j = 0; j < ARRAY_SIZE; ++j) {
            if (i != j) {
                if (nums[i] + nums[j] == target) {
                    index0 = std::min(i, j);
                    index1 = std::max(i, j);
                    return true;
                }
            }
        }
    }
    return false;
}

int main() {
    int nums[ARRAY_SIZE] = {1, 2, 3, 4, 5};
    int target = 7;
    std::size_t index0, index1;

    if (two_sum(nums, target, index0, index1)) {
        std::cout << "Found two numbers with sum " << target << " at indices: " << index0 << ", " << index1 << std::endl;
        std::cout << "Numbers are: " << nums[index0] << " and " << nums[index1] << std::endl;
    } else {
        std::cout << "No two numbers found with sum " << target << std::endl;
    }

    target = 1;
    if (two_sum(nums, target, index0, index1)) {
        std::cout << "Found two numbers with sum " << target << " at indices: " << index0 << ", " << index1 << std::endl;
        std::cout << "Numbers are: " << nums[index0] << " and " << nums[index1] << std::endl;
    } else {
        std::cout << "No two numbers found with sum " << target << std::endl;
    }

    target = 10;
        if (two_sum(nums, target, index0, index1)) {
        std::cout << "Found two numbers with sum " << target << " at indices: " << index0 << ", " << index1 << std::endl;
        std::cout << "Numbers are: " << nums[index0] << " and " << nums[index1] << std::endl;
    } else {
        std::cout << "No two numbers found with sum " << target << std::endl;
    }
    
    target = 3;
        if (two_sum(nums, target, index0, index1)) {
        std::cout << "Found two numbers with sum " << target << " at indices: " << index0 << ", " << index1 << std::endl;
        std::cout << "Numbers are: " << nums[index0] << " and " << nums[index1] << std::endl;
    } else {
        std::cout << "No two numbers found with sum " << target << std::endl;
    }
    
    target = 6;
        if (two_sum(nums, target, index0, index1)) {
        std::cout << "Found two numbers with sum " << target << " at indices: " << index0 << ", " << index1 << std::endl;
        std::cout << "Numbers are: " << nums[index0] << " and " << nums[index1] << std::endl;
    } else {
        std::cout << "No two numbers found with sum " << target << std::endl;
    }
    

    return 0;
}
