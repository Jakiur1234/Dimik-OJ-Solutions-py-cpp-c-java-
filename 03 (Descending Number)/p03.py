def solve():
    # Your solution code goes here
    pass

if __name__ == "__main__":
    count = 0

    for i in range(1000, 0, -1):
        print(f"{i}\t", end="")
        count += 1

        if count == 5:
            print()
            count = 0
