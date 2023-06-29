/*
 Cho một số nguyên  n hãy viết một hàm đệ quy để trả về tổng của tất cả các số lẻ từ  1 đến n.

Ví dụ:
 nếu bạn nhập n = 5, chương trình sẽ tạo ra  9 trên màn hình bởi
  vì  1 + 3 + 5 = 9.
*/
#include <stdio.h>
int dem(int n)
{
    if (n == 1) 
    {
        return 1;
    }
    if (n % 2 == 0)
    {
        return dem(n-1);
    } else 
    {
        return n + dem(n-1);
    }
}
int main ()
{
    int n;
    scanf("%d", &n);
    printf("Tong cac so le tu 1 den n la: %d", dem(n));
}