#include<stdio.h>
#include<stdlib.h>
#include <algorithm>
#include<iostream>
#include<iomanip>

void InsertionSort();
using namespace std;

long int a[10005];
long int indx;

int main(){
    long int n,i,position,median;
    indx=0;
    while(scanf("%ld",&n)==1)
    {
        if(n==0)
            break;
        median=0;
        printf("indx=%d\n", indx);
        indx=indx+1;
        printf("indx=%d\n", indx);
        a[indx]=n;
         printf("a[%d]=%d\n", indx, a[indx]);
        InsertionSort();
        if(indx%2==0)
        {
            position=indx/2;
            printf("a[position]=%d  a[position+1]=%d   ", a[position], a[position+1]);
            median=(a[position]+a[position+1])/2;
        }
        else
        {
            position=(indx+1)/2;
            median=a[position];
        }
        printf("median=%ld\n",median);
    }

   return 0;
}


void InsertionSort()
{
    int k,ptr,temp,j;
    if(indx<2)
        return;
    for(k=2;k<=indx;k++)
    {
        temp=a[k];
        ptr=k-1;
        while(temp<a[ptr])
        {
            a[ptr+1]=a[ptr];
            ptr=ptr-1;
        }
        a[ptr+1]=temp;
    }
}







