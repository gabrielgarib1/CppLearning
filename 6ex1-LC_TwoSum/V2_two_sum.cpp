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
    for (int i = 0; i < vector_of_numbers.size() - 1; i++)
    {
        for (int j = i + 1; j < vector_of_numbers.size(); j++)
        {
            if (vector_of_numbers[i] + vector_of_numbers[j] == sum_value)
            {   vector<int> two_index={i,j};
                return two_index;
            }
        }
    }
    return {};
}