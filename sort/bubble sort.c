#include<stdio.h>
int main()
{

    int array[23] = {1, 4, 3, 2, 5, 6, 7, 9, 8, 0, 11, 32, 54, 76, 98, 87, 45, 43, 40, 23, 27, 67, 63};

    int i, j, temp;


    printf("given list: ");
    for(i = 0; i < 23; i++)
        printf("%d\t", array[i]);
    printf("\n");



    for(i = 0; i < 23 - 1; i++) {
        for(j = i + 1; j < 23; j++) {
            if(array[i] > array[j]) {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }



    printf("sorted list\n");
    for(i = 0; i < 23; i++)
        printf("%d\t", array[i]);
    printf("\n");

    return 0;

}
