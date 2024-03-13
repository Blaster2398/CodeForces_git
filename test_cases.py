import random

# Number of test cases
q = 100

print(q)

for _ in range(q):
    n = random.randint(1, 50)
    t = random.randint(1, 200)
    print(n, t)

    durations = [random.randint(1, 100) for _ in range(n)]
    print(*durations)

    entertainment_values = [random.randint(1, 100) for _ in range(n)]
    print(*entertainment_values)