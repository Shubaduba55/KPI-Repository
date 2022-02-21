n=int(input("Enter quantity of prime numbers (n>=1)")) #Запит на кількість простих чисел
num_now=1
if n==1:
    print("Prime number is 2")
    kilk=1
else:
    print("Prime number is 2") #Виводимо число 2 та 3 - перші прості числа
    print("Prime number is 3")
    kilk=2

while kilk<n:#Перевіряємо, чи є кількість виведених простих чисел меншою за задане
    num_now+=2
    dil=3
    kilk1=kilk#Записуємо останнє значення кількості виведених простих чисел в kilk1
    Bool=True
    while Bool and kilk==kilk1: #Перевіряємо значення булеовї змінної та чи не змінилася кількість виведених простих чисел
        if num_now/dil == num_now//dil:#Перевіряємо, чи ділиться число націло. Якщо так, то виходимо з циклу
            Bool=False
        elif num_now/dil<dil:
            print("Prime number is", num_now)
            kilk+=1 #Виводимо просте число та збільшуємо кількість виведнеих чисел на 1
        else:
            dil+=2 #збільшуємо значення числа для перевірки ділення на 2
