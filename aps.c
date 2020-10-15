#include <stdio.h>
#include <string.h>
float func_1(int *arr, int size)
{
    int i;
    float sum = 0;
    for (i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum / size;
}

void print(int *arr, int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return;
}

void print_str(char *arr, int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("%c", arr[i]);
    }
    printf("\n");
    return;
}

void func_2(int *arr1, int *arr2, int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        arr2[i] = arr1[i];
    }
    return;
}

int func_3(char str[])
{
    int size = 0;
    while (1)
    {
        if (*(str + size) == '\0')
        {
            break;
        }
        size++;
    }
    return size;
}

int main()
{
    int arr[5];
    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;
    arr[3] = 4;
    arr[4] = 5;
    int arr2[5];
    arr2[0] = 10;
    arr2[1] = 20;
    arr2[2] = 30;
    arr2[3] = 40;
    arr2[4] = 50;

    char s[256] = "Monkey";
    char *p = "Oranges";
    printf("Hello %c\n", p[1]);
    printf("%f\n", func_1(arr, 5));
    print(arr, 5);
    print(arr2, 5);
    func_2(arr, arr2, 5);
    print(arr2, 5);
    printf("%d\n", func_3(s));

    // testing out string methods

    // testing out strcnpy instead of strcpy becausse im getting illegal hardware error
    char test[6];
    // copying contents of p to test
    strncpy(test, "MONKEY", sizeof(test));
    // printing result
    print_str(test, sizeof(test));

    // testing out strcat
    char some_string[100] = "MY NAME IS MICHAEL ";
    strcat(some_string, "NATH");

    // result should be MY NAME IS MICHAEL NATH
    print_str(some_string, func_3(some_string));

    // trying out strcmp
    // should return -1
    printf("%d\n", strcmp("Mike", "Nath"));

    // testing what character represents 84
    printf("%c\n", 84);
    char sys[] = "sysTemsT";
    // testing out strchr
    // should return 3
    printf("%lu\n", strchr(sys, 84) - sys);
}