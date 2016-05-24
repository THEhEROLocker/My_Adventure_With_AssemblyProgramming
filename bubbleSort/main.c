#include<stdio.h>

int sort(int* array,int len);
void display_all(int* array, int len);

int main()
{
    int * array = NULL;
    int reply = 0;

    int count = 0;

    do{


        ++count;
        printf("Do you want to add another number?  1(NO)  0(Yea)");

    }while(reply == 0);
    display_all(array,10);

    sort(array,10);

    display_all(array, 10);


return 0;
}

void display_all(int* array, int len)
{
    int i = 0;
    for(i = 0; i < len; ++i)
        printf("Index %d: %d\n",i,array[i]);

    printf("\n");
}
