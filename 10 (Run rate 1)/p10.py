def solve():
    # Your solution code goes here
    pass

if __name__ == "__main__":
    tc = int(input())

    for _ in range(tc):
        op_run, our_run, ball_left = map(float, input().split())

        c_run_rate = (our_run / (300 - ball_left)) * 6.0

        if our_run > op_run:
            r_run_rate = 0.00
        else:
            r_run_rate = (((op_run - our_run) + 1) / ball_left) * 6.0

        print(f"{c_run_rate:.2f} {r_run_rate:.2f}")
