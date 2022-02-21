import random
import math
def CreateArray(n):
   
    A=[]
    for i in range(n):
        A.append(random.randint(0, 10**3))
    return A

def BubbleSort(A, n):
    count=0
    for j in range(n):
        for i in range(n-1):
            if A[i]>A[i+1]:
                tmp=A[i+1]
                A[i+1]=A[i]
                A[i]=tmp
                count+=1
    return count

def CombSort(A, n):
    count=0
    df=(1/(1-math.exp(-1.618033)))
    step=round(n/df)
    
    while step!=2:
        for i in range(n-step):
            if A[i]>A[i+step]:
               
               tmp=A[i+step]
               A[i+step]=A[i]
               A[i]=tmp
               count+=1
        step=round(step/df)
    else:
        check=True
        while(check):
            check=False
            for i in range(n-1):
                if A[i]>A[i+1]:
                    tmp=A[i+1]
                    A[i+1]=A[i]
                    A[i]=tmp
                    
                    count+=1
                    check=True
    return count


n=int(input("Enter size of array: "))
A=CreateArray(n)
B=A
print(*A)

count=BubbleSort(A, n)
print("CountBubble= ", count, "\n\n")
print(*A)

count=CombSort(B, n)
print("CountComb= ", count, "\n\n")

print(*A)