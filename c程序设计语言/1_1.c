// #include<stdio.h>
// main()
// {
//     printf("hello,world\n");
// }

// #include<stdio.h>
// main()
// {
//     float fahr,celsius;
//     int lower,upper,step;
//     lower=0;
//     upper=300;
//     step=20;
//     fahr=lower;
//     printf("temperature convert\n");
//     while(fahr<=upper)
//     {
//         celsius=(5.0/9.0)*(fahr-32.0);
//         printf("%3.0f\t%6.2f\n",fahr,celsius);
//         fahr=fahr+step;
//     }
//     getchar();
// }

// #include<stdio.h>
// main()
// {
//     for(int fahr=300;fahr>=0;fahr=fahr-20){
//         printf("%3d %6.1f\n",fahr,(5.0/9.0)*(fahr-32));
//     }
// }

// #include<stdio.h>
// main(){
//     int c;
//     int nc=0;
//     while((c=getchar())!=EOF){
//         putchar(c);
//     }
// }

// #include<stdio.h>
// main(){
//     int c,nl;
//     nl=0;
//     while ((c=getchar())!=EOF)
//     {
//         if(c=='\n')
//         { 
//            ++nl;
//             printf("%d\n",nl);
//         }
//     }
//     printf("%d\n",nl);   
// }

// #include<stdio.h>
// main()
// {
//     int c;
//     int pre=0;
//     while((c=getchar())!=EOF)
//     {
//         if(c==' ')
//         {
//             if(pre)
//                 continue;
//             else
//             {
//                 pre=1;
//                 putchar(c);
//             }
//         }
//         else
//         {
//             pre=0;
//             putchar(c);
//         }
//     }
// }

#include<stdio.h>
#define IN 1
#define OUT 0
main()
{
    int c;
    int state=IN;
    while ((c=getchar())!=EOF)
    {
        if(c==' '||c=='\n'||c=='\t')
        {
            state=OUT;
        }
        else if(state==OUT)
        {
            state=IN;
            printf("\n");
        }
        if(state==IN){
            putchar(c);
        }
    }
    
}