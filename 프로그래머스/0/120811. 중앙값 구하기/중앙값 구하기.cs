using System;

public class Solution {
    public int solution(int[] array)
    {
        if(array.Length % 2 != 0) 
        {
            Array.Sort(array);
        }
        
        int answer = array[array.Length/2];
        return answer;
    }
}