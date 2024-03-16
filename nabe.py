num = 1
while num <= 1000:
    temp = num
    check3 = 0 #判別
    
    
    while temp > 0:

        if temp % 10 == 3: #下一桁が3
            check3 = 1
            
            #print(num)
            break
        temp //= 10
    
    if num % 3 == 0 or check3:
        print(num, "!!!!!!!!!!!")
    else:
        print(num)
    num += 1
