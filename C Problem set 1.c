//https://www.programiz.com/c-programming/examples
11.
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){

    char c;
    printf("Please enter a Character: ");
    scanf("%c", &c);

    int lowercaseVowel=(c=='a'|| c=='e' || c=='i' || c=='o' || c=='u');
    int uppercaseVowel=(c=='A'|| c=='E' || c=='I' || c=='O' || c=='U');

    if(lowercaseVowel){
        printf("%c is a Lowercase vowel\n", c);
    }
    else if(uppercaseVowel){
        printf("%c is a Uppercase vowel\n", c);
    }
    else{
        printf("%c is a Consonant\n", c);
    }

    return 0;
}
//
12.
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){

    int n1, n2, n3;
    printf("enter the three number: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    if(n1>n2){
        if(n2>n3){
            printf("%d>%d>%d", n1, n2, n3);
        }
        else{
            printf("%d>%d>%d", n1, n3, n2);
        }
    }
    else if(n2>n3){
        if(n1>n3){
            printf("%d>%d>%d", n2, n1, n3);
        }
        else{
            printf("%d>%d>%d", n2, n3, n1);
        }
    }
    else if(n3>n1){
        printf("%d>%d>%d", n3, n2, n2);
    }
    else{
        printf("%d>%d>%d", n1, n3, n2);
    }

    return 0;
}
//
13.
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){

    double n1, n2, n3;
    printf("enter the three number: ");
    scanf("%lf %lf %lf", &n1, &n2, &n3);

    if(n1>=n2 && n1>=n3){
        printf("%lf", n1);
    }
    else if(n2>=n1 && n2>=n3){
        printf("%lf", n2);
    }
    else{
        printf("%lf", n3);
    }

    return 0;
}
//
12.
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){

    double n1, n2, n3;
    printf("enter the three number: ");
    scanf("%lf %lf %lf", &n1, &n2, &n3);

    double val=n1;
    if(n2>=n3){
        if(val>=n2){
            printf("%lf>%lf>%lf", val, n2, n3);
        }
        else{
                if(val>=n3){
                    printf("%lf>%lf>%lf", n2, val, n3);
                }
                else{
                    printf("%lf>%lf>%lf", n2, n3 ,val);
                }
        }
    }
    else{
        if(val>=n3){
            printf("%lf>%lf>%lf", val, n3, n2);
        }
        else{
                if(val>=n2){
                    printf("%lf>%lf>%lf", n3, val, n2);
                }
                else{
                    printf("%lf>%lf>%lf", n3, n2, val);
                }

        }
    }
    return 0;
}
//
13.
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main(){
    while(1){
    double a,b,c,root1,root2,discriminant, realpart, imaginepart;
    printf("Please enter the coefficients of a, b, c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    discriminant=  b*b - 4*a*c;
    //for real roots
    if(discriminant>0){
        root1= (-b + sqrt(discriminant)) / (2*a);
        root2= (-b + sqrt(discriminant)) / (2*a);
        printf("root1: %lf, root2: %lf\n", root1, root2);

    }
     //for discriminant zero
    else if(discriminant==0){
        root1=root2= -b / (2*a);
        printf("root1=root2= %lf\n", root1=root2);
    }
    //for unreal root;
    else{
        realpart= -b / (2*a);
        imaginepart = (sqrt(-discriminant)) / (2*a);
        printf("root1=%0.5lf+%0.5lf, root2=%0.5lf-%0.5lf\n", realpart, imaginepart, realpart, imaginepart);

    }
    }
    return 0;
}
//
14.
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main(){
    while(1){
    int year;
    printf("please enter a year: ");
    scanf("%d", &year);

    if(year%400==0  || (year%4==0 && year%100!=0)){
        printf("%d is leap year\n", year);
    }
    else{
        printf("%d is not a leap year\n", year);
    }
    }
    return 0;
}
//
16.
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main(){
    while(1){
    int n;
    printf("please enter something(32-127): ");
    scanf("%d", &n);
    if(n<32 && n>127){
        printf("exception! please enter right key");
        exit(0);
    }
    printf("The ASCII characters of %d is %c\n", n, n);
    }

    return 0;
}
//
18.
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main(){
    while(1){
    int n;
    printf("please enter a number: ");
    scanf("%d", &n);
    int fact=1;
    for(int i=0; i<n; ++i){
        fact=fact*(i+1);
    }
    printf("%d! = %d", n, fact\n);
    }
    return 0;
}
//
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main(){
    while(1){
    int n;
    printf("please enter a number: ");
    scanf("%d", &n);
    unsigned long long fact=1;
    for(int i=1; i<+n; ++i){
        fact*=i;
    }
    printf("%d! = %llu\n", n, fact);
    }
    return 0;
}
//
19.
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main(){
    while(1){
    int n;
    printf("please enter a number: ");
    scanf("%d", &n);
    for(int i=1; i<=10; ++i){
        printf("%d * %d = %d\n", n, i, n*i);
    }
    }
    return 0;
}
//
20.
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main(){
    while(1){
    int n;
    printf("\nplease enter a number: ");
    scanf("%d", &n);
    int initial=0;
    int fibb=1;
    int fib;
    for(int i=1; i<=n; ++i){
        fib=initial+fibb;
        initial=fibb;
        fibb=fib;
        printf("%d\t", fib);
    }
    }
    return 0;
}
//
21.
//
23.
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main(){
    for(int i=65; i<=90; ++i){
        printf("%c\t", i);
    }

    return 0;
}
//
25.
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main(){
    while(1){
    int n;
    printf("please enter a number: ");
    scanf("%d", &n);
    int r,sum=0;
    while(n>0){
        r=n%10;
        sum=(sum*10)+r;
        n=n/10;
    }
    printf("reverse number of %d is %d\n",n, sum);
    }
    return 0;
}
//
26.
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main(){
    while(1){
    int n, p;
    printf("please enter a number: ");
    scanf("%d", &n);
    printf("please enter its power ");
    scanf("%d", &p);
    int num=n;
    int temp;
    for(int i=1; i<p; ++i){
        temp=num*n;
        num=temp;
    }
    printf("%dth power of the number of %d is %d\n",p,n,num);
    }
    return 0;
}
//
27.
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main(){
    while(1){
    int n;
    printf("please enter a number: ");
    scanf("%d", &n);
    int r,sum=0;
    int temp=n;
    while(n>0){
        r=n%10;
        sum=(sum*10)+r;
        n=n/10;
    }
    if(temp==sum){
        printf("%d is palindrome\n", temp);
    }
    else{
        printf("%d is not palindrome\n", temp);
    }
    }
    return 0;
}
//
28.
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main(){
    while(1){
    int n;
    printf("please enter a number: ");
    scanf("%d", &n);
    int x=n/2;
    for(int i=2; i<=x; ++i){
        if(n%i==0){
            printf("%d is not prime\n", n);
            exit(0);
        }
    }
    printf("%d is prime\n", n);
    }
    return 0;
}
//
29.
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main(){
    while(1){
    int n1, n2;
    printf("please enter two number:");
    scanf("%d %d", &n1, &n2);
    for (int h=n1; h<=n2; ++h){
        int x=h/2;
        int temp=0;
        for(int i=2; i<=x; ++i){
        if(h%i==0){
                temp=1;
            }
        }
        if(temp!=1){
            printf("%d\t", h);
        }
    }
    printf("\n\n");
    }
    return 0;
}
//
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main(){
    while(1){
        int low , high;
        printf("\nplease enter two number:");
        scanf("%d %d", &low, &high);
        while(low<high){
            if(low<=1){
                low++;
                continue;
            }
            int temp=0;
            for(int i=2; i<low/2; i++){
                if(low%i==0){
                    temp=1;
                    break;
                    }
                }
            if(temp==0){
                printf("%d\t", low);
            }
            low++;
            }
    }
    return 0;
}
//
30.
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main(){
    while(1){
        int num;
        printf("\nplease enter a number:");
        scanf("%d",&num);
        int m, n=m=num,r,p=0;
        while(num>0){
            num=num/10;
            p++;
        }
        printf("%d\n", p);

        int sum=0;
        while(n>0){
            r=n%10;
            int rr=1;
            for(int i=0; i<p; i++){
                rr=rr*r;
            }
            sum=sum+rr;
            n=n/10;
        }
        if(sum==m){
            printf("%d is a armstrong number\n", m);
        }
        else{
            printf("%d is not a armstrong number\n", m);
        }
    }

    return 0;
}
//
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main(){
    while(1){
        int num;
        printf("\nplease enter a number:");
        scanf("%d",&num);
        int m,n=m=num,r,p=0;
        while(num>0){
            num=num/10;
            p++;
        }
        printf("%d\n", p);

        double sum=0;
        while(n>0){
            r=n%10;
            double power=pow(r,p);
            sum+= power;
            n=n/10;
        }
        if(sum==m){
            printf("%d is a armstrong number\n", m);
        }
        else{
            printf("%d is not a armstrong number\n", m);
        }
    }

    return 0;
}

//
31.
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main(){
    while(1){
        int n,low, high;
        printf("\nplease enter two number:");
        scanf("%d %d", &low, &high);

        for(n=low+1; n<=high; ++n){
            int m=n;
            int p=0,r;
            while(m>0){
                m=m/10;
                p++;
            }
            m=n;
            double sum=0;
            while(m>0){
                r=m%10;
                sum+=pow(r,p);
                m=m/10;
            }
            if((int)sum==n){
                printf("%d\t", n);
            }
        }
    }

    return 0;
}
//
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main(){
    while(1){
        int n,low, high;
        printf("\nplease enter two number:");
        scanf("%d %d", &low, &high);

        for(n=low+1; n<=high; ++n){
                if(n<=10){
                continue;
                }
            int m=n;
            int p=0,r;
            while(m>0){
                m=m/10;
                p++;
            }
            m=n;
            double sum=0;
            while(m>0){
                r=m%10;
                sum+=pow(r,p);
                m=m/10;
            }
            if((int)sum==n){
                printf("%d\t", n);
            }
        }
        }

    return 0;
}
//
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main(){
    while(1){
        int n,low, high;
        printf("\nplease enter two number(intervals):");
        scanf("%d %d", &low, &high);

        if(low>high){
            int temp;
            temp=low;
            low=high;
            high=temp;
        }

        for(n=low+1; n<=high; ++n){
                if(n<=10){
                continue;
                }
            int m=n;
            int p=0,r;
            while(m>0){
                m=m/10;
                p++;
            }
            m=n;
            double sum=0;
            while(m>0){
                r=m%10;
                sum+=pow(r,p);
                m=m/10;
            }
            if((int)sum==n){
                printf("%d\t", n);
            }
        }
        }

    return 0;
}
//
32.
#include <stdio.h>
int main() {
  while(1){
  double a, b;
  printf("Enter a: ");
  scanf("%lf", &a);
  printf("Enter b: ");
  scanf("%lf", &b);

  a = a - b;
  printf("a=%lf\n", a);

  b = a + b;
  printf("b=%lf\n", b);

  a = b - a;

  printf("After swapping, a = %.2lf\n", a);
  printf("After swapping, b = %.2lf\n", b);
  }
  return 0;
}
//
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main(){
        int n;
        printf("\nPlease enter a number: ");
        scanf("%d", &n);

        int num=1;
        while(num<=n/2){
            if(n%num==0){
                printf("%d\t", num);
            }
            ++num;
        }
        printf("%d\t", n);

    return 0;
}
//
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main(){
        int n;
        printf("\nPlease enter a number: ");
        scanf("%d", &n);

        int num=1;
        while(num<=n){
            if(n%num==0){
                printf("%d\t", num);
            }
            ++num;
        }


    return 0;
}
//
33.
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main(){
        while(1){
            char c;
            double n1, n2;
            printf("enter a operator: ");
            scanf("%c", &c);
            printf("enter two operants: ");
            scanf("%lf %lf", &n1, &n2);

            switch(c){
                case '+':
                    printf("%lf + %lf = %lf\n", n1, n2, n1+n2);
                    break;
                case '-':
                    printf("%lf - %lf = %lf\n", n1, n2, n1-n2);
                    break;
                case '*':
                    printf("%lf * %lf = %lf\n", n1, n2, n1*n2);
                    break;
                case '/':
                    printf("%lf / %lf = %lf\n", n1, n2, n1/n2);
                    break;
                default:
                printf("exception! invalid operator");
            }
        }


    return 0;
}
//
34.
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int primeCheck(int low, int high);

int main(){
    while(1){
        int low , high;
        printf("\nplease enter two number:");
        scanf("%d %d", &low, &high);
        primeCheck(low, high);

    }
    return 0;
}
int primeCheck(int low, int high){
    while(low<high){
            if(low<=1){
                low++;
                continue;
            }
            int temp=0;
            for(int i=2; i<low/2; i++){
                if(low%i==0){
                    temp=1;
                    break;
                    }
                }
            if(temp==0){
                printf("%d\t", low);
            }
            low++;
        }
        return 0;

}
//
35.
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
void primeCheck(int x);
void armostrongCheck(int n);

int main(){
    while(1){
        int num;
        printf("\nplease enter a number:");
        scanf("%d",&num);
        armostrongCheck(num);
        primeCheck(num);
    }
    return 0;
}
void primeCheck(int x){
        int temp=0;
        for(int i=2; i<=x/2; ++i){
        if(x%i==0){
                printf("%d is not prime\n", x);
                temp=1;
                break;
            }
        }
        if(temp==0){
            printf("%d is Prime\n", x);
        }
}
void armostrongCheck(int n){
        if(n<10){
            printf("%d is not a armstrong number\n", n);
            return 0;
        }
        int num=n,r,p=0;
        while(num>0){
            num=num/10;
            p++;
        }
        num=n;
        double sum=0;
        while(num>0){
            r=num%10;
            sum+= pow(r,p);
            num=num/10;
        }
        if(sum==n){
            printf("%d is a armstrong number\n", n);
        }
        else{
            printf("%d is not a armstrong number\n", n);
        }
}
//
36.

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int primeCheck(int x);
int main(){
    int n;
    printf("please enter a number: \n");
    scanf("%d", &n);
    for(int i=2; i<n; i++){
        if(primeCheck(i)==1){
            for(int j=i+1; j<n; ++j){
                if(primeCheck(j)==1){
                    if(n==(i+j)){
                        printf("%d + %d = %d\n", i, j, n);
                    }
                }
            }
        }
    }


    return 0;
}
int primeCheck(int x){
            int temp=0;
            for(int i=2; i<=x/2; i++){
                if(x%i==0){
                    temp=1;
                    break;
                    }
                }
            if(temp==0){
                return 1;
            }
        }
//
39.

