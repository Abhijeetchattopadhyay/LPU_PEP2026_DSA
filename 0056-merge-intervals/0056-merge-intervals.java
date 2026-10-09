class Solution {
    public int[][] merge(int[][] intervals) {
        Arrays.sort(intervals,(a,b)->Integer.compare(a[0],b[0]));
        ArrayList<int[]>result = new ArrayList<>();
        for(int i=0;i<intervals.length;i++){
            int start=intervals[i][0];
            int end= intervals[i][1];

            if(result.isEmpty() || result.get(result.size()-1)[1]<start){
                result.add(new int[]{start,end});
            }else{
                result.get(result.size()-1)[1]=Math.max(result.get(result.size()-1)[1],end);
            }
        }

        return result.toArray(new int[result.size()][]);
    }
}