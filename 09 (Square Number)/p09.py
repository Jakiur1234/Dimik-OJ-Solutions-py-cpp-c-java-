import math

def solve():
    # Your solution code goes here
    pass

if __name__ == "__main__":
    tc = int(input())

    for _ in range(tc):
        num = int(input())

        # sqrt(10) = 3.16 but it is an integer, so it will assign just 3
        p = int(math.sqrt(num))

        # check if p*p = number. We find 3*3 != 10. So 10 is not a perfect square number
        if p * p == num:
            print("YES")
        else:
            print("NO")
