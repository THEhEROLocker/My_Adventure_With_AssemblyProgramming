#include<stdio.h>
#include<malloc.h>

#define IGNORE while((getchar() != '\n') && !feof(stdin))

int sort(int* array,int len);
void display_all(int* array, int len);
void insert(int **array, int len, int shit);


int main()
{
    int * array = NULL;

    char reply= '\0';
    int number = 0;
    int count = 0;

    do{

        printf("Enter number: ");
        scanf("%d", &number);
        IGNORE;

        insert(&array, count, number);

        ++count;
        printf("Do you want to add another number? y/n: ");
        scanf("%c",&reply);
        IGNORE;

        printf("\n");
    }while(reply == 'y');

    display_all(array,count);

    sort(array,count);

    display_all(array, count);


return 0;
}

void insert(int **array, int len, int shit)
{
    int * temp = (int*) malloc(sizeof(int)*(len+1));
    int i = 0;

    for(i = 0; i < len; ++i)
        temp[i] = (*array)[i];

    temp[len] = shit;

    free(*array);
    *array = temp;
}

void display_all(int* array, int len)
{
    int i = 0;
    for(i = 0; i < len; ++i)
        printf("Index %d: %d\n",i,array[i]);

    printf("\n");
}
