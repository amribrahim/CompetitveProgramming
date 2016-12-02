x=raw_input()
pss=x.split("C")
css=x.split("P")
co=pss.count('')
while co:
    pss.remove('')
    co-=1
co=css.count('')
while co:
    css.remove('')
    co-=1
total=len(css)+len(pss)    
for m in css:
    length=len(m)
     
    if length>5:
        if length%5==0:
            
            total+=length/5 - 1
        else:
            
            total+=length/5
for m in pss:
    length=len(m)
    
    if length>5:
        if length%5==0:
            
            total+=length/5 - 1
        else:
            
            total+=length/5    

print total