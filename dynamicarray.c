#include <stdio.h>
#include <stdlib.h>

typedef struct {
  int *items; //where the item is located, item type independent, can be made float etc 
  size_t count; //how many items 
  size_t capacity; //how much memory is allocated 
} Numbers;

int main(void){
  Numbers xs = {0};
  for(int x=0; x<10; ++x){ //pushing ten items onto the array 
    if(xs.count>=xs.capacity){
      if (xs.capacity==0) xs.capacity=256;
      else xs.capacity*=2;
      xs.items = realloc(xs.items, xs.capacity*sizeof(*xs.items));
    }
    xs.items[xs.count++]=x; //push and increment count
  }
  for (size_t i=0; i<xs.count; ++i) printf("%d\n", xs.items[i]);
  return 0;
}
