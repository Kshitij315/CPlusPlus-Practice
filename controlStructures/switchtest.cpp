#include <cstdio>

int main(void)
{
    short age;
    float rate;
    printf("Age: ");
    scanf("%hd", &age);
    
   
    /*
    if(age == 16)
        rate = 60;
    else if(age == 18)
        rate = 80;
    else if(age == 21)
        rate = 120;
    else if(age == 50)
        rate = 250;
    else
        rate = 50;
    */

   switch(age){

case 16:
			rate=60;
			break;
case 18:
			rate=80;
			break;
case 21:
			rate=120;
			break;
case 50:
			rate=250;
			break;
default:
			rate=50;
			


}

printf("TOtal gift amount=%.2lf\n",age*rate);

}
// #wap to take age and output voting

