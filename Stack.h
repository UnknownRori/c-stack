#ifndef STACK_H
#define STACK_H

typedef struct Stack Stack;

struct Stack
{
    int *data;
    int size;
    int pointer;

    /**
     * @brief Push the value into stack
     *
     * @param stack
     * @param value
     */
    void (*push)(Stack *stack, int value);

    /**
     * @brief Pop the current value in the pointer
     *
     * @param stack
     * @return int
     */
    int (*pop)(Stack *stack);

    /**
     * @brief Check if stack is empty
     *
     * @param stack
     * @return int
     */
    int (*isEmpty)(Stack *stack);

    /**
     * @brief Print the stack
     *
     * @param stack
     */
    void (*print)(Stack *stack);
};

Stack *createStack(int size);

#endif