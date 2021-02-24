using System;

namespace laba1s
{
    class Program
    {
        static void Increase(ref int c)        //функция увеличения на 1
        {
            int mask = 1;
            while ((int)(c & mask)!=0)     //убираем крайние единицы справа
            {
                c = c ^ mask;
                mask <<= 1;
            }
            c = c ^ mask;
        }
        public static void Comparison(int a, int b)          //функция сравнения чисел
        {
            int mask = 1;
            bool equal = false;
            for (int i = 31; i>=0 ; i--)
            {
                if ((i==31)&& ((a & (mask << i)) > (b & (mask << i))))   //если число отрицательное
                    break;
                else if ((a & (mask << i)) > (b &( mask << i)))    //если а больше b
                {
                    equal = true;
                    break;
                }
                else if ((a & (mask<< i)) < (b & (mask<<i)))      //если b больше а
                {
                    break;
                }
            }
            if (equal)       //если а больше b
            {
                Console.WriteLine("Number a>b");
            }
            else
            {
                Console.WriteLine("Number a is not more than b");
            }        
        }
        static void Main(string[] args)
        {
            int a, b,c;
            string str1, str2,str3;
            Console.WriteLine("Input a first number a: ");
            str1 = Console.ReadLine();
            a = Convert.ToInt32(str1);
            Console.WriteLine("Input a second number b: ");
            str2 = Console.ReadLine();
            b = Convert.ToInt32(str2);
            Console.WriteLine("Input a number c, which will increase by one: ");
            str3 = Console.ReadLine();
            c = Convert.ToInt32(str3);
            Comparison(a, b);               //сравнение двух чисел
            Increase(ref c);            //увеличение на единицу
            Console.WriteLine($"After adding ont to the variable c= {c}");          
            Console.ReadLine();
        }
    }
}
