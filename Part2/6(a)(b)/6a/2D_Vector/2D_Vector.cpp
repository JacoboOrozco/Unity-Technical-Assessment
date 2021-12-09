// 2D_Vector.cpp : Author Jacobo Orozco Ardila
//

#include <iostream>
#include <math.h>

float X_Component(float vector_magnitud, float theta)
{
	float x_component;
	x_component = vector_magnitud * cos(theta);
	return x_component;
}

float Y_Component(float vector_magnitud, float theta)
{
	float y_component;
	y_component = vector_magnitud * sin(theta);
	return y_component;
}

int main()
{
	float vector_magnitud = 10.0;
	float theta = 60.0;

	float x_component;
	float y_component; 

	x_component = X_Component(vector_magnitud, theta);
	y_component = Y_Component(vector_magnitud, theta);

	printf("The 2D Vector components are <%f,%f> \n", x_component, y_component);
}


