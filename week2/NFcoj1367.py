
def det(matrix):

    size=len(matrix[0])

    for col in range(size):
        found=False
        for row in range(size):
            if matrix[row][col]!=0:
                if row!=col:
                    temp=matrix[row]
                    matrix[row]=matrix[col]
                    matrix[col]=temp
                found=True
                break

        if not found:
            return 0

        for row in range(col+1,size):
            while True:
                dell=matrix[row][col]/matrix[col][col]
                for j in range(size):
                    matrix[row][j]-=int(dell*matrix[col][j])
                if int(matrix[row][col])==0:
                    break
                else:
                    temp=matrix[row]
                    matrix[row]=matrix[col]
                    matrix[col]=temp

    det=1
    for i in range(size):
        det*=matrix[i][i]
    del matrix
    return det

# def det(A):
#     n = len(A)
#
#     for i in range(0, n):
#         # Search for maximum in this column
#         maxEl = abs(A[i][i])
#         maxRow = i
#         for k in range(i+1, n):
#             if abs(A[k][i]) > maxEl:
#                 maxEl = abs(A[k][i])
#                 maxRow = k
#
#         # Swap maximum row with current row (column by column)
#         for k in range(i, n+1):
#             tmp = A[maxRow][k]
#             A[maxRow][k] = A[i][k]
#             A[i][k] = tmp
#
#         # Make all rows below this one 0 in current column
#         for k in range(i+1, n):
#             c = -A[k][i]/A[i][i]
#             for j in range(i, n+1):
#                 if i == j:
#                     A[k][j] = 0
#                 else:
#                     A[k][j] += c * A[i][j]
#
#     # Solve equation Ax=b for an upper triangular matrix A
#     x = [0 for i in range(n)]
#     for i in range(n-1, -1, -1):
#         x[i] = A[i][n]/A[i][i]
#         for k in range(i-1, -1, -1):
#             A[k][n] -= A[k][i] * x[i]
#     print(x)

total=int(raw_input())
for i in range(total):
    totline=int(raw_input())
    matrix=[]
    for j in range(totline):
        line=raw_input()
        line2=[]
        for k in range(len(line)):
            line2.append(int(line[k]))
        matrix.append(line2)
        del line2
        del line

    del line
    del line2

    det(matrix)

    # if det(matrix)%2:
    #     print("Odd")
    # else:
    #     print("Even")
    del matrix
