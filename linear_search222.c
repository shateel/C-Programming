    #include<stdio.h>
    #define SIZE 100

    size_t linearSearch(const int array[], int key, size_t size);

    int main(void){
    	int a[SIZE];
    	size_t x;
    	int searchKey;
    	size_t element;

    	for(x=0; x<SIZE; ++x){
    		a[x] = 2*x;
    		if(x%10 == 0){
    			puts("");
    		}
    		printf("%5d", a[x]);
    	}

    	printf("\nSizeof value %d",(sizeof(size_t)));

    	puts("\n\nEnter integer search key:");
    	scanf("%d", &searchKey);

    	element = linearSearch(a, searchKey, SIZE);
    	if(element != SIZE){
    		printf("Found value in element %u", element);//%zu for size_t
    	} else {
    		puts("Value not found");
    	}
    }

    size_t linearSearch(const int array[], int key, size_t size)
    {
    	if(size == 0){
    		return SIZE;
    	}
    	if(key == array[size-1]){
    		return size-1;
    	}
    	return linearSearch(array, key, size-1);
    }

