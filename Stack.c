#include <stdlib.h>
#include <stdio.h>
#include "Stack.h"

#define False 0;
#define True 1;

/**
 * @brief Push the value into stack
 *
 * @param stack
 * @param value
 */
void push(Stack *stack, int value)
{
    if (stack->pointer >= stack->size)
        exit(0);

    stack->data[stack->pointer] = value;
    stack->pointer++;
}

/**
 * @brief Pop the current value in the pointer
 *
 * @param stack
 * @return int
 */
int pop(Stack *stack)
{
    if (stack->pointer >= stack->size)
        exit(0);

    stack->pointer--;

    int temp = stack->data[stack->pointer];

    stack->data[stack->pointer] = -1;

    return temp;
}

/**
 * @brief Print the stack
 *
 * @param stack
 */
void print(Stack *stack)
{
    for (int i = 0; i < stack->pointer; i++)
    {
        if (i >= stack->pointer - 1)
            printf("%d", stack->data[i]);
        else
            printf("%d, ", stack->data[i]);
    }
    printf("\n");
}

/**
 * @brief Check if stack is empty
 *
 * @param stack
 * @return int
 */
int isEmpty(Stack *stack)
{
    if (stack->pointer <= 0)
        return True;
    return False;
}

Stack *createStack(int size)
{
    Stack *stack;
    stack = malloc(sizeof(Stack));
    stack->size = size;
    stack->data = malloc(sizeof(int) * size);
    stack->pointer = 0;
    stack->push = &push;
    stack->pop = &pop;
    stack->print = &print;
    stack->isEmpty = &isEmpty;

    return stack;
}