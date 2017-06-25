t = int(input())
while(t>0):
	
	a,b,n = input().split()
	a = int(a)
	b = int(b)
	n = int(n)
 
	if (n%2)==0:
		a*=(1<<int(n/2))
		b*=(1<<int(n/2))
	else:
		a*=(1<<(1+int(n/2)))
		b*=(1<<int(n/2))
 
	if a>b:
		print(a//b)
	else:
		print(b//a)
 
	t-=1
 