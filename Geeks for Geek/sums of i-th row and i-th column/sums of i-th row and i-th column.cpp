//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int sumOfRowCol(int N, int M, vector<vector<int>> A) {
     int limit= min(N,M);
      int rsum=0,csum=0;
          for(int i=0;i<limit;i++){
              
              for(int j=0;j<M;j++){
                  rsum=A[i][j]+rsum;
                 
              }
              for(int j=0;j<N;j++){
                  csum=A[j][i]+csum;
              }
              if(rsum!=csum){
                  return 0;
                }
      }
      return 1;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M;
        cin >> N >> M;
        vector<vector<int>> A(N, vector<int>(M));
        for (int i = 0; i < N; i++)
            for (int j = 0; j < M; j++) cin >> A[i][j];
        Solution ob;
        cout << ob.sumOfRowCol(N, M, A) << "\n";
    
cout << "~" << "\n";
}
}
// } Driver Code Ends
