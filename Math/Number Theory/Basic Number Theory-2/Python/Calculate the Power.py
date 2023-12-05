MOD = 10**9 + 7

def power_modulo(a, b):
    return pow(a, b, MOD)

# Input
A, B = map(int, input().split())

# Calculate A^B modulo 10^9+7
result = power_modulo(A, B)

# Output
print(result)