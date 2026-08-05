import java.util.*;
class Solution {
    public String[] sortPeople(String[] names, int[] heights) {
        int n=heights.length;
        ArrayList<Map.Entry<String,Integer>>list=new ArrayList<>();
        for(int i=0;i<n;i++){
            list.add(new AbstractMap.SimpleEntry<>(names[i],heights[i]));
        }

        list.sort((a,b)->{
           return b.getValue()-a.getValue();
        });
        
        String[] vec = new String[list.size()];

        for(int i=0;i<list.size();i++){
            vec[i]= list.get(i).getKey();
        }
        return vec;
    }
}