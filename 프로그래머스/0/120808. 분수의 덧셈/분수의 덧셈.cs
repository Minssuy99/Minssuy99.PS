using System;

public class Solution
{
    public int[] solution(int numer1, int denom1, int numer2, int denom2)
    {
        int gcd = 0;
        int number = 0;
        
        int denom = denom1 * denom2;
        int numer = (numer1 * denom2) + (numer2 * denom1);

        number = denom;
        
        for(int i=1; i<=number; i++)
        {
            if (denom % i == 0 && numer % i == 0)
                gcd = i;
        }
        
        
        int denomResult = denom / gcd;
        int numerResult = numer / gcd;
        
        int[] result = { numerResult, denomResult }; 
        
        return result;
        
    }
}
