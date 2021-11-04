n=int(input("Enter quantity of prime numbers (n>=1)"))
num_now=2
kilk=1
print("Prime number is 2")
while kilk<n:
    num_now+=1
    dil=2
    while num_now/dil != num_now//dil and num_now != dil:
        dil+=1
    if num_now==dil:
        kilk+=1
        print("The prime number is", num_now)

