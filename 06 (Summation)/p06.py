def solve():
    # Your solution code goes here
    pass

if __name__ == "__main__":
    tc = int(input())

    for _ in range(tc):
        number = input()
        first, last = int(number[0]), int(number[-1])

        # Now print the sum of the integer
        print(f"Sum = {first + last}")
