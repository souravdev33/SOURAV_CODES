def longest_common_subsegment_length(x, y):
    z = x ^ y
    if z == 0:
        return 1
    
    trailing_zeros = 0
    while (z & 1) == 0:
        z >>= 1
        trailing_zeros += 1
    
    return 1 << trailing_zeros

# Read number of test cases
t = int(input().strip())

results = []
for _ in range(t):
    x, y = map(int, input().strip().split())
    results.append(longest_common_subsegment_length(x, y))

for result in results:
    print(result)
