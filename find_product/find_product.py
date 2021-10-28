n = int(input())

li = list(map(int,input().split()))

ans = 1
for i in li:
    ans = (ans*i)%(pow(10,9) + 7)

print(ans)