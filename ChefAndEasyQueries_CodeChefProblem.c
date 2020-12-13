/*
https://www.codechef.com/problems/CHEFEZQ

Chef and Easy Queries Problem Code: CHEFEZQ

Chef published a blog post, and is now receiving many queries about it. On day i, he receives Qi queries. But Chef can answer at most k queries in a single day.
Chef always answers the maximum number of questions that he can on any given day (note however that this cannot be more than k). The remaining questions (if any) will be carried over to the next day.
Fortunately, after n days, the queries have stopped. Chef would like to know the first day during which he has some free time, i.e. the first day when he answered less than k questions.

Input:
First line will contain T, the number of testcases. Then the testcases follow.
The first line of each testcase contains two space separated integers n and k.
The second line of each testcase contains n space separated integers, namely Q1,Q2,...Qn.

Output:
For each testcase, output in a single line the first day during which chef answers less than k questions.

Constraints
1≤T≤105
1≤ sum of n over all testcases ≤105
1≤k≤108
0≤Qi≤108
Subtasks
Subtask 1 - 20% points - Sum of Qi over all testcases and days ≤3.106
Subtask 2 - 80% points - Original constraints


Sample Input:
2 
6 5 
10 5 5 3 2 1 
1 1
100


Sample Output:
6
101

*/


#include <stdio.h>

int days(int inque, int resque);

int main(void) {
    
    int T, N, K;
    //printf("Hi");
	scanf("%d",&T);
	//printf("\nT==%d", T);
	for(int i=0; i<T;i++)
	{
	    scanf("%d %d",&N, &K);
	    days(N, K);
	}
	
	/*(int i=0; i<T;i++)
	{
	    //printf("\nN==%d, K==%d",N, K);
	    //days(N, K);
	}*/
	return 0;
}

int days(int inque, int resque)
{
    int temp,sum=0,num_days=0;
    int que_arr[inque];
    
    //printf("\ninside days function\n");
    for(int i=0; i<inque; i++)
    {
        scanf("%d",&temp);
        que_arr[i]= temp;
    }
    
    /*for(int j=0; j<inque; j++)
    {
        printf("%d ",que_arr[j]);
    }*/
    
    /*for(int k=0; k<inque; k++)
    {
        sum=sum+que_arr[k];
        if(sum>=0)
        {
            num_days++;
            sum= sum-resque;
            printf("\nday=%d,sum=%d",num_days,sum);
        }
        else
        {
            break;
        }
    }*/
    
    for(int k=0; k<inque;k++)
    {
        sum=sum+que_arr[k];
    }
    
    while(sum>=0)
    {
        num_days++;
        sum=sum-resque;
    }
    printf("%d\n",num_days);
    
}

