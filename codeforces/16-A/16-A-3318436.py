row,coul=raw_input().split(" ")
row=int(row)
coul=int(coul)
test=True
count1=0
count2=0
while (count1<row):
    rowx=(raw_input())
    rowe=rowx[0]
    count2=0
    while (count2<coul):
        
        if(rowe!=rowx[count2]):
            test=False
            break
        if(count1 > 0):
            
            if(rowx[count2]==rowp):
                test=False
                
        count2+=1        
    rowp=rowe
    count1 +=1
    
if test:
    print ("YES")
    
else:
    print("NO")