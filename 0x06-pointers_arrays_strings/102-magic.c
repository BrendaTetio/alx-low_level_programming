#include <stdio.h>

int main(void)
{
    int a[] = {98, 1988, 402, -1988, 298, -1024, 483, -98};
    int *p;

    p = (int *)(a + 1) - 1;

    /* Add your code below this line */
    printf("a[2] = %d\n", *(p + 1));
    
    return (0);
}

