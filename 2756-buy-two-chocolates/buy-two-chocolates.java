class Solution {
    public int buyChoco(int[] prices, int money) {
        Arrays.sort(prices);
        int k=money;
        for(int i=0;i<prices.length;i++)
        {
            if(prices[0]+prices[1]<=money){
                 k=money-(prices[0]+prices[1]);
            }
            else{
                k=k;
            }
           
        }
        return k;
    }
}