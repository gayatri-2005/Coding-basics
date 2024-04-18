a = str(input("Enter a string:"))
k= int (input("Enter left shift:"))
leftstring =( a[k: ]+ a[ :k]  )         
# left shift means making the string move towards left