class Solution {
public:
    int reverse(int x) { 
        
        int result = 0;
        int temp = x; 
        
        while (temp != 0)
        {
            if((result <= INT_MAX / 10) && (result >= INT_MIN / 10))
            {
               result = (result * 10) + (temp % 10);  
               temp = temp / 10; 
            }
            else
                return 0;           
        }
        
        return result;
    }
};
