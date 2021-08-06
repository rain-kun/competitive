def canConstruct(a):
    # Return "Yes" or "No" denoting whether you can construct the required number.
    size:int = len(a)
    s = 0
    for a in a:
        s+=a
    if s%3 == 0:
        return "Yes"
    else:
        return "No"
    

print(canConstruct([1, 4]))