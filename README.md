Liam Goodwin

# CS Systems HW7: Micro-Optimization.

## Part 1

To measure the performance of both functions, I had to create methods to collect data to find the 95th percentile latency and mean throughput. The first thing I did was take the variable t which represents the run time of an instance of convert_all() and place it in an array of size argv[2] (the number of runs) called latencies. After this, I sorted the function using simple selection sort function (since only convert_all() needs to be optimized) to find the 95th percentile latency and a sum function to find the mean throughput. I then ran the entire program with standard atoi() and liam_atoi() ten times each to collect enough data to calculate averages.

### Run Time (in Seconds)

Trial | Atoi() | Liam_atoi()
------|--------|------------
1 | 0.029875 | 0.006452
2 | 0.029866 | 0.006451
3 | 0.029820 | 0.00645
4 | 0.029858 | 0.006451
5 | 0.029828 | 0.006451
6 | 0.029829 | 0.00645
7 | 0.029891 | 0.006452
8 | 0.029832 | 0.00645
9 | 0.029824 | 0.00645
10 | 0.029869 | 0.00645
Average | 0.0298492 | 0.0064507
Minimum | 0.02982 | 0.00645

### 95th Percentile Latency (in Seconds)

Trial |	Atoi() | Liam_atoi()
------|--------|------------
1 | 0.033826 | 0.008915
2 | 0.032755 | 0.008953
3 | 0.032909 | 0.008814
4 | 0.033712 | 0.008914
5 | 0.033543 | 0.008839
6 | 0.042875 | 0.008921
7 | 0.033119 | 0.008818
8 | 0.032452 | 0.008863
9 | 0.038306 | 0.008886
10 | 0.039056 | 0.008877
Average | 0.0352553 | 0.00888
Minimum | 0.032452 | 0.008814

### Mean Throughput (in Function Calls per Second)

Trial | Atoi() | Liam_atoi()
------|--------|------------
1 | 31.8837 | 135.884
2 | 32.1024 | 134.229
3 | 32.0933 | 141.194
4 | 31.9771 | 135.217
5 | 32.0204 | 140.155
6 | 29.7144 | 135.271
7 | 32.0923 | 140.752
8 | 32.5005 | 139.517
9 | 30.3254 | 136.369
10 | 30.3505 | 138.324
Average | 31.506 | 137.6912
Minimum | 32.5005 | 141.194

### Differences

Name | Difference
-----|-----------
Run Time | 0.0233985
95th Percentile Latency | 0.0263753
Mean Throughput | 106.1852

To find the differences for Run Time and 95th Percentile Latency, I subtracted the average of my atoi function from the average of the standard atoi function. To find the Mean Throughput I did the opposite -I subtracted the average of the standard atoi function from the average of my version. My naive implementation's average fastest run time runs at %178.389 the speed of the standard implementation's average fastest run time; its average 95th percentile latency is %74.812 faster than the standard's; and the mean throughput of my function is 4.37 times higher than the standard atoi's average mean throughput.

## Part 2

I used a couple of methods to optimize my function further. One thing I did was eliminate the digit variable and combine all of the lines in the main for loop into one. I also took the iterating value and had it increment within the loop. The change that helped shave the run time the most though was switching from unsigned ints to regular ints, which seemed to help the most. I initially thought using unsigned ints would be faster, as the compiler wouldn't have to worry about the values being less than 0, but I'm guessing they added latency by having special conditions, unlike regular integers. On my compiler, I was able to optimize my code to be %15.891 faster than my naive implementation.