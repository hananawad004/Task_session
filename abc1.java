import java.util.HashMap;

public class abc1 {
    public int numberOfSubstrings(String s) {
    HashMap<Character,Integer> hanan =new HashMap<>();
    hanan.put('a', 0);
    hanan.put('b', 0);
    hanan.put('c', 0);
     
    int left=0, result=0;
    for(int right=0;right<s.length();right++){//abcabd
     hanan.put(s.charAt(right),hanan.get(s.charAt(right))+1);


     while(hanan.get('a')>0&&hanan.get('b')>0&&hanan.get('c')>0){

        result+=s.length()-right;
       
        hanan.put(s.charAt(left),s.charAt(left)-1);
        left++;
        }




        return 0;
    
}
    }

