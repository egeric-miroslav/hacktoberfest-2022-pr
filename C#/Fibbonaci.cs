int fibbonaci(int n)
{
    if (n <= 1) { return(n); }
    return (fibbonaci(x - 1) + fibbonaci(n - 2));
}

public static void Main()
{
    int x;
    
    Console.WriteLine("Enter the number of terms of series : ");
    x = int.Parse(Console.ReadLine());

    for (int i = 0; i < x; ++ i)
        Console.WriteLine($" { fibbonaci(i)}");
}