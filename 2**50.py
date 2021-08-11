limit = 2 ** 10
prime = []
ans = 0

for i in range(2, limit + 1):
    for y in range(2, i//2 + 2):
        if i % y == 0:
            break
        else:
            if y == i//2 + 1:
                prime.append(i)
prime.append(2)
print(prime)
for i in range(2, limit+1):
    for x in prime:
        if i % (x ** 2) == 0:
            ans += 1
            break

ans = limit - ans
print(ans)

#
# int main()
# {
#     int a,b;
#     string c[]={"","one","two","three","four","five","six","seven","eight","nine"};
#     cin>>a>>b;
#     for(int i=a;i<=b;i++)
#         cout<<((i<=9)?c[i]:((i%2==0)?"even":"odd"))<<endl;
# }
