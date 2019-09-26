x=''.join(format(ord(i),'b') for i in input("Enter Data String : "))
k = int(input("Enter value of K : "))
if len(x) % k != 0:
    for i in range(k - (len(x) % k)):
        x='0'+x
inp=[(x[i:i+k]) for i in range(0,len(x),k)]
sum = "0"
for i in range(len(inp)):
    sum = str(bin(int(sum,2) + int(inp[i],2)))
    while len(sum[2:])>k:
        sum = str(bin(int(sum[:-k],2) + int('1b'+sum[-k:],2)))
sum = ''.join(str(abs(int(i)-1)) for i in sum[2:])
inp.append(sum)
print("CheckSum :",sum)
print("Data to send :"," ".join(i for i in inp))
print("CheckSum :",sum[:-2])
print("CheckSum :",sum[-2:])