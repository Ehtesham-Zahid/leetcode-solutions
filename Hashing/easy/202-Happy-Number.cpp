class Solution {
public:
    bool isHappy(int n) {
        int lastNumber = 0;
        int startNumbers = 0;
        int sum = 0;
        int hashArray[1000] = {0};
        while(true)
        {    
            while(true)
            {
                lastNumber = n % 10;
                startNumbers = n / 10;
                sum = sum + lastNumber * lastNumber;
                n = startNumbers;
                if(n == 0)
                    break;
            }

            if(sum == 1){
                return true;
            } else if(hashArray[sum] > 0){
                return false;
            } else{
                hashArray[sum] += 1;
            }

            n = sum;
            sum = 0;
        }
            
        return true;
        
    }
};