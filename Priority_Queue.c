#include <stdio.h>
#define SIZE 5

int main()
{
    int queue[SIZE];
    int priority[SIZE];
    int n = 0;
    int i, j, temp;

    // Insert 10 with priority 2
    queue[n] = 10;
    priority[n] = 2;
    n++;

    // Insert 20 with priority 1
    queue[n] = 20;
    priority[n] = 1;
    n++;

    // Insert 30 with priority 3
    queue[n] = 30;
    priority[n] = 3;
    n++;

    // Sort according to priority
    for(i = 0; i < n; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(priority[i] > priority[j])
            {
                temp = priority[i];
                priority[i] = priority[j];
                priority[j] = temp;

                temp = queue[i];
                queue[i] = queue[j];
                queue[j] = temp;
            }
        }
    }

    // Delete highest priority element
    for(i = 0; i < n - 1; i++)
    {
        queue[i] = queue[i + 1];
        priority[i] = priority[i + 1];
    }
    n--;

    // Display remaining elements
    printf("Priority Queue:\n");

    for(i = 0; i < n; i++)
    {
        printf("Element: %d Priority: %d\n",
               queue[i], priority[i]);
    }

    return 0;
}
