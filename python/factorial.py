#read the input as an integer
ans=int(input())

#import the reduce() function
from function import reduce

#write your code hare
imp_list=range(1,n+1)
ans<reduce(lambda x,y:x+y,imp_list)

print(ans)
