
#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    void rotate(vector<int> &arr){
        long long n = arr.size();
        vector<int> newarr;
        newarr.push_back(arr[n - 1]);
        for (int i = 0; i < n - 1; i++){
            newarr.push_back(arr[i]);
        }
        for (int i = 0; i < n; i++){
            arr[i] = newarr[i];
        }
    }
};

int main(){
    int t;
    cin >> t;
    cin.ignore();
    while (t--){
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number){
            arr.push_back(number);
        }
        Solution ob;
        ob.rotate(arr);
        for (long long i = 0; i < arr.size(); i++){
            cout << arr[i] << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}
