# Enter your code here. Read input from STDIN. Print output to STDOUT


def compute(x):
    ans = max(sum(int(c) for c in str(a**b))
        for a in range(x) for b in range(x))
    return str(ans)


if __name__ == "__main__":
    x = int(input())
    print(compute(x))
    
    
    