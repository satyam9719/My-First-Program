#include <stdio.h>
#define SIZE 5

int main()
{
    int queue[SIZE];
    int front = 0, rear = -1;
    int i;

    queue[++rear] = 10;
    queue[++rear] = 20;
    queue[++rear] = 30;

    front++;
    front++;

    queue[++rear] = 40;

    printf("Remaining Queue: ");

    for(i = front; i <= rear; i++)
    {
        printf("%d ", queue[i]);
    }

    return 0;
}
