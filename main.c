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
  if (drl >= 90){
    printf("Ren luyen :XUAC_SAC\n");
  }
  else if (drl >= 80){
    printf("Ren luyen :GIOI\n");
  }  
  else if (drl >= 70){
    printf("Ren luyen :KHA\n");
  }
  else{
    printf("KHONG_DAT\n");
  }
  if (dtb >= 9.0 && drl >= 90){
    printf("HOC_BONG_XUAT_SAC\n");
  }
  else if((dtb >= 8.0 && drl >= 80 // drl >= 90) // (dtb >= 9.0 && drl >=80)){
            printf("HOC_BONG_GIOI\n");
  }
  else if ((dtb >= 7.0 && drl >= 70 // drl >= 80 // drl >= 90) // (dtb >= 8.0 && drl >= 70) // (dtb >= 9.0 && drl >= 70)){
            printf("HOC_BONG_KHA\n");
  }
  else {
            printf("KHONG_DAT");
  }
  
  return 0;
}