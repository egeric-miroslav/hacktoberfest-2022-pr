static int Factorial(int N) => N == 0 ? 1 : N * Factorial(N-1);

for (int i = 0; i < 10; ++i) System.Console.WriteLine($"Factorial of number {i} is {Factorial(i)}");