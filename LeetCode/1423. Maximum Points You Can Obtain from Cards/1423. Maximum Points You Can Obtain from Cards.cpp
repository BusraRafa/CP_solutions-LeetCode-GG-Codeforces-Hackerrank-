class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int lsum=0,rsum=0,msum=0;
        for(int i=0;i<k;i++){
            lsum=lsum+cardPoints[i];
        }
        msum=lsum;
        for(int i=0;i<k;i++){
            lsum=lsum-cardPoints[k-i-1];
            rsum=rsum+cardPoints[cardPoints.size()-1-i];
            msum=max(msum,lsum+rsum);
        }
        return msum;
    }
};
