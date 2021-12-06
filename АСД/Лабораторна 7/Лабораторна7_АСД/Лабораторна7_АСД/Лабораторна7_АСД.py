import string 
def CreateArray(b:int, k:int, start:int):
    A=[]
    for i in range(start, start+10):
        A.append(chr(b+k*i))
    return A


def ArraySame(A, B):
    C=[]
    for i in A:
        for j in B:
            if i==j:
                C.append(i)
    while len(C)<10:
        C.append(chr(0))
    return C

def FindDiv(C):
   
    count=0
    for i in range (len(C)-1):
        if ord(C[i])/3==ord(C[i])//3:
            
            count+=1
    return count

A=CreateArray(44, 2, 5)
B=CreateArray(55, -1, -5)
C=ArraySame(A, B)
print(*A, sep=' ')
print(*B, sep=' ')
print(*C, sep=' ')
count=FindDiv(C)
print("The quantity of such nubers is", count)


