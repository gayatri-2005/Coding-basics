def fact(n):
   if (n==0):
      return 1  
   factNm1=fact(n-1)
   factN=factNm1*n
   return factN



a =int ( input ("Enter a number:"))
print(fact(a))
