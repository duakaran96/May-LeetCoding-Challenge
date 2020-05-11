class Solution {
public:
    bool isPerfectSquare(int num) {
        if (num == 1)
            return true;
        for (long long int i = 1; (long long int)(i * i) <= num; i++)
            if ( (num % i == 0) and (num / i == i)) 
                return true;
        return false;
    }
};
