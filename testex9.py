n=int(input("Introdueix mida dessitjada: "))
nx=1
t=0
ny=n

while t < n:
    print(ny*" ",nx*"*")
    nx+=2
    ny-=1
    t+=1