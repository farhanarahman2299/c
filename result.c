#include<stdio.h>
void main()
{
         int m1,m2,m3,m4,m5,total;
         float per;

         printf("Enter 5 subject markes.\n");
         printf("Physics : ");
         scanf("%D",&m1);
         printf("Chemistry : ");
         scanf("%D",&m2);
         printf("Math : ");
         scanf("%D",&m3);
         printf("English : ");
         scanf("%D",&m4);
         printf("Biology : ");
         scanf("%D",&m5);

         printf("\n\nOutput: \n\nSubject \tMark \tRank\n\n");

                  if(m1<40)
                 printf("Physics :\t%d\tfail\n",m1);
        else if(m1>=40&&m1<55)
                 printf("Physics :\t%d\tpass & third division\n",m1);
        else if(m1>=55&&m1<65)
                 printf("Physics :\t%d\tsecond division \n",m1);
        else if(m1>=65&&m1<80)
                 printf("Physics :\t%d\tfirst division \n",m1);
        else if(m1>=80&&m1<95)
                 printf("Physics :\t%d\tDistinction\n",m1);
      else if(m1>=95&&m1<=100)
                 printf("Physics :\t%d\textra ordinary\n",m1);

                if(m2<40)
                 printf("chemistry :\t%d\tfail\n",m2);
        else if(m2>=40&&m2<55)
                 printf("chemistry :\t%d\tpass & third division\n",m2);
        else if(m2>=55&&m2<65)
                 printf("chemistry :\t%d\tsecond division\n",m2);
        else if(m2>=65&&m2<80)
                 printf("chemistry :\t%d\tfirst division\n",m2);
        else if(m2>=80&&m2<95)
                 printf("chemistry :\t%d\tDistinction\n",m2);
      else if(m2>=95&&m2<=100)
                 printf("chemistry :\t%d\textra ordinary\n",m2);

                          if(m3<40)
                 printf("Math : \t\t%d\tfail\n",m3);
        else if(m3>=40&&m3<55)
                 printf("Math : \t\t%d\t pass & third division\n",m3);
        else if(m3>=55&&m3<65)
                 printf("Math : \t\t%d\tsecond division\n",m3);
        else if(m3>=65&&m3<80)
                 printf("Math : \t\t%d\tfirst division\n",m3);
        else if(m3>=80&&m3<95)
                 printf("Math : \t\t%d\tDistinction\n",m3);
      else if(m3>=95&&m3<=100)
                 printf("Math : \t\t%d\textra ordinary\n",m3);

                  if(m4<40)
                 printf("English :\t%d\tfail\n",m4);
        else if(m4>=40&&m4<55)
                 printf("English :\t%d\tpass & third division\n",m4);
        else if(m4>=55&&m4<65)
                 printf("English :\t%d\tsecond division\n",m4);
        else if(m4>=65&&m4<80)
                 printf("English :\t%d\tfirst division\n",m4);
        else if(m4>=80&&m4<95)
                 printf("English :\t%d\tDistinction\n",m4);
      else if(m4>=95&&m4<=100)
                 printf("English :\t%d\textra ordinary \n",m4);
                          if(m5<40)
                 printf("Biology :\t%d\tfail\n",m5);
        else if(m5>=40&&m5<55)
                 printf("Biology :\t%d\tpass & third division\n",m5);
        else if(m5>=55&&m5<65)
                 printf("Biology :\t%d\tsecond division\n",m5);
        else if(m5>=65&&m5<80)
                 printf("Biology :\t%d\tfirst division\n",m5);
        else if(m5>=80&&m5<95)
                 printf("Biology :\t%d\tDistinction\n",m5);
      else if(m5>=95&&m5<=100)
                 printf("Biology :\t%d\textra ordinary\n",m5);

         total=m1+m2+m3+m4+m5;
         per=total*100/500;

        if(per<40)
                 printf("\n Total\n\tMark = %d\tParcent = %f\tRank = fail\n",total,per);
        else if(per>=40&&per<55)
                 printf("\n Total\n\tMark = %d\tParcent = %f\tRank = pass & third division\n",total,per);
        else if(per>=55&&per<65)
                 printf("\n Total\n\tMark = %d\tParcent = %f\tRank = second division\n",total,per);
        else if(per>=65&&per<80)
                 printf("\n Total\n\tMark = %d\tParcent = %f\tRank = first division\n",total,per);
        else if(per>=80&&per<95)
                 printf("\n Total\n\tMark = %d\tParcent = %f\tRank = Distinction\n",total,per);
      else if(per>=95&&per<=100)
                 printf("\n Total:\n\tMark = %d\tParcent = %f\tRank = extra ordinary\n",total,per);

    return 0;
}
