#include<stdio.h>
#include<math.h>

int main(){
int a = 100; // กำหนดให้ a เป็นจำนวนเต็ม int
while(a>=0) // กำหนด a =0 ; และค่าตัวแปร a จะเพิ่มขึ้นทุกๆ 1 แต่ตัวแปร a ต้องน้อยกว่า 5
{
 if(a%50!=0)
  printf("%d ", a);
  a-=10;
}
return 0; // // เมื่อตัวแปร a ไม่น้อยกว่า 5 ให้พิมพ์ end for
}


