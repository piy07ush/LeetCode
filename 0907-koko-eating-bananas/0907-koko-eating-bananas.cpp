
class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int start = 1;
        int end = *max_element(piles.begin(),piles.end());
        while(start<=end){
            int mid = (start+end)/2;
            long long int hrs = 0;
            for(int i =0;i<piles.size();i++){
           double temp= (double)piles[i]/(double)(mid);
            hrs+= ceil(temp);
            }
            if(hrs<=h){
                end=mid-1;
            }
            else {
                start = mid+1;
            }
        }
        return start;
    }
};