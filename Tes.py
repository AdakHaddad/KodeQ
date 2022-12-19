y = []
x= ''
read = False
dataNum= 0
data = input("input data:")

for i in data:
    if(i=='*'):
        read = True
    elif(i=='#' and read == True):
        read = False
    
        y.append(x)
        x = ''
    elif(read == True):
        x += i
for x in y:
    dataNum += 1
    print("data",dataNum,":",x)
