<<<<<<< HEAD
#include <math.h>
#include <stdio.h>
float distance(int x1, int y1, int x2, int y2)
{
    return sqrt(pow(x2 - x1, 2)
                + pow(y2 - y1, 2) * 1.0);
}
int main()
{
    printf("%.2f", distance(3, 4, 4, 3));
    return 0;
}
=======
#include <math.h>
#include <stdio.h>
float distance(int x1, int y1, int x2, int y2)
{
    return sqrt(pow(x2 - x1, 2)
                + pow(y2 - y1, 2) * 1.0);
}
int main()
{
    printf("%.2f", distance(3, 4, 4, 3));
    return 0;
}
>>>>>>> c07c5f8b49b7057119b4e967413527f400cb56cf
