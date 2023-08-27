primes = []
n = int(input("range: "))

for i in range(2, n + 1):
    for j in range(2, i):
        print(f"{i} % {j} = {i % j}")
        if i % j == 0:
            break
    else:
        primes.append(i)

print(primes)
