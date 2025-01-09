#include <bits/stdc++.h>

using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    
    vector<int> candles(N);
    for (int i = 0; i < N; i++) {
        cin >> candles[i];
    }
    
    int minTime = INT_MAX;
    
    // Sliding window to find the minimum time to light K candles
    for (int i = 0; i <= N - K; i++) {
        int left = candles[i];
        int right = candles[i + K - 1];
        
        // Calculate the time to light K candles starting from the left
        int time1 = abs(left) + (right - left);
        // Calculate the time to light K candles starting from the right
        int time2 = abs(right) + (right - left);
        
        minTime = min(minTime, min(time1, time2));
    }
    
    cout << minTime << endl;
    
    return 0;
}
