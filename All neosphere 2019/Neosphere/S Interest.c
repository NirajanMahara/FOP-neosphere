#include<stdio.h>
main()
 {
     int principle,time;
     float rate;
     float SI;
     printf("Enter the values of principal: ");
     scanf ("%d",&principle);
     printf("Enter the values of time: ");
     scanf ("%d",&time);
     printf("Enter the values of Rate: ");
     scanf ("%f",&rate);
     SI=(principle*rate*time)/100; //SI=P*T*R/100
     printf("------------------------------------------------\n");
     printf("Simple interest of given data is: %f",SI);
 }
