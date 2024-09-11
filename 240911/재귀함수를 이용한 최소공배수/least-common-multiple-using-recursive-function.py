n=int(input())
arr=list(map(int,input().split()))
def fuc_1 (a,b):
    if b==0:
        return(a)
    return (fuc_1(b,a%b))
    
def fuc_2 (arr):
    if len(arr)==1:
        return (arr[0])
    x=arr.pop()
    y=arr.pop()
    z=fuc_1(x,y)
    num=(x*y)/z
    arr.append(num)
    return(fuc_2(arr))
        
print(int(fuc_2(arr)))