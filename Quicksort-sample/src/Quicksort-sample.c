/*
 ============================================================================
 Name        : Quicksort-sample.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void swap(int *ptr1,int *ptr2)
{

	int tmp=*ptr2;

	*ptr2=*ptr1;

	*ptr1=tmp;


}

int partition(int arr[],int low,int high)
{


int pivot =arr[high];

int i=low-1;

for(int j=low;j<high-1;j++)
{

	if(arr[j]<pivot)
	{

		i++;

		swap(&arr[i],&arr[j]);
	}



}


}

int main(void) {


	int arr[]={10,80,30,90,40,50,70};
	int low ,high;

	low=0;
	high=(sizeof(arr)/sizeof(int))-1;




	int pi=partition(arr,low ,high);





	puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */
	return EXIT_SUCCESS;
}
