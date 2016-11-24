#Made by kahootbird for project euler #18
#Get the test cases a loop for them
a = int(raw_input())

while (a > 0):
	a = a - 1
	row = []
	b = raw_input()
	b = int(b)
	#Get input and convert to ints including negatives
	while (b > 0):
	    string_value = raw_input()
	    row.append(map(int, string_value.split(' ')))
	    b = b - 1
	#Now to the meat of the problem - start at the bottom and sum each direction to the top 
	loopvar = len(row);
	for index, value in enumerate(row):
		if (loopvar != 1):
			loopvar = loopvar-1;
			#Crazy python comprehension to add the max of each row to the row above it.
			row[loopvar-1] = [row[loopvar-1][x]+max(row[loopvar][x],row[loopvar][x+1]) for x in range(0,loopvar)]
	#Print result
	print("" + str(row[0][0]))


