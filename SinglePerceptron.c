#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_SIZE 2
#define X_AXIS MAX_SIZE*10
#define Y_AXIS MAX_SIZE*10
typedef struct _perceptron_t
{
    int x[MAX_SIZE];
    double wight[MAX_SIZE];
    double bias;
}pct_t;

pct_t *init_pct(pct_t *pct);
pct_t *set_param(pct_t *pct, double wight, double bias);

int gate(pct_t *pct, double wight, double bias);

pct_t pct[1];
int main()
{
    int ret, ret1, ret2;
    init_pct(pct);
    while(1)
    {
    ret = gate(pct, 0.5,-0.7);
    ret1 = gate(pct, -0.5,0.7);
    ret2 = gate(pct, 0.6,-0.5);
    printf("and gate :: %d :::  nand gate %d :: or gate%d\n",ret, ret1,ret2);

    sleep(1);
    }
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

pct_t *set_param(pct_t *pct, double wight, double bias)
{
    int i=0;
    int num;

    srand((unsigned int)time(NULL));
    printf("input data ");

    for( i =0; i<MAX_SIZE; i++)
    {
	pct->wight[i] = wight;
	pct->x[i] = (int)rand()%10;
	printf("%d",pct->x[i]);
   
    }
    printf("\n");
    printf("Complete Setting param \n");
    pct->bias = bias;
    return pct;
}

int gate(pct_t *pct, double wight, double bias)
{
    int i=0;
    float y=0;
    int result = -1;
    set_param(pct, wight, bias);
    for(i=0; i<MAX_SIZE; i++)
    {
	y += (float)pct->x[i]*pct->wight[i];
    }
    y += (float)pct->bias;
    if( y <= 0)
	return 0;
    else
	return 1;
}

