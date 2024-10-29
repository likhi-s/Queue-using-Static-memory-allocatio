#include <stdio.h>

int main() {
    int option, input;
    int arr[3]; // Queue size of 2
    int n = 3;
    int rear = -1;
    int front = -1;

    while (1)
    {
        printf("Enter the option (1: Enqueue, 2: Dequeue, 3: Display, 4: Exit):\n");
        scanf("%d", &option);

        if (option == 1) // Insertion
        {
            if (rear < n - 1)
            {
                printf("Input Value to enqueue: ");
                scanf("%d", &input);
                rear++;
                if (front == -1)
                {
                    front = 0;
                }
                arr[rear] = input;
                printf("Input %d is Enqueued\n", input);
            } else
            {
                printf("Queue is Overflow\n");
            }
        }
        else if (option == 2) // Deletion
        {
            if (front != -1 && front <= rear)
            {
                input = arr[front];
                front++;
                printf("Input %d is Dequeued\n", input);
                if (front > rear)
                {
                    front = rear = -1;
                }
            } else
            {
                printf("Queue is Overflow\n");
            }
        }
        else if (option == 3)// Display Queue
        {
            if (front != -1 && front <= rear)
            {
                printf("Displaying Queue Content:\n");
                for (int i = front; i <= rear; i++)
                {
                    printf("%d ", arr[i]);
                    printf("\n");
                }
            } else
            {
                printf("Queue is Underflow\n");
            }
        }
        else if (option == 4)
        {
            printf("Exit\n");
            break;
        }
        else
        {
            printf("Invalid Option... Enter a valid option between 1-4\n");
        }
    }

    return 0;
}
