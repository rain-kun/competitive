n = int(input())
l = input().split()
x = 0
for i in l:
    x += int(i)
print(n * (n + 1) // 2 - x)
