# properties of GCD
# i) gcd(a,b)=gcd(b,a)
# ii) gcd(ca,cb)=cgcd(a,b)
# iii) gcd(gcd(a,b),c)=gcd(a,gcd(b,c))


def combinations(lst, num): # TIME EXCEEDED
    if num>0:
        for x in lst:
            for comb in combinations(lst, num-1):
                yield [x] + comb
    else:
        yield []

def divisible(lis): # TIME EXCEEDED
    s = sum(lis)
    for v in lis:
        if s%v == 0:
            return 0
    return 1

def isequal(lis): # TIME EXCEEDED
    l:int = len(lis)
    for i in range(l-1):
        if lis[i]==lis[i+1]:
            return 0
    return 1

def solve(a): # TIME EXCEEDED
    l:int = len(a)
    print(combinations(a, l))
    for v in combinations(a, l):
        if divisible(v):
            if isequal(v):
                return "YES"
    return "NO"


print(solve([5, 5, 5]))