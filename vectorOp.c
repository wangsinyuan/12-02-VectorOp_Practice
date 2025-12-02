#include"vectorOp.h"
#include<stdio.h>

int* vADD(int *A,int *B,int size)
{
    int *c=malloc(size*sizeof(int));

    int i=0;
    for(i=0;i<size;i++)
    {
        c[i]=A[i]+B[i];
    }
    return c;
}