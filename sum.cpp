# include <stdio.h>

int main() {

   int n;

    printf("Geben sie eine Zahl ein: ");
   scanf("%d", &n);


    int sum = 0;

   for (int i = 0; i < n; i++) {

       int zahl;
       scanf("%d", &zahl);
       sum += zahl;
   }
   printf("%d", sum);
   return 0;
}

 