#include<Stdio.h>
#include<stdlib.h>
main(){
	int n,i;
	printf("Enter the number of elements in array");
	scanf("%d",&n);
	int *p;
	for(i=0;i<n;i++){
		scanf("%d",(p+i));
	}
	
	for(i=1;i<n-1;i++){
		int value=*(p+i);
		int hole=i;
		while(hole>0 && *(p-1)<value){
			*(p+hole)=*(p+hole-1);
			hole--;
		}
		*(p+hole)=value;
	}
	for(i=0;i<n;i++){
		printf("%d\t",*(p+i));
	}
}
