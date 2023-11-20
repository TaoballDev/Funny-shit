using System;

namespace BobV3
{
    class Program
    {
        static void Main(string[] args)
        {
            Calculator calculator = new Calculator();

            Console.Write("Enter the first number: ");
            if (int.TryParse(Console.ReadLine(), out int num1))
            {
                Console.Write("Enter the second number: ");
                if (int.TryParse(Console.ReadLine(), out int num2))
                {
                    int result = calculator.Add(num1, num2);
                    Console.WriteLine($"The sum of {num1} and {num2} is: {result}");
                }
                else
                {
                    Console.WriteLine("Invalid input for the second number.");
                }
            }
            else
            {
                Console.WriteLine("Invalid input for the first number.");
            }
        }
    }
}
