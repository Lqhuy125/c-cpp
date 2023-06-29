#include <stdio.h>

int ngaytrongthang(int m, int y)
{
    switch (m)
    {
        case 1: case 3: case 5: case 7: case 8: case 10:  case 12:
            return 31;
        case 4: case 6: case 9: case 11: 
            return 30;
        case 2:
            if (y % 4 == 0 && y % 100 != 0)
            {
                return 29;
            } else return 28;
    }
}

int ngaytrongnam(int d, int m, int y)
{
    int ngaytrongnam = 0;
    for ( int i = 1; i < m ; i++)
    {
        ngaytrongnam = ngaytrongnam + ngaytrongthang(i,y);
    }
    ngaytrongnam = ngaytrongnam + d;
    return ngaytrongnam;
}
void ngaytruocdo(int d, int m, int y)
{
    if (d == 1)
    {
        if (m == 1)
        {
            d = 31;
            m = 12;
            y--;
        } else 
        {
            m--;
            d = ngaytrongthang(m, y);
        }
    }else 
    {
        d--;
    }
    
}
void ngaysaudo(int d, int m, int y)
{   
    if (d == ngaytrongthang(m, y) )
    {
        if (m == 12)
        {
            d = 1;
            m = 1;
            y++;
        }else
        {
            d = 1;
            m++;
        }
    }else 
    {
        d++;
    }
    
int main()
{
    int d,m,y;
    do
    {
        scanf("%d%d%d", &d,&m,&y);
    } while (d < 1 || d > 31 || m > 12 || m < 1 || y < 0);
    printf("Ngay trong thang = %d ", ngaytrongthang(m,y) );

    printf("\nNgay trong nam = %d", ngaytrongnam(d,m,y) );

    printf("\nNgay sau do = %d/%d/%d",d,m,y);
    ngaysaudo(d, m, y);
    
    printf("\nNgay truoc do = %d/%d/%d",d,m,y);
    ngaytruocdo(d, m, y);
}
