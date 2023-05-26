import time
import random

start = time.perf_counter()

def Parallel_bubble_sort(lst):
	Sorted = 0
	n = len(lst)

	while Sorted == 0:
		Sorted = 1
		for i in range(0, n-1, 2):
			if lst[i] > lst[i+1]:
				lst[i], lst[i+1] = lst[i+1], lst[i]

				Sorted = 0
		for i in range(1, n-1, 2):
			if lst[i] > lst[i+1]:
				lst[i], lst[i+1] = lst[i+1], lst[i]
				Sorted = 0
	print(lst)

lst = [(random.randint(0,100)) for i in range(100)]

Parallel_Bubble_Sort(lst)

finish = time.perf_counter()

print(f'Finished in {round(finish-start,2)} second(s)')
