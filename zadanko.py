import random

kl = [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0]

for i in range (0, 14):
    x = random.randint(0, 14)
    kl[x] += 1

m = 0

for n in range (0, 14):
    if kl[n] > m:
        m = kl[n]
        l = n

print("najczęściej losowany był numer ", l+1, ", był losowany ", m, "razy")

