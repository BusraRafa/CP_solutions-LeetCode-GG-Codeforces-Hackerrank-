class Solution {
public:
    int hIndex(vector<int>& citations) {
        sort(citations.begin(),citations.end());
        // compute h-index as follows: First order the values of f from the largest-->lowest value. Then, look for the last position in which f is greater than or equal to the position (we call h this position).  
        //For example, if researcher with 5 publications A, B, C, D, E with 10, 8, 5, 4, 3 citations,  the h-index is equal to 4 cause 4th publication(4<=4) has 4 citations and the 5th(5<=3 nt true) has only 3.
        //In contrast, if the same publications have 25, 8, 5, 3, 3 citations, then the index is 3 (i.e. the 3rd position) cause the 4th paper has only 3 citations
        for(int i=0;i<citations.size();i++){
            if(citations.size()-i<=citations[i]){
                return citations.size()-i;
            }
        }
        return 0;
    }
};
