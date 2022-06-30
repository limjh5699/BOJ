using System;

namespace _1152___Number_of_Word
{
    class Program
    {
        static void Main(string[] args)
        {
            string input = Console.ReadLine();

            int count = 1;
            for(int i = 0; i < input.Length; i++)
            {
                if(input[i] == ' ') count++;
            }

            if(input[0] == ' ') count--;
            if(input[input.Length - 1] == ' ') count--;

            System.Console.WriteLine(count);
        }
    }
}
