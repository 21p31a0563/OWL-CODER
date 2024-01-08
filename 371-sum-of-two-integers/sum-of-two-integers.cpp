class Solution {
public:
        int getSum(int a, int b) {
    while (b != 0) {
        int carry = (a & b) << 1;  // Calculate the carry
        a = a ^ b;                 // Sum without considering carry
        b = carry;                 // Set b to the carry for the next iteration
    }
    return a;
}
};

