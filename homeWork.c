#include<stdlib.h>
#include<stdio.h>

int main(int argc, char **argv)
{
    int aux = 4;
    int arrInverted[5];
    int arr[] = {1, 2, 3, 4, 5};
    for(int i = 0; i < 5; i++)
    {
      arrInverted[aux] = arr[i];
      aux --;
    }
for(int i = 0; i < 5; i++){
    printf("%d\n", arr[i]);  
}
printf("No invertido\n");
for(int i = 0; i < 5; i++){
   printf("%d\n", arrInverted[i]);
}
printf("Invertido\n");

    return 0;
}