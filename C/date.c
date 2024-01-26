#include <stdio.h>

void main()
{
    int d, r, m, mo, y, y1;
    printf("Enter date: ");
    scanf("%d %d %d", &d, &m, &y);
    if (m == 4 || m == 6 || m == 9 || m == 11)
    {
        if (d - 15 > 0)
        {
            r = (d + 15);
            if (r > 39)
            {
                r = (r % 10) + 10;
            }
            else
                r = (d + 15) % 10;
            mo = m + 1;
        }
        else
        {
            r = d + 15;
            mo = m;
        }
        y1 = y;
    }
    else if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
    {
        if (d - 15 > 0)
        {
            r = (d + 15);
            if (r > 39)
                r = (r % 10) + 10;
            else
                r = (d + 15) % 10;
            mo = m + 1;
        }
        else
        {
            r = d + 15;
            mo = m;
        }
        y1 = y;
    }
    else
    {
        if (y % 4 == 0)
        {
            if (d - 15 > 0)
            {
                r = (d + 15);
                if (r >= 30 && r <= 39)
                {
                    r = (r % 10) + 1;
                    mo = m + 1;
                }
                else
                {
                    r = (r % 10) + 11;
                    mo = m;
                }
            }
        }
        else
        {
            if (d - 15 > 0)
            {
                r = (d + 15);
                if (r > 39)
                {
                    r = (r % 10) + 12;
                }
                else
                {
                    r = (r % 10) + 2;
                }
                mo = m + 1;
            }
            else
            {
                if (d >= 1 && d <= 12)
                {
                    r = (d + 15);
                    mo = m;
                }
                else
                {

                    r = (d + 16) % 10;
                    r = r + 1;
                    mo = m + 1;
                }
            }
        }
        y1 = y;
    }

    if (m == 12)
    {
        if (d - 15 > 0)
        {
            r = (d + 14) % 10;
            mo = 1;
            y1 = y + 1;
        }
        else
        {
            r = (d + 15);
            mo = m;
            y1 = y;
        }
    }

    printf("\nreturning date: %d %d %d", r, mo, y1);
}