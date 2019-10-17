#include<bits/stdc++.h>
#include<string.h>
using namespace std;
struct Stack
{
    int top;
    unsigned capacity;
    int *array;
};
struct Stack* createStack(unsigned capacity)
{
    struct Stack* stack = (struct Stack*) malloc(sizeof(struct Stack));
    stack->top = -1;
    stack->capacity = capacity;
    stack->array = (int*) malloc(stack->capacity * sizeof(int));
    return stack;
}
int isEmpty(struct Stack* stack)
{
    return stack->top == -1 ;
}
char peek(struct Stack* stack)
{
    return stack->array[stack->top];
}
int pop(struct Stack* stack)
{
    if (!isEmpty(stack))
        return stack->array[stack->top--] ;
    return 0;
}
void push(struct Stack* stack,int op)
{
    stack->array[++stack->top] = op;
}

int main()
{
    int n,i,t;
    cout<<"Enter number of element:";
    cin>>n;
    struct Stack* stack = createStack(n);
    cout<<"Enter stack element!";
    for(i=0;i<n;i++)
      {
          cin>>t;
          push(stack,t);
      }
    cout<<"stack element!";
    for(i=0;i<n;i++)
      {
          cout<<pop(stack)<<" ";
      }
    return 0;
}
