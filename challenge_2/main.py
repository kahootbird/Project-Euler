# Enter your code here. Read input from STDIN. Print output to STDOUT
a = int(raw_input());
mylist = [];

for b in range(0,a):
    #print(b);
    c = int(raw_input());
    mylist.append(c);
#Generate fib. sequence:
fib_list = [];
fib_one = 1;
fib_two = 2;
e = 200;
#print(e);
fib_list.append(1);
for e in mylist:
    fib_list = [];
    fib_list.append(1);
    d = 1;
    fib_one = 1;
    fib_two = 2;
    #print(d);
    #print(e);
    while d < e:
        if fib_one > fib_two:
            fib_two = fib_one+fib_two;
            d = fib_one;
            if fib_one < e:
                fib_list.append(fib_one);
        if fib_two > fib_one:
            fib_one = fib_two+fib_one;
            d = fib_two;
            if fib_two < e:
                fib_list.append(fib_two);
    #print(mylist);
    #print e;
    #print fib_list;
    a = 0;
    for s in fib_list:
        if (s%2 == 0):
            a += s;
    print(a);
#Note: This code could probably be more brief and specific with comprehensions for a fibonacci sequence.
