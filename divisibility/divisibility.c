#include <stdio.h>

int main(){
	int N = 0;
	scanf("%d", &N);
	
	long data[N];
	for(auto i=0; i<N; i++)
	    scanf("%ld", &data[i]);
	

	if(data[N-1]%10 == 0){
		printf("Yes");
	}
	else{
		printf("No");
	}
    
    return 0;
}