#include <iostream>
using namespace std;
#include "sort.h"
#include 	<stdlib.h>
int main()
{
	int a[] = { 9,8,7,6,5,4,3,2,1 };
	int n = sizeof(a)/sizeof(a[0]);

	MergeSort(a, 0, n-1);     
    Print(a, n);
	return 0;
}