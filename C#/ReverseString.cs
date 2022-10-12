using System; 

public class Program 
{
    static void Swap(char []a, int index1, int index2) 
    {  
        char temp = a[index1];  
        a[index1] = a[index2];  
        a[index2] = temp;  
    }  
  
    static void Reverse(char[] str) 
    {  
        int n = str.Length, i;  

        for (i = 0; i < n / 2; i++) 
              Swap(str, i, n - i - 1);  
    }  
  
    public static void Main() 
    {  
        string input = "This is string";

        Reverse(input.ToCharArray());  
        Console.WriteLine("Reversed string is " + string.Join("", input));  
    }  
}  