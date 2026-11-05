#include <stdio.h>

int main() {
  int day;
  scanf("%d", &day);
  switch(day){
    case 1:
      printf("XEP-LOAI-XUAT-SAC");
      break;
    case 2:
      printf("XEP-LOAI-GIOI");
      break;
    case 3:("XEP-LOAI-KHA");
      break;
    case 4:
      printf("XEP-LOAI-TRUNG-BINH");
      break;
    defaut:
      printf("KHONG-HOP-LE");
  }
  return 0;
}