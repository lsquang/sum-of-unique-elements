
#include <iostream>
#include <vector>
using namespace std;

int count(vector<int>& nums, int num) {
    int num_found = 0;
    for (int value : nums) {
        if (value == num) {
            num_found++;
        }
    }
    return num_found;
}

int sumOfUnique(vector<int>& nums) {
    int sum_unique = 0;
    for (int value : nums) {
        if (count(nums, value) == 1) {
            sum_unique += value;
        }
    }
    return sum_unique;
}

int main()
{
    vector<int> numbers = { 1,2,3,1 };
    cout << sumOfUnique(numbers) << endl;
}

