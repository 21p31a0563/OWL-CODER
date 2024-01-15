class Solution {
    public List<List<Integer>> findWinners(int[][] matches) {
        HashMap<Integer,Integer>winner=new HashMap<>();
        HashMap<Integer,Integer>looser=new HashMap<>();
        for(int []match:matches){
            winner.put(match[0],winner.getOrDefault(match[0],0)+1);
            looser.put(match[1],looser.getOrDefault(match[1],0)+1);

        }
        ArrayList<Integer>notLost=new ArrayList<>();
        ArrayList<Integer>lost1=new ArrayList<>();
        for(int playerId:winner.keySet())
        {
            if(!looser.containsKey(playerId)){
                notLost.add(playerId);
            }
        }
        for(int playerId:looser.keySet()){
            if(looser.get(playerId)==1){
                lost1.add(playerId);
            }
        }
        Collections.sort(lost1);
        Collections.sort(notLost);
        ArrayList<List<Integer>>ans=new ArrayList<>();
        ans.add(notLost);
        ans.add(lost1);
        return ans;
    }
}