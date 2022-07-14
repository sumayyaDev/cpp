#include<stdio.h>
#include<algorithm>
#include<stdlib.h>
#include<iostream>
void sortArray();
using namespace std;

int arr[10000];
int index;

int main(){
    int x, position, median;
    index=0;
    while(scanf("%d", &x)==1){
        if(x==0) break;

        median=0;
        index+=1;
        arr[index]=x;
        sortArray();
        if(index%2==0){
            position=index/2;
            median = (arr[position]+arr[position+1])/2;
        }
        else{
            position = (index+1)/2;
            median = arr[position];
        }
        printf("%d\n", median);

    }


  return 0;
}

void sortArray()
{
    int temp, i;
    if(index<2) return;
    for(i=2; i<=index; i++){

        while(arr[i]<arr[i-1]){
            temp=arr[i-1];
            arr[i-1]=arr[i];
            arr[i]=temp;
            i--;
        }
    }

}

