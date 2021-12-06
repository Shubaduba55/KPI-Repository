from math import sin, pi #імпортуємо з бібліотеки функцію сінус та константу ПІ


def deg_to_rad(angle): #Функція, що переводить градуси в радіани
    angle=angle*(pi/180)
    return angle

def max_triangle(n:int, number, max_square=0, index=0): #Функція для обрахунку площі заданих трикутників та пошуку найбільшої серед них
    if n==0:#Крайній випадок: обраховано n площ трикутників
        print("Трикутник під номером", number+1-index, "має максимальну площу", max_square)
        return 
    
    #Запитуємо довжини сторін трикутника та значення кута між ними
    side_a=float(input("Enter length of side_a "))
    side_b=float(input("Enter length of side_b "))
    angle=float(input("Enter angle "))
    #обчислюємо площу трикутника
    square=0.5*side_a*side_b*sin(deg_to_rad(angle))
    
    if square>max_square:#Перевіряємо, чи поточна максимальна площа менша за площу тільки-но знайденого трикунтика
        max_square=square#Якщо так, то записуємо нове значення максимальної площі
        index=n#Запам'ятовуємо номер трикутника з максимальною площею
    max_triangle(n-1, number, max_square, index)#Викликаємо цю ж функцію, в яку записуємо нові дані

n=int(input("Enter number of triangles "))#Запитуємо в користувача кількість трикутників
max_triangle(n, n)#Викликаємо функцію для пошуку найбільшої площі трикутника