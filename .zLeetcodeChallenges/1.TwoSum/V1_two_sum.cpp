#include <iostream>

int *added_equal_target(int array_of_numbers[], int sum_value, int sizeof_array);
int main()
{
    int target = 9;
    int nums[] = {1, 5, 2, 7, 8, 9};
    int size = sizeof(nums) / sizeof(nums[0]);
    
    int *result = added_equal_target(nums, target, size);
    for (int i = 0; i < 2; i++)
        std::cout << result[i] << '\n';
}

int *added_equal_target(int array_of_numbers[], int sum_value, int sizeof_array)
{
    int sum_test;
    static int two_index[2];
    for (int i = 0; i < sizeof_array - 1; i++)
    {
        // cout << "i: " << i << '\n';
        if (array_of_numbers[i] > sum_value)
            continue;
        for (int j = i + 1; j < sizeof_array; j++)
        {
            // cout << "j: " << j << '\n';
            sum_test = array_of_numbers[i] + array_of_numbers[j];
            if (sum_test == sum_value)
            {
                two_index[0] = i;
                two_index[1] = j;
                return two_index;
            }
            sum_test = 0;
        }
    }
    return two_index;
}