#include <stdio.h>

int main() {
  float dtb, drl;
  scanf("%f" , &dtb);
  scanf("%f", &drl);
  if (dtb >= 9.0){
    printf("Hoc luc :XUAT_SAC\n");
  }
  else if (dtb >= 8.0){
    printf("Hoc luc :GIOI\n");
  }
  else if (dtb >= 7.0){
    printf("Hoc luc :KHA\n");
  }
  else {
    printf("KHONG_DAT\n");
  }
  
  return 0;
}