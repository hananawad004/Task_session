import java.util.HashMap;

public class abc {

public class Solution {
    public int numberOfSubstrings(String s) {
        HashMap<Character, Integer> count = new HashMap<>();
        count.put('a', 0);
        count.put('b', 0);
        count.put('c', 0);
        
        int left = 0, result = 0;
        
        for (int right = 0; right < s.length(); right++) {//abcaa
            count.put(s.charAt(right), count.get(s.charAt(right)) + 1);

            // التحقق من أن النافذة تحتوي على جميع الأحرف 'a', 'b', 'c'
            while (count.get('a') > 0 && count.get('b') > 0 && count.get('c') > 0) {
                result += s.length() - right; // جميع السلاسل الفرعية الممكنة
                count.put(s.charAt(left), count.get(s.charAt(left)) - 1);
                left++; // تحريك المؤشر الأيسر لتقليل النافذة
            }
        }
        
        return result;
    }

}

}
