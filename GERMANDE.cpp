#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int getMid(int s, int e) {  return s + (e -s)/2;  }
 
int getSumUtil(int *st, int ss, int se, int qs, int qe, int si)
{
    if (qs <= ss && qe >= se)
        return st[si];
    if (se < qs || ss > qe)
        return 0;
 
    int mid = getMid(ss, se);
    return getSumUtil(st, ss, mid, qs, qe, 2*si+1) +
           getSumUtil(st, mid+1, se, qs, qe, 2*si+2);
}
void updateValueUtil(int *st, int ss, int se, int i, int diff, int si)
{
    if (i < ss || i > se)
        return;
    st[si] = st[si] + diff;
    if (se != ss)
    {
        int mid = getMid(ss, se);
        updateValueUtil(st, ss, mid, i, diff, 2*si + 1);
        updateValueUtil(st, mid+1, se, i, diff, 2*si + 2);
    }
}
 
void updateValue(int arr[], int *st, int n, int i, int new_val)
{
    if (i < 0 || i > n-1)
    {
        return;
    }
    int diff = new_val - arr[i];
 
    arr[i] = new_val;
 
    updateValueUtil(st, 0, n-1, i, diff, 0);
}
 
int getSum(int *st, int n, int qs, int qe)
{
    if (qs < 0 || qe > n-1 || qs > qe)
    {
        return -1;
    }
 
    return getSumUtil(st, 0, n-1, qs, qe, 0);
}
 
int constructSTUtil(int arr[], int ss, int se, int *st, int si)
{
    if (ss == se)
    {
        st[si] = arr[ss];
        return arr[ss];
    }
    int mid = getMid(ss, se);
    st[si] =  constructSTUtil(arr, ss, mid, st, si*2+1) +
              constructSTUtil(arr, mid+1, se, st, si*2+2);
    return st[si];
}
 
int *constructST(int arr[], int n)
{
    int x = (int)(ceil(log2(n))); 
 
    int max_size = 2*(int)pow(2, x) - 1; 
 
    int *st = new int[max_size];
 
    constructSTUtil(arr, 0, n-1, st, 0);
 
    return st;
}
 
 
 
int main()
{
	int t,i;
	scanf("%d",&t);
	while(t--)
	{
		int o1,o2;
		scanf("%d %d",&o1,&o2);
		int n=o1*o2;
		int a[n+o2];
		bool possible=false;
		for (i = 0; i < (o1*o2); ++i)
		{
			scanf("%d",(a+i));
		}
		for (i = n; i < (n+o2); ++i)
		{
			a[i]=a[i-n];
		}
		int start;
		int *st = constructST(a, n+o2);
		for(start=0;start<o2;start++)
		{
			int ones=0,zeros=0;
			for (i = 0; i < o1; ++i)
			{
				int ho2=getSum(st, n+o2, start+(i*o2),start+(((i+1)*o2)-1));
				int hz2=o2-ho2;
				if (hz2>ho2)
				{
					zeros++;
				}
				else
				{
					ones++;
				}
			}
			if (ones>zeros)
			{
				possible=true;
				break;
			}
		}
		if (possible)
		{
			printf("1\n");
		}
		else
			printf("0\n");
	}
	return 0;
}