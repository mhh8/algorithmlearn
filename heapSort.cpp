#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <stdio.h>
#include <memory.h>
#include <string.h>



template <class T>
class Heap {
    public:
        Heap() {
            data = new std::vector<T>;

        }
        virtual ~Heap() {
            delete data;
        }
        void set_data(const std::vector<T> &d) {
        
            for (int i = 0; i < d.size(); i++) {
                (*data)[i] = d[i];
            }
        }
        void set_data(const T d[], int size) {
        
            for (int i = 0; i < size; i++) {
                data->push_back(d[i]);
            }
        }
        
        void swap(std::vector<T> *d, int index1, int index2) {
            T temp;
            temp = d->at(index1);
            (*d)[index1] = d->at(index2);
            (*d)[index2] = temp;
        }
        
        void creat_max_heap(void) {
            int size = data->size();
            for (int i = (size-2)/2; i >= 0; --i) { // (size-2)/2  (size+1)/2-1
                max_heap(data, i, size);
            }
        }
		void creat_min_heap(void) {
            int size = data->size();
            for (int i = (size-2)/2; i >= 0; --i) { // (size-2)/2  (size+1)/2-1
                min_heap(data, i, size);
            }   
        }
		void heap_sort_desc(void) {
			creat_min_heap();
			int size = data->size();
			for (size = size-1; size >= 0; --size) { // (size-2)/2  (size+1)/2-1
				swap(data,0, size);
                min_heap(data, 0, size);
				
            }
			
		}
		void heap_sort_asc(void) {
			creat_max_heap();
			int size = data->size();
			for (size = size-1; size >= 0; --size) { // (size-2)/2  (size+1)/2-1
				swap(data,0, size);
                max_heap(data, 0, size);
				
            }
			
		}
        void print_data(void) {
            std::cout <<  "data:\n";
            for (int i = 0; i < data->size(); i++) {
                std::cout << data->at(i);
                if (i != data->size()-1) 
                    std::cout << " -> ";
            }
            std::cout <<  "\n";
        }
    private:
        std::vector<T> *data;
        
        void max_heap(std::vector<T> *d, int index, int size) {
            int i = index;
            T d_index = d->at(i);
            int left_child = i*2+1;
			
            while(left_child < size) {				
				if (left_child+1 < size && (d->at(left_child) < d->at(left_child+1))) {
                    left_child++;
                }
				if (0) {
                    std::cout << i << ": p: " << (*d)[i] << " left: " << (*d)[i*2+1] << "\n";
                }
				if (d->at(i) < d->at(left_child)) {
					std::cout << i << ":" << d->at(left_child) << " <-> ";
                   //(*d)[i] = d->at(left_child);
				   swap(d, i, left_child);
				   i = left_child;
				   left_child = i*2+1;
                } else {
					break;
				}
            }
			//(*d)[i] = d_index;
			std::cout << i << ":" << d->at(i) << "\n";
        }
		void min_heap(std::vector<T> *d, int index, int size) {
            int i = index;
            int left_child = i*2+1;
            int right_child = i*2+2;
            int min;

            while(left_child < size) {
				if (d->at(left_child) > d->at(i)) {
                    min = i;
                } else {
					min = left_child;
				}
                if (right_child < size && (d->at(min) > d->at(right_child))) {
                    min = right_child;
                } 
                
                if (i == 4) {
                    std::cout << "p: " << (*d)[i] << " left: " << (*d)[i*2+1] << "\n";
                }
                
                if (min != i) {
                    swap(d, min, i);
                    i = min;
                    left_child = i*2+1;
                    right_child = i*2+2;
                }
                else {
                    break;
                }              
            }
        }
    
};

void class_heap_test(void) {
    Heap<int> heap_test;
    int data[] = {10,2,45,6,6,12,22,0,3,456,4};
	
    heap_test.set_data(data, sizeof(data)/sizeof(int));
	std::cout << "original data: \n";
	heap_test.print_data();
    heap_test.creat_max_heap();
    heap_test.print_data();
	heap_test.heap_sort_desc();
    heap_test.print_data();
}

int main(int argc, char **argv) {
    class_heap_test();
    return 0;
}
