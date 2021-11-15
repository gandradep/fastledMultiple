import math

sum = 0
NUM_PER_TIRA = [66, 108, 144, 177, 206, 229]
LEDS_DISTANCES = []

count = 0
for x in NUM_PER_TIRA:
    # Calcular el arreglo de distancias entre cada tira de leds
    LEDS_DISTANCES.append(sum)
    # Suma total de leds
    sum += x

print(LEDS_DISTANCES)
print(sum)


#-----------------------------------------------------------------------

# Calcular los angulos dependiendo de cada tira
alpha = []
radio = 0.7
dleds = 0.017

num = 0
for x in NUM_PER_TIRA:
    # Si es mayor que la mitad de filas necesita sumarse PI/2
    if(num < 9):
        k = math.asin((dleds*x)/(radio*2*math.pi)) + math.pi/2
    else:
        k = math.asin((dleds*x)/(radio*2*math.pi))
    #Aproxima a dos digitos
    k = math.ceil(k * 100.0) / 100.0
    alpha.append(k)
    num = num +1

print(alpha)
