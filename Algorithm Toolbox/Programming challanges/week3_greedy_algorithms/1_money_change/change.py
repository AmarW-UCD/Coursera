# Uses python3
import sys

def get_change(m):
    #write your code here
    coins = [10, 5, 1]  # must be sorted
    count = 0
    for coin in coins:
        # Update count with the the number of coins 'are held' in the amount.
        count += m // coin
        # Put remainder to the residuary amount.
        m %= coin

    return count


if __name__ == '__main__':
    m = int(sys.stdin.read())
    print(get_change(m))
