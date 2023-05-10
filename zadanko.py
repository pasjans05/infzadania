import random

kl = [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0]

for i in range (0, 14):
    x = random.randint(0, 14)
    kl[x] += 1

m = 0

print("nie były losowane numery: ", end="")

for n in range (0, 14):
    if kl[n] > m:
        m = kl[n]
        l = n
    if kl[n] == 0:
        print(n+1, end=", ")

print("\nnajczęściej losowany był numer ", l+1, ", był losowany ", m, "razy")