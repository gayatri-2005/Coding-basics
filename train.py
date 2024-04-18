a = str(input("Enter onetime journey or monthly pass:"))
b = str(input("sleeper or 3AC or 2AC or 1AC :"))
cost=int
if(a=="onetime journey" and b=="sleeper" ):
    cost=250
    print(cost)
elif(a=="onetime journey" and b=="3AC" ):
    cost=300
    print(cost)    
elif(a=="onetime journey" and b=="2AC" ):
    cost=400
    print(cost)
elif(a=="onetime journey" and b=="1AC"):
    cost=500
    print(cost)
elif(a=="monthly pass" and b=="sleeper"):
    cost = (250 *30)*0.2
    print(cost)    
elif(a=="monthly pass" and b=="3AC"):
    cost=(300*30)*0.2
    print(cost)    
elif(a=="monthly pass" and b=="2AC"):
    cost=(400*30)*0.2
    print(cost)    
elif(a=="monthly pass" and b=="1AC"):
    cost=(500*30)*0.2
    print(cost)        