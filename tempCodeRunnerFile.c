#include <stdio.h>
int main ()
{
    int arreglo[5]={2,4,6,8,10};
    int *ptr;
    ptr = &arreglo[0];
     printf("%p\n",ptr);
    //impresion de arreglo con punteros
    for (int i=0; i<5 ;i++)
    {
        printf("arreglo[%d]=%d ",i, arreglo[i]);
         //ptr = &arreglo[i];
        printf("%d ", *(ptr+i));
    }
    return 0;
}