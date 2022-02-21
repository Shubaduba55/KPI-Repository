def CreateLine():
    line=str(input("Enter some words: "))
    print("Your line is: ", line)
    return line
 
def SplitWords(line:str, A):
    word=""
    counter=0
    for i in range(len(line)):
        if line[i]!=" ":
            word+=line[i]
        
        if line[i]==" " or (i+1)==len(line):
            A.append(word)
            counter+=1
            word=""

def CoutArray(A):
    for i in A:
        print(i, end=" ")

def Sort(A):
    for i in range(len(A)):
        for j in range(len(A)-1):
           if A[j]>A[j+1]:
               A[j],A[j+1]=A[j+1],A[j]



line=CreateLine()
A=[]
SplitWords(line, A)
CoutArray(A)
Sort(A)
print("\n")
CoutArray(A)