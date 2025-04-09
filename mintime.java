import java.util.Arrays;

public class mintime {
    class Solution {
        public long repairCars(int[] ranks, int cars) {
            // تحديد الحد الأدنى والحد الأقصى للوقت
            Arrays.sort(ranks);
            long left = 1;
            // استخدام أقل قيمة في ranks لتحديد الحد الأقصى للوقت
            long right = (long) Arrays.stream(ranks).min().getAsInt() * cars * cars;

            // تنفيذ البحث الثنائي
            while (left < right) {
                long mid = left + (right - left) / 2;  // حساب منتصف الوقت
                if (canRepairAll(ranks, cars, mid)) {
                    right = mid;  // إذا كان الوقت كافيًا، نحاول تقليل الوقت
                } else {
                    left = mid + 1;  // إذا لم يكن الوقت كافيًا، نزيد الوقت
                }
            }

            return left;  // إرجاع الوقت الذي يتطلب إصلاح جميع السيارات
        }

        // دالة للتحقق إذا كان يمكن إصلاح جميع السيارات في الوقت المحدد
        private boolean canRepairAll(int[] ranks, int cars, long time) {
            long totalCarsRepaired = 0;
            for (int rank : ranks) {
                totalCarsRepaired += Math.sqrt(time / rank);  // حساب عدد السيارات التي يمكن إصلاحها
                if (totalCarsRepaired >= cars) {
                    return true;  // إذا تم إصلاح جميع السيارات، نرجع true
                }
            }
            return false;  // إذا لم يتم إصلاح العدد الكافي من السيارات
        }
    }
}
