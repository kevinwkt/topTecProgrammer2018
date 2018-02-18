
a=raw_input().split("+")
arr=[int(x) for x in a]
arr.sort()
# print(arr)
pp="".join(str(item)+"+" for item in arr)
pp=pp[:-1]
print(pp)
