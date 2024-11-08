#include<bits/stdc++.h>
using namespace std;
#define start() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

vector<int> findMaxSum(const vector<int>& n) {
    int maxSum = -1;
    int minLength = INT_MAX;
    vector<int> bestSubseq;
    
    for (int start = 0; start < n.size(); ++start) {
        int currentSum = 0;
        for (int end = start; end < n; ++end) {
            currentSum += n[end];
            int length = end - start + 1;
            if (currentSum > maxSum || (currentSum == maxSum && length < minLength)) {
                maxSum = currentSum;
                minLength = length;
                bestSubseq = vector<int>(n.begin() + start, n.begin() + end + 1);
            }
        }
    }
    
    return bestSubseq;
}

int main() {
    start()
    string line;
    vector<string> inputLines;
    
    // Reading all input lines
    while (getline(cin, line)) {
        inputLines.push_back(line);
    }
    
    size_t index = 0;
    
    while (index < inputLines.size()) {
        int N = stoi(inputLines[index]);
        if (N == 0) {
            break;
        }
        
        vector<int> n;
        for (int i = 0; i < N; ++i) {
            ++index;
            n.push_back(stoi(inputLines[index]));
        }
        
        vector<int> bestSubseq = findMaxSum(n);
        for (size_t i = 0; i < bestSubseq.size(); ++i) {
            if (i > 0) cout << " ";
            cout << bestSubseq[i];
        }
        cout << endl;
        
        ++index;
    }

    
    return 0;
}