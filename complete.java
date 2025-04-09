import java.util.ArrayList;
import java.util.Collection;
import java.util.Collections;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

public class complete {

    public int countCompleteComponents(int n, int[][] edges) {
    List <Integer>[] gragh=new ArrayList[n];
    Map<List<Integer>,Integer> freq =new HashMap<>();
    for(int v=0;v<n;v++){
        gragh[v]=new ArrayList<>();
        gragh[v].add(v);
    }
    for(int[] edge:edges){
        gragh[edge[0]].add(edge[1]);
        gragh[edge[1]].add(edge[0]);

    }
    for(int v=0;v<n;v++){
        List <Integer> neighbors=gragh[v];
        Collections.sort(neighbors);
        freq.put(neighbors,freq.getOrDefault(neighbors, 0)+1);


    }
    int complete=0;
    for(Map.Entry<List<Integer>,Integer>entry:freq.entrySet()){
    if(entry.getKey().size()==entry.getValue()){
        complete++;
    }
    }
     return complete;
    }

}
