#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_SIZE 2

typedef struct _perceptron_t
{
    int x[MAX_SIZE];
    int wight[MAX_SIZE];
    int bias;
}pct_t;

pct_t *init_pct(pct_t *pct);
pct_t *set_param(pct_t *pct, int wight, int bias);

int and_gate(data_t *data);
int nand_gate(data_t *data);
int or_gate(data_t *data);

pct_t pct[1];
int main()
{
    int input[MAX_SIZE];
    init_pct(pct[0]);
    and_gate
    return 0;
}

pct_t *init_pct(pct_t *pct)
{
    int i =0;
    for(i=0; i<MAX_SIZE; i++)
    {
	pct->wight[i] = 0;
    }
    pct->bias = 0;
    return pct;
}

pct_t *set_param(pct_t *pct, int wight, int bias)
{
    int i=0;

    for( i =0; i<MAX_SIZE; i++)
    {
	pct->wight[i] = wight;
    }
    pct->bias = bias;

    return pct;
}

int and_gate(int *input, pct_t *pct, int wight, int bias)
{
    int i=0;
    int y=0;
    set_param(pct, wight, bias);
    for(i=0; i<MAX_SIZE; i++)
    {
	y += data->x[i]*pct->wight[i];
    }
}
