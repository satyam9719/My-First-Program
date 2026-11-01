#include <stdio.h>
#define SIZE 5

int main()
{
    int queue[SIZE];
    int front = -1, rear = -1;
    int i;

    // Insert 10, 20, 30, 40
    queue[++rear] = 10;
    front = 0;
    queue[++rear] = 20;
    queue[++rear] = 30;
    queue[++rear] = 40;

    // Delete two elements
    front++;
    front++;

    // Insert 50
    rear = (rear + 1) % SIZE;
    queue[rear] = 50;

    // Insert 60
    rear = (rear + 1) % SIZE;
    queue[rear] = 60;

    // Display Circular Queue
    printf("Circular Queue: ");

    i = front;
    while(1)
    {
        printf("%d ", queue[i]);

        if(i == rear)
            break;

        i = (i + 1) % SIZE;
    }

    return 0;
}
