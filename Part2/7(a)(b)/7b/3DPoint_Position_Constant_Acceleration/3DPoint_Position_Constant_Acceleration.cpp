// 3DPoint_Position_Constant_Acceleration.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Given a 3D point starting at position P1 and moving with initial velocity vector V and constant acceleration vector A, 
//write an equation for the position P2 of the point after elapsed time t.

#include <iostream>

int main()
{
    //This shall be the points original position
    float point_original_position[3] = { -5.0,2.0,3.0 };
    //This shall be the constant velocity at which the point travels throgh the 3d space
    float initial_velocity[3] = { 4.0,6.0,5.0 };
    //This shall be the constant acceleration
    float constant_acceleration[3] = { 3.0,2.0,5.0 }; 
    //This shall be the elapsed time in which we shall determine the current position of set point
    float time_elapsed = 5.0;

    printf("The ecuation for the current point position can be described as follows: \n");
    printf("<%f * acceleration * t + %f>i + <%f * acceleration * t + %f>j + <%f * acceleration * t + %f>k \n", 
        initial_velocity[0], point_original_position[0], initial_velocity[1], point_original_position[1], initial_velocity[2], point_original_position[2]);

    printf("Since the elapsed time is 5 seconds, the position of the point shall be: \n");
    printf("<%f + %f>i + <%f  + %f>j + <%f + %f>k \n", initial_velocity[0] * constant_acceleration[0] * time_elapsed, point_original_position[0],
        initial_velocity[1] * constant_acceleration[1] * time_elapsed, point_original_position[1], 
        initial_velocity[2] * constant_acceleration[2] * time_elapsed, point_original_position[2]);

    printf("Since the elapsed time is 5 seconds, and after adding the final results, the position of the point shall be: \n");
    printf("<%f>i + <%f>j + <%f>k \n", initial_velocity[0] * constant_acceleration[0] * time_elapsed + point_original_position[0],
        initial_velocity[1] * constant_acceleration[1] * time_elapsed + point_original_position[1], 
        initial_velocity[2] * constant_acceleration[2] * time_elapsed + point_original_position[2]);
}


