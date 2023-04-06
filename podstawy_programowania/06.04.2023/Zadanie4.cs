class Zadanie4
{
    static void Main(string[] args)
    {
        const int m = 7;
        int[] y = new int[m];

        Console.WriteLine("Tablica Indexowana:\n");

        y[0] = 0;

        for (int i = 0; i < m; i++)
        {
            y[i] = i;
            if (i == 0)
            {
                Console.Write(y[i]);
            }
            else
            {
                if (y[i] % 2 == 0)
                {
                    y[i] = i * i;
                }
                else
                {
                    y[i] = i - 1;
                }
                Console.Write(", " + y[i]);
            }
        }
    }
}
