class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        unsigned int result = 0;
        
        for (int i = 0; i < 32; i++)
        {
            result = result | (n & 1);                    
            if(i == 31)
                break;       
            n = n >> 1;       
            result = result << 1;
        }
        
        return result;
    }
};
