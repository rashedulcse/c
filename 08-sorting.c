//array number sorting
#include <stdio.h>
int main()
{
    int a[7] = {8, 1, 3, 6, 9, 5, 0};
    int i, j, temp;
    //calculation
    for(j = 0; j < 7; ++j) {
        for(i = 0; i < 7; ++i) {
            if (a[i] > a[i + 1]) {
                temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
            }
        }
    }
    //print the value
    for (i = 0; i < 7; ++i) {
        printf("%d ", a[i]);
    }
}
