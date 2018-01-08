import array 
k,n=map(int, input().split()) 
d=[] 
x=n*2 
while x>0: 
 d.append(0) 
 x-=1 
d[0]=1 
for i in range(0,n): 
 for j in range (1,k+1): 
  d[i+j]+=d[i] 
  print(d[n])
