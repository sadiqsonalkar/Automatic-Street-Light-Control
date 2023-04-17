#include<reg51.h>
sbit sensor1 = P1^0;
sbit sensor2 = P1^1;
sbit sensor3 = P1^2;
// sensors on street

sbit load1 = P2^0;
sbit load2 = P2^1;
sbit load3 = P2^2;
// street light connections

void main()
{
	load1 = load2 = load3 = 0; // Initially all the load will be off
	sensor1 = sensor2 = sensor3 = 0; // Logic based on input of the sensor

	while (1)//it will run forever
	{
		if (sensor1 == sensor2 == sensor3 == 0) //if no one is walking 
		{
			load1 = 0; // street light 1 off
			load2 = 0; // street light 2 off
			load3 = 0; // street light 3 off
		}
		if (sensor1==1)
		{
			load1 = 1; // street light 1 on
			load2 = 0; // street light 2 off
			load3 = 0; // street light 3 off
		}
		if (sensor2==1)
		{
			load1 = 0; // street light 1 off
			load2 = 1; // street light 2 on
			load3 = 0; // street light 3 off
		}
		if (sensor3==1)
		{
			load1 = 0; // street light 1 off
			load2 = 0; // street light 2 off
			load3 = 1; // street light 3 on
		}
		if (sensor1 && sensor2 && sensor3 == 1)
		{
			load1 = 1; // street light 1 on
			load2 = 1; // street light 2 on
			load3 = 1; // street light 3 on
		}
	}
}