#include <stdio.h>

int main() {
  float dtb, drl;
  scanf("%f" , &dtb);
  scanf("%f", &drl);
  if (dtb >= 9.0){
  }
  else if (dtb >= 8.0){
  }
  else if (dtb >= 7.0){
  }
  else {
  }
  if (drl >= 90){
  }
  else if (drl >= 80){
  }  
  else if (drl >= 70){
  }
  else{
  }
  if (dtb >= 9.0 && drl >= 90){
    printf("HOC_BONG_XUAT_SAC\n");
  }
  else if((dtb >= 8.0 && dtb < 9.0 && drl >= 80 ) || (dtb >= 9.0 && drl >=80 && drl < 90)){
            printf("HOC_BONG_GIOI\n");
  }
  else if ((dtb >= 7.0 && drl >= 70 || drl >= 80 || drl >= 90) || (dtb >= 8.0 && drl >= 70) || (dtb >= 9.0 && drl >= 70)){
            printf("HOC_BONG_KHA\n");
  }
  else {
            printf("KHONG_DAT");
  }
  
  return 0;
}