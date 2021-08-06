#include <stdio.h>

void selection(int array[], int i, int j, int size, int flag)
{
    int temp;
    if (i < size - 1)
    {
        if (flag)
        {
            j = i + 1;
        }
        if (j < size)
        {
            if (array[i] > array[j])
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
            selection(array, i, j + 1, size, 0);
        }
        selection(array, i + 1, 0, size, 1);
    }
}


int main()
{
    int size;

    printf("Enter the size of the Array: ");

    scanf("%d", &size);

    int array[size];

    printf("Enter the elements:\n");

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }

    selection(array, 0, 0, size, 1);

    printf("The sorted Array: \n");

    for (int i = 0; i < size; i++)

    {
        printf("%d  ", array[i]);
    }

    return 0;

}

 
