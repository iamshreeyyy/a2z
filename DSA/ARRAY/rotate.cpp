#include<bits/stdc++.h>
using namespace std;

void rotate(vector<int>& nums, int k) {
   int n = nums.size();
   if (n == 0) return;
   k = k % n;
   reverse(nums.begin(), nums.end());
   reverse(nums.begin(), nums.begin() + k);
   reverse(nums.begin() + k, nums.end());
}

int main(){
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int k;
    cout << "Enter the number of positions to rotate: ";
    cin >> k;

    cout << "Original vector: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    rotate(nums, k);

    cout << "Rotated vector: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}