#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

int minimizeCleaningCost(string dataset, int matchCost, int mismatchCost) {
    vector<int> freq(26, 0);
    for (char c : dataset) {
        freq[c - 'a']++;
    }

    int totalCost = 0;

    if (matchCost <= mismatchCost) {
        int single_chars_left = 0;
        for (int count : freq) {
            totalCost += (count / 2) * matchCost;
            single_chars_left += (count % 2);
        }
        totalCost += (single_chars_left / 2) * mismatchCost;
    } else {
        int n = dataset.length();
        int max_freq = 0;
        for (int count : freq) {
            if (count > max_freq) {
                max_freq = count;
            }
        }

        int num_forced_matches = 0;
        if (max_freq > n / 2) {
            num_forced_matches = max_freq - (n / 2);
        }
        
        int num_mismatches = (n / 2) - num_forced_matches;
        totalCost = (num_forced_matches * matchCost) + (num_mismatches * mismatchCost);
    }

    return totalCost;
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string dataset;
    cin >> dataset;

    int matchCost;
    cin >> matchCost;

    int mismatchCost;
    cin >> mismatchCost;

    int result = minimizeCleaningCost(dataset, matchCost, mismatchCost);

    cout << result << endl;

    return 0;
}