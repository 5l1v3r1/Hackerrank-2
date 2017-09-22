#!/bin/python3

# This is a solution to the problem on Hackerrand - https://www.hackerrank.com/challenges/most-commons/problem

#!/bin/python3

s = input().strip()
alpha = dict(zip([chr(i) for i in range(97, 123)], [x for x in range(1, 27)]))
result2 = {}
for x in alpha.keys():
    result2.update({x:s.count(x)})
        
result = sorted(result2.items(), key=lambda x: (-x[1],x[0]))
result3 = result[:3]
max1, num1 = result3[0]
max2, num2 = result3[1]
max3, num3 = result3[2]
print(max1, num1)
print(max2, num2)
print(max3, num3)
