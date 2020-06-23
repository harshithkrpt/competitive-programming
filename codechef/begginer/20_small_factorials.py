num = int(input())

for i in range(0,num):
    n = int(input())
    ans = 1;
    for j in range(2,n+1):
        ans = ans * j

    print(ans)