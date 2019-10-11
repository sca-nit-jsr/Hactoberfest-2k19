def shortest(str1, str2):
	l1 = len(str1)
	l2 = len(str2)

	l = lcs(str1, str2, l1, l2)
	# Length of str1+ length of str2 - length of largest common superSequence
	return (l1+l2-l)

def lcs(str1, str2, l1, l2):

	grid = [[0 for i in range(l1+1)] for i in range(l2+1)]


	for i in range(l2+1):
		for j in range(l1+1):
			if(i==0 or j==0):
				grid[i][j] = 0
			elif(str1[j-1]==str2[i-1]):
				grid[i][j] = 1 + grid[i-1][j-1]
			else:
				grid[i][j] = max(grid[i-1][j], grid[i][j-1])

	return grid[l2][l1]

str1 = "AGGTAB"
str2 = "GXTXAYB"

print(shortest(str1, str2))