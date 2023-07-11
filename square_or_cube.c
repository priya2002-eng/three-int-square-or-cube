#include <stdio.h>
int main(){
  int n1,n2,n3;

  printf("Enter any three integers: ");
  scanf("%d %d %d", &n1, &n2, &n3);

  if(n1 == n2 && n1 == n3){
    printf("%d", n1*n1*n1);
  }
  else if(n1 == n2){
    printf("%d", n3*n3);
  }
  else if(n2 == n3){
    printf("%d", n1*n1):
  }
  else if(n3 == n1){
    printf("%d", n2*n2);
  }

  return 0;
}
