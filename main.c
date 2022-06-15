#include <stdio.h>
#include "Stack.h"
int main()
{
    Stack *stack = createStack(10);
    stack->push(stack, 10);
    stack->push(stack, 20);
    printf("%d \n", stack->pop(stack));
    stack->push(stack, 30);
    stack->push(stack, 40);
    printf("%d \n", stack->pop(stack));
    stack->print(stack);
}
