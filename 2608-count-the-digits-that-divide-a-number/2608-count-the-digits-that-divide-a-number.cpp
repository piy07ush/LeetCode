class Solution {
public:
    int countDigits(int num) {
        int count=0;
        int x =num;
        while(x>0){
            int rem = x%10;
            if(num%rem==0)count++;
            x = x/10;
        }
        return count;
    }
};