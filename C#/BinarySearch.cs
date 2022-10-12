using System; 

public class Program
{
    static int binarySearch(int[] arr, int e, int min, int max) 
    { 
        if (max >= min)
        {
            int mid = (min + max) / 2;
            arr[mid] > e ? binarySearch(arr, e, min, mid - 1) : arr[mid] < e ? binarySearch(arr, e, mid + 1, max) : mid;
        }        
        return -1;
    } 
    
    public static void Main()
    {  
        int[] arr = {1, 2, 5, 8, 9, 10, 25, 36};
        
        int e = 5;
        int search = binarySearch(arr, e, 0, arr.Length-1);

        if (search >= 0)
            Console.WriteLine($"Element {e} is found on position {search}");  
        else
            Console.WriteLine($"Element {e} doesn't exist in array");
    }  
}  