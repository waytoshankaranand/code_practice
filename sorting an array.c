//Sorting an array and returning by pointer
#include <stdio.h>

int showarr(int *, int *);



int main(void) {
	// your code goes here
	
	int arr[100], i, size;
	scanf("%d", &size);
	//printf("hi1\n");
	
	for(i=0;i<5;i++)
	{
	    scanf("%d",&(arr[i]));
	}
	
	/*for(i=0; i<5;i++)
    {
        printf("%d ", *(arr+i));
    }*/
	
	showarr(arr, &size);
	sort(arr, &size);
	showarr(arr, &size);
	//int *arr1, int s
	//printf("hi\n");
	return 0;
}

int sort(int *arr1, int *s)
{
    int i, j, temp;
    
    for(i=0; i<(*s)-1; i++)
    {
        for(j=0; j<(*s)-1;j++)
        {
            if( (*(arr1+j)) > (*(arr1+j+1)))
            {
                temp = (*(arr1+j));
                (*(arr1+j)) = (*(arr1+j+1));
                (*(arr1+j+1)) = temp;
            }
        }
    }
}


void sort1(int arr[], int n)
    {
        for(int i=0;i<n-1;i++)
        {
            for(int j=0;j<n-1;j++)
            {
                if(arr[j]>arr[j+1])
                {
                    int temp;
                    temp= arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }
            }
        }
    }



int showarr(int *arr1, int *s)
{
    int i;
   // printf("s= %d\n",*s );
    for(i=0; i<*s;i++)
    {
        printf("%d ", *(arr1+i));
    }
    printf("\n");
    return 0;
}

