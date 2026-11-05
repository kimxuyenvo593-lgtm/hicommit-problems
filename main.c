#include <stdio.h>

int main() {
  float dtb, drl;
  printf("nhap diem trung binh);
  scanf("%f" , &dtb);
  printf("nhap diem ren luyen");
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
  else (dtb < 7.0){
    printf("KHONG_DAT\n");
  }
  
  return 0;
}