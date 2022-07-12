// Online C compiler to run C program online
#include <stdio.h>

int main() {
int i1,i2,i3,i4,i5,i6,i7,i8,d=0,isum=0,iavg=0,imean=0,min=0,max=0;
float f1,f2,f3,f4,f5,f6,f7,fsum=0,favg=0,fmean=0;
scanf("%d%d%d%d%d%d%d%d%f%f%f%f%f%f%f",&i1,&i2,&i3,&i4,&i5,&i6,&i7,&i8,&f1,&f2,&f3,&f4,&f5,&f6,&f7);
isum=i1+i2+i3+i4+i5+i6+i7+i8;
iavg=isum/8;
imean=iavg;
printf("sum =%d mean=%d average =%d",isum,imean,iavg);

fsum=(f1+f2+f3+f4+f5+f6+f7);
favg=fsum/8;
fmean=favg;
printf("sum =%f mean=%f average =%f",fsum,fmean,favg);
}
     