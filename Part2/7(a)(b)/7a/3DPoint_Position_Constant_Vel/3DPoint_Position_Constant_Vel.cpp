// 3DPoint_Position_Constant_Vel.cpp : Author Jacobo Orozco Ardila
// In this ocation I shall write the ecuation Given a 3D point starting at 
//position P1 and moving with constant velocity vector V, write an equation for position P2 of the point after elapsed time t.

#include <iostream>




int main()
{
    //This shall be the points original position
    float point_original_position[3] = { -5.0,2.0,3.0 };
    //This shall be the constant velocity at which the point travels throgh the 3d space
    float constant_velocity[3] = { 4.0,6.0,5.0 };
    //This shall be the elapsed time in which we shall determine the current position of set point
    float time_elapsed = 5.0;

    printf("The ecuation for the current point position can be described as follows: \n");
    printf("<%f * t + %f>i + <%f * t + %f>j + <%f * t + %f>k \n", 
        constant_velocity[0], point_original_position[0], constant_velocity[1], point_original_position[1], constant_velocity[2], point_original_position[2]);

    printf("Since the elapsed time is 5 seconds, the position of the point shall be: \n");
    printf("<%f + %f>i + <%f  + %f>j + <%f + %f>k \n", constant_velocity[0] * time_elapsed, point_original_position[0],
        constant_velocity[1] * time_elapsed, point_original_position[1], constant_velocity[2] * time_elapsed, point_original_position[2]);

    printf("Since the elapsed time is 5 seconds, and after adding the final results, the position of the point shall be: \n");
    printf("<%f>i + <%f>j + <%f>k \n", constant_velocity[0] * time_elapsed + point_original_position[0],
        constant_velocity[1] * time_elapsed + point_original_position[1], constant_velocity[2] * time_elapsed + point_original_position[2]);
}


