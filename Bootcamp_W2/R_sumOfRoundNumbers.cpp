#include<bits/stdc++.h>
using namespace std;
int arr[5]={1,10,100,1000,10000};
void RoundNumber(int n){
int num=n, k=0, i=0;
while(num){
		if(num%10) k++;
			num/=10;
		}
		printf("%d\n", k);
				while(n){
		if(n%10){
				printf("%d ", (n%10)*arr[i]);
			}
			n/=10;
			i++;
	}
		printf("\n");
	}
	int main(){
		int t,n;
		scanf("%d", &t);
		while(t--){
			scanf("%d", &n);
					RoundNumber(n);
		}
		return 0;
	}
