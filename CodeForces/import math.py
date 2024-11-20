import math

def factorial(n):
    return 1 if n == 1 or n == 0 else n * factorial(n - 1)

def solve():
    l, r = map(int, input().split())
    ans = math.log(l) / math.log(3) + 1
    x = factorial(r)
    y = factorial(l - 1)
    ans += r - l + 1 + (math.log(x) - math.log(y)) / math.log(3)
    print(int(ans))

def main():
    tc = int(input())
    for _ in range(tc):
        solve()

if __name__ == "__main__":
    main()

