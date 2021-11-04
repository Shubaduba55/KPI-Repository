from math import sin, radians, degrees  


def max_triangle(n:int, max_square=0, index=0):
    if n==0:
        print("Трикутник під номером", n_global+1-index, "має максимальну площу", max_square)
        print(fire)
        return 
    
    side_a=float(input("Enter length of side_a "))
    side_b=float(input("Enter length of side_b "))
    angle=float(input("Enter angle "))
    
    square=0.5*side_a*side_b*sin(radians(angle))
    
    if square>max_square:
        max_square=square
        index=n
    return max_triangle(n-1, max_square, index)

n=int(input("Enter number of triangles"))
n_global=n
fire="Neon Genesis Evangleion"
max_triangle(n)