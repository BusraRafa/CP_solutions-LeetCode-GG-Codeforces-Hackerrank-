#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t; 
    while (t--) {
        int n, flag = 0;
        cin >> n;
        vector<vector<int>> arr(n, vector<int>(n));
        for (int i = 0; i < n; i++) {
            string row;
            cin >> row;
            for (int j = 0; j < n; j++) {
                arr[i][j] = row[j] - '0';
            }
        }
        // chk X
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n / 2; j++) {
                if(arr[i][j]!=arr[i][n-j-1]){
					flag=-1;
					break;
				}
            }
        }
        // for Y
        if (flag != -1) {
            for (int i = 0; i < n / 2; i++) {
                for (int j = 0; j < n; j++) {
                    if(arr[i][j]!=arr[n-i-1][j]){
					flag=-1;
					break;
				}   
                }
               
            }
			
        }
        if (flag == 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
}
