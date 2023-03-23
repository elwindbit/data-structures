// WAP to implement the following operations on a one dimensional array
// 1. Insertion
// 2. Deletion
// 3. Traversal
// 4. Reverse
// 5. Merge

#include <stdio.h>

int length;

char displayMenu();
void printArray(int *array);
void insertIntoArray(int *array, int, int);
void deleteFromArray(int *array, int);
void mergeArrays();

void main()
{
    char option = ' ';
    printf("Enter length of array: ");
    scanf("%d", &length);
    int array[length * 2];
    int element;
    for (int i = 0; i < length; i++)
    {
        printf("Enter element %d > ", i + 1);
        scanf("%d", &array[i]);
    }
    while (option != 'q')
    {
        option = displayMenu();
        int num, index;

        if (option == 'q')
        {
            break;
        }
        else if (option == 'i')
        {
            printf("Enter a number to insert: ");
            scanf("%d", &num);
            printf("Enter index number: ");
            scanf("%d", &index);
            insertIntoArray(array, num, index);
            printArray(array);
        }
        else if (option == 'd')
        {
            printf("Enter index of element to delete: ");
            scanf("%d", &index);
            deleteFromArray(array, index);
            printArray(array);
        }
        else if (option == 't')
        {
            printArray(array);
        }
    }
}

char displayMenu()
{
    char opt;
    printf("\nSelect an option:\n");
    printf("[i]nsertion\n");
    printf("[d]eletion\n");
    printf("[t]raversal\n");
    printf("[r]everse\n");
    printf("[m]erge\n");
    printf("[q]uit\n");
    printf("> ");
    scanf("%c", &opt);
    return opt;
}

void printArray(int *array)
{
    for (int i = 0; i < length; i++)
    {
        printf("%d | ", array[i]);
    }
    printf("\n");
}

void insertIntoArray(int *array, int element, int index)
{
    int temp = array[length - 1];
    for (int i = index; i < length; i++)
    {
        if (i + 1 < length)
        {
            array[i + 1] = array[i];
        }
    }

    array[index] = element;
    length++;
    array[length - 1] = temp;
}

void deleteFromArray(int *array, int index)
{
    for (int i = index + 1; i < length; i++)
    {
        array[i - 1] = array[i];
    }
    length--;
}

void mergeArrays() {};