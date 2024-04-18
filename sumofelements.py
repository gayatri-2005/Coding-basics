a=list(map(int(input("Enter list:")).split()))
sum=0
b=len(a)
for i in range(b+1):
    sum+=a[i]
print(sum)