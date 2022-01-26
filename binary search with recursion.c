#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//protototype
int ceil2(int *arr, int st, int en, int target);



int main(void)
{
	int n;
	scanf("%d", &n);
	
	int *vals;
	vals = (int *)calloc(n, sizeof(int));
	int i;
	for (i=0; i<n;i++) scanf("%d", &vals[i]);
	
	int m;
	int target;
	int ans;
	scanf("%d", &m);
	for(i=0; i<m; i++)
	{
		scanf("%d", &target);
		ans = ceil2(vals, 0, n, target);
		if (ans == n) printf("Does not Exist\n");
		else printf("%d\n", vals[ans]);
}
	return EXIT_SUCCESS;
}

int ceil2(int *arr, int st, int en, int target)
{
	if (st == en) return st;
	int mid = (st+en)/2;
	if (arr[mid]<target) return ceil2(arr, mid+1,en,target);
	return ceil2(arr,0, mid, target);
}
