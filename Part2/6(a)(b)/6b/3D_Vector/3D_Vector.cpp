// 3D_Vector.cpp : Author Jacobo Orozco Ardila
// In this oportunity I shall give the ecuation of the angle between a 3d vector and the xy plane
#define _USE_MATH_DEFINES
#include <iostream>
#include <math.h>

float Angle_Vector_XYplane(float vector_magnitud, float xy_plane_magnitud, float vector_xy_point_product)
{
    float angle = 0.0;
    float magnitud_multiplication = vector_magnitud * xy_plane_magnitud;

    printf("The magnitud multiplication: %f \n", magnitud_multiplication);
    printf("The point product: %f \n", vector_xy_point_product);
    float division = magnitud_multiplication / vector_xy_point_product;
    angle = asin(division * M_PI/180);
    printf("The angle is: %f \n", angle);
    return angle;
}

float Point_Product(float vector[], float xy_plane[])
{
    float point_product = 0.0;

    for (int i = 0; i < 3 ; i++)
    {
        point_product += vector[i] * xy_plane[i];
    }
    printf("The point product is: %f \n", point_product);
    return point_product;
}

float Magnitud(float data[])
{
    float magnitud = 0.0;
    printf("Array size: %d \n", sizeof(data));
    for (int i = 0; i < 3 ; i++)
    {
        magnitud += data[i] * data[i];
    }

    magnitud = sqrt(magnitud);
    printf("The magnitud of the data is: %f \n", magnitud);
    return magnitud;
}


int main()
{
    float vector[3] = {1,6,-5};
    float xy_plane[3] = {0,0,1};

    float vector_magnitud = Magnitud(vector);
    float xy_plane_magnitud = Magnitud(xy_plane);

    float vector_xy_point_product = Point_Product(vector, xy_plane);

    float angle_vector_xyplane = Angle_Vector_XYplane(vector_magnitud, xy_plane_magnitud, vector_xy_point_product);


    printf("The angle between the 3d vector and the xy plane is: %f \n", angle_vector_xyplane);


}

