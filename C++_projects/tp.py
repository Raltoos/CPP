
a = [1,1,0,1]
bin_q = [1,0,1,1]

q1 = 0

last = a[-1]
print(last)
for i in range(len(a)):
        print('i of the for loop : ' , i)
        if (i == 0):
            temp = a[i]
        if  (i > 0):
            sec = a[i]
            a[i] = temp
            temp = sec
        print(a[i])
    
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

print(a , bin_q, q1)