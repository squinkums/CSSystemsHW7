Liam Goodwin

# CS Systems HW7: Micro-Optimization.

## Part 1

To measure the performance of both functions, I had to create methods to collect data to find the 95th percentile latency and mean throughput. The first thing I did was take the variable t which represents the run time of an instance of convert_all() and place it in an array of size argv[2] (the number of runs) called latencies. After this, I sorted the function using simple selection sort function (since only convert_all() needs to be optimized) to find the 95th percentile latency and a sum function to find the mean throughput. I then ran the entire program with standard atoi() and liam_atoi() ten times each to collect enough data to calculate averages.

### Run Time

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