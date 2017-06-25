#include <bits/stdc++.h>
using namespace std;
 
int maxVal(int x, int y) { return (x > y)? x: y; } 
int getMid(int s, int e) {  return s + (e -s)/2;  }
int RMQUtil(int *st, int ss, int se, int qs, int qe, int index)
{
    if (qs <= ss && qe >= se)
        return st[index];
 
    if (se < qs || ss > qe)
        return INT_MIN;
 
    int mid = getMid(ss, se);
    return maxVal(RMQUtil(st, ss, mid, qs, qe, 2*index+1),
                  RMQUtil(st, mid+1, se, qs, qe, 2*index+2));
}
int RMQ(int *st, int n, int qs, int qe)
{
    return RMQUtil(st, 0, n-1, qs, qe, 0);
}
 
int constructSTUtil(int arr[], int ss, int se, int *st, int si)
{
    if (ss == se)
    {
        st[si] = arr[ss];
        return arr[ss];
    }
 
    int mid = getMid(ss, se);
    st[si] =  maxVal(constructSTUtil(arr, ss, mid, st, si*2+1),
                     constructSTUtil(arr, mid+1, se, st, si*2+2));
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
	int n,k,p;
	cin>>n>>k>>p;
	int a[3*n];
	k=min(n,k);
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	for (int i = 0; i < n; ++i)
	{
		a[n + i] = a[i];
	}
	for (int i = 0; i < n; ++i)
	{
		a[2*n + i] = a[i];
	}
	int sum = 0;
	for (int i = 0; i < k; ++i)
	{
		sum +=a[i];
	}
	std::vector<int> v;
	v.push_back(sum);
	for (int i = 0; i < 3*n-k; ++i)
	{
		if (a[i] == 1)
		{
			sum--;
		}
		if (a[i+k] == 1)
		{
			sum++;
		}
		v.push_back(sum);
	}
	// int arr[2* n - k +1];
	int arr[v.size()];
	for (int i = 0; i < v.size(); ++i)
	{
		arr[i] = v[i];
	}
	int *st = constructST(arr, v.size());
	int off = n;
	while(p--)
	{
		char instruction;
		cin>>instruction;
		if (instruction == '?')
		{
			// printf("%d\n", *max_element(v.begin()+off,v.begin()+1+n-k+off));
			while (off <= 0)
			{
				off+=n;
			}
			printf("%d\n", RMQ(st,v.size(),off,n-k+off));
		}
		else
			off--;
	}
 
	return 0;
}