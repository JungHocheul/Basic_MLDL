#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_SIZE 2
#define X_AXIS MAX_SIZE*10
#define Y_AXIS MAX_SZIE*10
typedef struct _perceptron_t
{
    int x[MAX_SIZE];
    int wight[MAX_SIZE];
    int bias;
}pct_t;

pct_t *init_pct(pct_t *pct);
pct_t *set_param(pct_t *pct, int wight, int bias);

int gate(pct_t *pct, int wight, int bias);

pct_t pct[1];
int main()
{
    init_pct(pct[0]);
    printf("%d",and_gate(pct[0],0.5,-0.7));
     
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
    int num;

    srand((unsigned int)time(NULL));
    printf("input data ");

    for( i =0; i<MAX_SIZE; i++)
    {
	pct->wight[i] = wight;
	pct->x[i]= (int)rand()%10;
	printf("%d",pcb->x[i]);
   
    }
    printf("\n");
    pct->bias = bias;
    return pct;
}

int gate(pct_t *pct, int wight, int bias)
{
    int i=0;
    int y=0;
    int result = -1;
    set_param(pct, wight, bias);
    for(i=0; i<MAX_SIZE; i++)
    {
	y += pct->x[i]*pct->wight[i];
    }
    y += pct->bias;
    if( y <= 0)
	return 0;
    else
	return 1;
}

int show_graph(pct, int wight, int bias)
{
    char x_axis[X_AXIS];
    char y_axis[Y_AXIS];

    return 0;
}
