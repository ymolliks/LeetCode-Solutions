class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry = 1;
        for(int i = digits.size() -1; i >= 0; i--){
            int d = carry + digits[i]; 
            digits[i] = d%10;
            carry = d/10;
        }
        
        if(carry)
            digits.insert(digits.begin(), carry);
        return digits;
    }
};