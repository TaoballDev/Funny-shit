using System;
using System.IO;

class Program
{
    static void Main()
    {
        ProcessNotepads();
    }

    static void ProcessNotepads()
    {
        for (int i = 1; i <= 9; ++i)
        {
            string fileName = $"file{i}.txt";
            Console.WriteLine($"Processing {fileName}...");
            string content = File.ReadAllText(fileName);
            Console.WriteLine($"Content: {content}");
        }
    }
}
