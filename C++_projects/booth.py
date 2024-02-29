def toBinary(a: int, count: int):
    bin = []
    for i in range(count):
        r = int(a % 2)
        bin.append(r)
        a /= 2

    bin.reverse()
    return bin

def toDecimal(lst):
    ans = 0
    lst.reverse()
    for i in range(len(lst)):
        ans += ((2**i)*lst[i])

    return ans

def binAddition(lst1, lst2):
    carry = 0
    sum = 0

    res = []
    lst1.reverse()
    lst2.reverse()
    for i in range(len(lst1)):
        if(lst1[i] == 0 and lst2[i] == 0):
            sum = carry
            carry = 0
        elif((lst1[i] == 1 and lst2[i] == 0) or (lst1[i] == 0 and lst2[i] == 1)):
            if(carry == 1):
                sum = 0
            elif(carry == 0):
                sum = 1
        elif((lst1[i] == 1 and lst2[i] == 1) and carry == 0):
            sum = 0
            carry = 1
        elif((lst1[i] == 1 and lst2[i] == 1) and carry == 1):
            sum = 1
            carry = 1
        
        res.append(sum)
    
    res.reverse()
    return res

def binNegative(lst):
    
    lst2 = []
    for i in range(len(lst)):
        if(lst[i] == 1):
            lst[i] = 0
        else: 
            lst[i] = 1
        lst2.append(0)
    
    lst2[-1] = 1
    return binAddition(lst,lst2)

def rightShift(arr):
    for i in range(len(arr)-1,0,-1):
        arr[i]=arr[i-1]        
    return arr

m = int(input("Enter the multiplier :"))
q = int(input("Enter the multiplicand : "))

temp = 1
count1 = 0
while(m > temp):
    count1 += 1
    temp *= 2

temp = 1
count2 = 0
while(q > temp):
    count2 += 1
    temp *= 2

res = count1 + count2

bin_m = toBinary(m, res)
bin_q = toBinary(q, res)

#Initialising the stuff
a = []
for i in bin_q:
    a.append(0)

q1 = 0
count = len(a)

#The calculations
while(count>0):
    if(bin_q[-1] == 1 and q1 == 0):
        a = binAddition(a,binNegative(bin_m))
    elif(bin_q[-1] == 0 and q1 == 1):
        a = binAddition(a,bin_m)

    #right shifting part
    last = a[-1]
    for i in range(len(a)):
        if (i == 0):
            temp = a[i]
        if  (i > 0):
            sec = a[i]
            a[i] = temp
            temp = sec
    
    last2 = bin_q[-1]
    for i in range(len(bin_q)):
        if (i == 0):
            temp = bin_q[i]
            bin_q[i] = last
        if (i > 0):
            sec = bin_q[i]
            bin_q[i] = temp
            temp = sec
    
    q1 = last2



    print(''.join(map(str,a)) + '  ' + ''.join(map(str,bin_q)) + '  ' + str(q1))

    count -= 1

a.extend(bin_q)
ans = toDecimal(a)
print('---------------------------------------------')
print('The result of the multiplication is as follows : ')
print(''.join(map(str,a)))
print(ans)