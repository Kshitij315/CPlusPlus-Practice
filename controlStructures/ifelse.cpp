#include<cstdio>
int main(void)
{
float width ,height;
short count;

printf("Dimensions of banner: ");
scanf("%f%f", &width ,&height);
printf("Number of banners");
scanf("%hd",&count);

double area=width*height;
if(width>height){
	printf("Total payment for landscape banner:%.2f\n",count*area*0.80);

}else
{
printf("Total payment for portrait banner:%.2f\n",count*area*0.75);
}
puts("GoodBye");
}