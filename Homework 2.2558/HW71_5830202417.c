#include <stdio.h>
 main(){
	int i, j, c, n, num[30];
	printf("Enter the value of N :: ");scanf("%d", &n);
    for (i = 0; i < n; ++i){
		printf("N%d :: ",i+1);scanf("%d", &num[i]);
	}
    for (i = 0; i < n; ++i){
        for (j = i + 1; j < n; ++j){
            	if (num[i] < num[j]){
                c =  num[i];
                num[i] = num[j];
                num[j] = c;
            }
        }
    }
    for (i = 0; i < n; ++i){
		printf("%3d", num[i]);
    }
}
