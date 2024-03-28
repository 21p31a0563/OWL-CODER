import java.util.HashMap;

class Solution {
    public int countDistinctIntegers(int[] nums) {
        HashMap<Integer, Integer> map = new HashMap<>();
        
        // Insert original integers and their reversed counterparts into the map
        for (int num : nums) {
            map.put(num, 1);
            int reversed = 0;
            int temp = num;
            while (temp > 0) {
                int rem = temp % 10;
                reversed = reversed * 10 + rem;
                temp /= 10;
            }
            map.put(reversed, 1);
        }
        
        return map.size(); // Return the size of the map, which contains distinct integers
    }
}
