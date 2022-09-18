// depth first search

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 5

int stack[SIZE];
int top = -1;

int graph[SIZE][SIZE];
int visited[SIZE];
int cost = 0;
int visitCount = 0;

void addEdge(int src, int dest, int cost)
{ // 0,3 => 1 3,0 => 1
    graph[src][dest] = cost;
    graph[dest][src] = cost;
}

void push()
{
    int num;
    if (top == SIZE - 1)
    {
        printf("\nStack Overflow");
    }
    else
    {
        printf("\nEnter number");
        scanf("%d", &num);
        top++;
        stack[top] = num;
    }
}
void pop()
{
    int num;
    if (top == -1)
    {
        printf("\nStack Underflow");
    }
    else
    {
        num = stack[top];
        top--;
        printf("\n%d POP", num);
    }
}

int main()
{

    int visited[SIZE];
    int count = 0;
    printf("%d ", 0);
    visited[0] = 1;
    count++;
    int i = 0;
    int flag = 0;
    while (count != SIZE)
    {
        flag = 0;
        for (int j = 0; j <= SIZE; j++)
        {
            if (graph[i][j] == 1 && visited[j] == 0)
            {
                printf("%d ", j);
                visited[j] = 1;
                push(i);
                i = j;
                count++;
                flag = 1;
                break;
            }
        }
        if (flag == 0){
            i = pop();
        }
            
    }

    return 0;
}