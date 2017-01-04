heapSort:heapSort.o
	g++ -o heapSort heapSort.o -g -O0
clean:
	rm *.o test