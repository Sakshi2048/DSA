#include <iostream>
#include <algorithm>  // For next_permutation
#include <vector>

using namespace std;

int main() {
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);


    // Generate all permutations in lexicographical order
    do {
        for(int i = 0; i < nums.size(); i++) {
            cout << nums[i] << " ";
        }
        cout << endl;
    } while (next_permutation(nums.begin(), nums.end()));  // Keep getting next permutation

    return 0;
}
