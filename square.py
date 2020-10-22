n,m = map(int,input().split())
martrix = [[int(i) for i in input().split()] for _ in range(n)]
s = 0

#đếm xem có bao nhiêu hàng xóm (=1) xung quanh
def hang_xom(r,c):
    count = 0
    # loại ô 0
    if martrix[r][c] == 0:
        return 4
    #trên
    if (r > 0 and martrix[r-1][c] == 1):
        count+=1
    #dưới
    if (r < n - 1 and martrix[r+1][c] == 1):
        count+=1
    #phải
    if (c < m -1 and martrix[r][c+1] == 1):
        count+=1
    #trái
    if (c > 0 and martrix[r][c-1] == 1):
        count+=1
    return count


for i in range(n):
    for j in range(m):
        s += (4-hang_xom(i,j))
print(s)







