def solve():
    # Your solution code goes here
    pass

if __name__ == "__main__":
    tc = int(input())

    for _ in range(tc):
        in_str = input()
        words = len([word for word in in_str.split() if word])
        print(words)
