#include <stdio.h>
#define SIZE 5

int main()
{
    int deque[SIZE];
    int front = -1, rear = -1;
    int i;

    // Insert 10 from Front
    front = rear = 0;
    deque[front] = 10;

    // Insert 20 from Rear
    rear++;
    deque[rear] = 20;

    // Insert 30 from Front
    front = (front - 1 + SIZE) % SIZE;
    deque[front] = 30;

    // Delete one element from Front
    front = (front + 1) % SIZE;

    // Delete one element from Rear
    rear--;

    // Display remaining elements
    printf("Remaining Deque: ");

    i = front;
    while(1)
    {
        printf("%d ", deque[i]);

        if(i == rear)
            break;

        i = (i + 1) % SIZE;
    }

    return 0;
}
