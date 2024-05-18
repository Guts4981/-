#include  <stdio.h>
#define g 10
#define t 1
# define LEN 1000
#define K 3
#define N 3
#define BYTE_TO_BINARY_PATTERN "%c%c%c%c%c%c%c%c"
#define BYTE_TO_BINARY(byte)  \
  ((byte) & 0x80 ? '1' : '0'), \
  ((byte) & 0x40 ? '1' : '0'), \
  ((byte) & 0x20 ? '1' : '0'), \
  ((byte) & 0x10 ? '1' : '0'), \
  ((byte) & 0x08 ? '1' : '0'), \
  ((byte) & 0x04 ? '1' : '0'), \
  ((byte) & 0x02 ? '1' : '0'), \
  ((byte) & 0x01 ? '1' : '0') 

 double sum(int i, int  n, int x, int k, long double  s) {
    if (i == n) {
        return s;
    }

    double a = (1.0 + i) / k;
    s = s + a;
    k *= x;

    return sum(i + 1, n, x, k, s);
 }

int lr_1(void) 
{ 
  float H,v0;
  printf("H=");
  scanf("%f", &H);
  v0=(H-(g*t*t)/2)/t;
  printf("v0=%f", v0);

    printf("H=");
    scanf("%f", &H);
    v0=(H-(g*t*t)/2)/t;
    printf("v0=%f", v0);

    return 0;
}


int lr_2(void)
{
    long double s,a;
    int n,i,x,k;
    printf("n=");
    scanf("%d", &n);
    s=0.;
    x=2;
    i=0;
    k=x;
    while (i<n) 
    {
       a=(1.+i)/k;
       s=s+a;
       i=i+1;
       k*=x;
    }     
    printf("s=%Lf",s);

     s = 0;

    printf("n=");
    scanf("%d", &n);
    printf("x=");
    scanf("%d", &x);

    k = x;
    s = sum(0, n, x, k, s);

    printf("s=%lf", s);

    return 0;
}




int lr_3(void)
{	
    int c, l, count_2, count_1;
    c = l = count_2 = count_1 = 0;
    while ((c = getchar()) != EOF)
    {
        l += 1;
        if (c == ' ' || c == '.' || c == '\n' || c == ',' || c == '\t')
        {
            if ((l - 1) % 2 != 0){
                count_1 += 1;}
                else{
                count_2 += 1;
                }
            l = 0;
        }
    }
    printf("Нечетные= %d\n", count_1);
    printf("Четные= %d\n", count_2);
return 0;
}


void lr_4 (void)
{
  char line[LEN]; 
  int i=0;
  int start;
  int counter=0; 
  int max=0;
  getchar();
  fgets(line,LEN,stdin); 
  while (line[i]!='\0')
  {
   if((line[i]!=' ') && (line[i]!='.') && (line[i]!=','))
   {
    counter++;
    if (counter>max)
    {
     max=counter; 
     start=i-max+1;
    }
  }
     else 
     counter=0; 
     i++;
}
i=start; 
while(i<(LEN-max))
  {
    line[i]=line[i+max]; 
    i++;
  }
  puts (line);

char xline[LEN]; 
i = 0;
start;
counter = 0; int min = LEN;
getchar();
fgets (xline,LEN,stdin); while (xline[i]!='\0')
{
if ((xline[i] == ' ') || (xline[i] == '.') || (xline[i] == ','))
{

if (counter < min)
{
min = counter; start = i - min;
}

counter = 0;
}
else
counter++;

i++;

}

i=start;

while (i<(LEN-min))
{
xline[i]=xline[i+min]; i++;
}

puts (xline);

}



 int lr_5(void){
int i;
int arr[10];

int summ1=0;
int summ2=0;
for( i = 0; i < 10; i++ )
 scanf("%d", &arr[i]);
for(i=0;i<10;i++)
{
    if(arr[i]<0)
    {
        summ1+=arr[i];
    }
    else
    {
        summ2+=arr[i];
    }
}

if(summ2+summ1>0)
{
    for(i=0;i<10;i++)
    {
        if(arr[i]<0)
        {
            arr[i]=0;
        }
    }
}
for( i = 0; i < 10; i++ )
 printf("%d ", arr[i]);
printf("\n");


     
    int n;
    printf("Введите количество элементов в прогрессии: ");
    scanf("%d", &n);

    int progression[n];

    printf("Введите элементы прогрессии: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &progression[i]);
    }

    int difference = progression[1] - progression[0];
    int isProgression = 1;

    for (int i = 1; i < n - 1; i++) {
        if (progression[i + 1] - progression[i] != difference) {
            isProgression = 0;
            break;
        }
    }

    if (!isProgression) {
        n = 0;
        printf("Прогрессия не сохраняется, удаляются все элементы.\n");
    }

    printf("Элементы прогрессии: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", progression[i]);
    }

    return 0;
}




int lr_6(void){
    int x[K][N];  
    int i, j, k, temp, max = 0, maxRow, maxCol;

    for (i = 0; i < K; i++) {
        for (j = 0; j < N; j++) {
            scanf("%d", &x[i][j]);
            if (x[i][j] > max) {
                max = x[i][j];
                maxRow = i;
                maxCol = j;
            }
        }
    }

    for (i = 0; i < K; i++) {
        temp = x[i][maxCol];
        x[i][maxCol] = x[maxRow][i];
        x[maxRow][i] = temp;
    }

    for (i = 0; i < K; i++) {
        for (j = 0; j < N; j++) {
            printf("%d ", x[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    for (j = 0; j < N; j++) 
    {
        for (i = 0; i < K - 1; i++) 
        {
            for (k = 0; k < K - i - 1; k++) 
            {
                if (x[k][j] > x[k + 1][j]) 
                {
                    temp = x[k][j];
                    x[k][j] = x[k + 1][j];
                    x[k + 1][j] = temp;
                }
            }
        }
    }

    for (i = 0; i < K; i++) 
    {
        for (j = 0; j < N - 1; j++) 
        {
            for (k = 0; k < N - j - 1; k++) 
            {
                if (x[i][k] > x[i][k + 1]) 
                {
                    temp = x[i][k];
                    x[i][k] = x[i][k + 1];
                    x[i][k + 1] = temp;
                }
            }
        }
    }

    for (i = 0; i < K; i++) {
        for (j = 0; j < N; j++) {
            printf("%d ", x[i][j]);
        }
        printf("\n");
    }

    return 0; 
}









int lr_7(void)
{
  int n;
  scanf("%d", &n);
  printf("n: "BYTE_TO_BINARY_PATTERN" "BYTE_TO_BINARY_PATTERN" "BYTE_TO_BINARY_PATTERN" "BYTE_TO_BINARY_PATTERN"\n",
    BYTE_TO_BINARY(n>>24),BYTE_TO_BINARY(n>>16),BYTE_TO_BINARY(n>>8), BYTE_TO_BINARY(n));
  int mask = 0b1111;
  int length = sizeof(int) << 1;
  for(int i = 0; i < length; i++)
  {
    int maskedValue = n & mask;
    maskedValue >>= (i << 2); 
    int newVal = 0;
    for(int j = 0; j < 3; j++)
    {
      int bit = maskedValue % 2;
      newVal += bit;
      newVal <<= 1;
      maskedValue >>= 1;
    }

    int bit = maskedValue % 2;
    newVal += bit;


    n = n & ~mask;
    n = n | (newVal << (i << 2));

    mask <<= 4;
  }

  printf("n: "BYTE_TO_BINARY_PATTERN" "BYTE_TO_BINARY_PATTERN" "BYTE_TO_BINARY_PATTERN" "BYTE_TO_BINARY_PATTERN"\n",
    BYTE_TO_BINARY(n>>24),BYTE_TO_BINARY(n>>16),BYTE_TO_BINARY(n>>8), BYTE_TO_BINARY(n));
}
