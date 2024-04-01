class Solution {
    public int lengthOfLastWord(String s) {
        String arr[] = s.split(" ");
        int n=arr.length;
         return arr[n-1].length();
        // for(int i=arr.length-1;i>=0;i--){
        //     if(!arr[i].isEmpty()){
        //         return arr[i].length();
        //     }
        // }

       
    }
}
