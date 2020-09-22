#include <stdio.h>
#include <stdlib.h>
void testDup(){
int n, a[100], b[100], count = 0, c, d;

  printf("Enter size of array\n");
  scanf("%d", &n);

  printf("Enter %d elements\n", n);

  for (c = 0; c < n; c++)
    scanf("%d", &a[c]);

  for (c = 0; c < n; c++)
  {
    for (d = 0; d < count; d++)
    {
      if(a[c] == b[d])
        break;
    }
    if (d == count)
    {
      b[count] = a[c];
      count++;
    }
  }
  printf("New Array removing duplicate elements:\n");
  for (c = 0; c < count; c++)
    printf("%d\t", b[c]);}
int main()
{
    testDup();
    return 0;
}
