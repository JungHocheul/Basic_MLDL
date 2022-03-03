#include <stdio.h>

#define MAX_SIZE 2
typedef struct _data_t
{
    int num[MAX_SIZE];
}data_t;

typedef struct _perceptron_t
{
    int wight[MAX_SIZE];
    int bias[MAX_SIZE];
}pct_t;

int and_gate(data_t *data);
int nand_gate(data_t *data);
int or_gate(data_t *data);

int main()
{
    return 0;
}

int and_gate(struct _data *data)
{

}
