using System;
using System.IO;

class Program
{
    static void Main()
    {
        for (int i = 1; i <= 9; ++i)
        {
            using (StreamWriter file = new StreamWriter($"file{i}.txt"))
            {
                file.Write("bob");
                Console.WriteLine($"Created file{i}.txt");
            }
        }
    }
}
