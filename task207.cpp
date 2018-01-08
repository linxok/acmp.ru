#include <stdio.h>
using namespace std;
int main()
{
    int n, vec, leng;
    double const KOOF = 0.707106781187;
    double x=0.0, y=0.0;

    scanf("%d", &n);
    for (int i =0; i <n; i++)
    {
        scanf("%d%d", &vec, &leng);
        switch (vec)
        {
            case 1: y += leng; break;
            case 2: y += leng * KOOF; x += leng * KOOF; break;
            case 3: x += leng; break;
            case 4: y -= leng * KOOF; x += leng * KOOF; break;
            case 5: y -= leng; break;
            case 6: y -= leng * KOOF; x -= leng * KOOF; break;
            case 7: x -= leng; break;
            case 8: y += leng * KOOF; x -= leng * KOOF; break;
        }
    }
    printf("%0.3f %0.3f", x, y);
    return 0;
}
