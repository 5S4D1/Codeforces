# Given two numbers M and N.
# Print the summation of their last digits.

def main():
    m, n = map(int, input().split())
    print(m % 10 + n % 10)

if __name__ == "__main__":
    main()