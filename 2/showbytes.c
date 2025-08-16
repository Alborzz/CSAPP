#include <stdio.h>

typedef unsigned char *byte_pointer;

void show_bytes(byte_pointer start, size_t len){
  size_t  i;
  for(i = len-1; i <= len ; --i){
    printf("%.2x", start[i]);
  }
printf("\n");

}


int main(void){
  
 short sx = -12345;
 unsigned uy = sx;
 
  printf("uy = %u:\t" , uy);
  show_bytes((byte_pointer) &uy ,  sizeof(unsigned));













  return 0; 
}
