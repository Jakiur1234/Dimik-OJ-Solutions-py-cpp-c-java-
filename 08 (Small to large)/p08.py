def solve():
    # Your solution code goes here
    pass

if __name__ == "__main__":
    tc = int(input())

    for i in range(tc):
        a, b, c = map(int, input().split())
        numbers = [a, b, c]

        # find the maximum, minimum, and middle
        maximum = max(numbers)
        minimum = min(numbers)
        middle = sum(numbers) - maximum - minimum

        print(f"Case {i + 1}: {minimum} {middle} {maximum}")
