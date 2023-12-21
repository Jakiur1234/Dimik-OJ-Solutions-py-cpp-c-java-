def solve():
    # Your solution code goes here
    pass

if __name__ == "__main__":
    tc = int(input())

    for _ in range(tc):
        number = int(input())

        if number % 2 == 0:
            print("even")
        else:
            print("odd")
