/*************************************************************************
	> File Name: TwoSum.java
	> Author: horace
	> Mail: horaceh@QQ.com 
 ************************************************************************/

import java.util.*;

public class TwoSum {
  public static void main(String args[]) throws Exception {
    Scanner input = new Scanner(System.in);
    int n = input.nextInt();
    int[] number = new int[n];
    int temp;
    for (int i = 0; i < n; i++) {
      temp = input.nextInt();
      number[i] = temp;
    }
    int target = input.nextInt();
    int[] index = twoSum(number, target);
    System.out.println(index[0]+","+index[1]);
  }
  public static int[] twoSum(int[] numbers, int target) {
    int[] index = new int[2];
    Hashtable<Integer, Integer> nums = new Hashtable<Integer,Integer>();
    int n = numbers.length;
    for (int i = 0; i < n; i++) {
      Integer temp = nums.get(numbers[i]);
      if (temp == null) {
        nums.put(numbers[i], i);
      }
      temp = nums.get(target-numbers[i]);
      if (temp != null && temp < i) {
          index[0] = temp + 1;
          index[1] = i + 1;
          return index;
      }
    }
    return index;
  }
}
