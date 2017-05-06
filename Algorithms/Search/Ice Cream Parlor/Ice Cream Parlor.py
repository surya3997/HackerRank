t = int (input ())

for i in range (t):
    m = int (input ())
    n = int (input ())
    c = list(map(int, input().split()))
    
    for j in range (n):
        for k in range(j + 1, n):
            total = c[j] + c[k]
            if total == m:
                print(str(min (j + 1, k + 1)) + " " + str (max (j + 1, k + 1)))
                break
        else:
            continue
        break
                
