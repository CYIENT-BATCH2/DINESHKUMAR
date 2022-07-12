// Online C compiler to run C program online

/*
1.read all inputs of 8 int and 7 float values.
2.calculate sum of int and float variables
3.avg =sum/ no.of elements.
4.mean=avg/2 .
5.isum/fsum
6.iavg/favg
7.print float varibles in %d format
*/

#include <stdio.h>

int main() {
int i1,i2,i3,i4,i5,i6,i7,i8,d=0,isum=0,iavg=0,imean=0,imin=0,imax=0,fmin=0,fmax=0;
float f1,f2,f3,f4,f5,f6,f7,fsum=0,favg=0,fmean=0,SDEV=0,ADEV=0;
scanf("%d%d%d%d%d%d%d%d%f%f%f%f%f%f%f",&i1,&i2,&i3,&i4,&i5,&i6,&i7,&i8,&f1,&f2,&f3,&f4,&f5,&f6,&f7);

    
    isum=i1+i2+i3+i4+i5+i6+i7+i8;
    iavg=isum/8;
   
    imean=(iavg/2);
printf("sum =%d mean=%d average =%d",isum,imean,iavg);

fsum=(f1+f2+f3+f4+f5+f6+f7);
favg=fsum/7;
fmean=(favg/2);
printf("sum =%f mean=%f average =%f",fsum,fmean,favg);
     SDEV=(isum/fsum);
      ADEV=(iavg/favg);
  printf("%f%f",SDEV,ADEV); 
    
    
    printf("%d%d%d%d%d%d%d",f1,f2,f3,f4,f5,f6,f7);
}
     
