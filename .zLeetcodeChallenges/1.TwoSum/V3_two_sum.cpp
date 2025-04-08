#include <iostream>
#include <vector>
using std::vector, std::cout;

// vector<int> twoSum(vector<int>& nums, int target);
vector<int> twoSum(vector<int> vector_of_numbers, int sum_value);
int main()
{
    int target = 9;
    vector<int> nums = {11,7,5,3,2,15};
    vector<int> result = twoSum(nums, target);
    
    for (int i = 0; i < 2; i++)
        std::cout << "result: " << result[i] << '\n';
}

vector<int> twoSum(vector<int> vector_of_numbers, int sum_value)
{
    
    return {};
}