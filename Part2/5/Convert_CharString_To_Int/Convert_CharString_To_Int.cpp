// Convert_CharString_To_Int.cpp : Author Jacobo Orozco Ardila
//In order to convert a char string into a signed integer I shall make use of the ASCII values of the decimal sistem digits (0-9) which start
//from 48-57. 
//The method is simple, one only needs to subtract 48 from the ASCII value fo the char, and that will output the corresponding digit for any given char.

#include <iostream>

int Convert_To_Int(char to_convert[])
{
    int converted_number = 0;
    int char_length = strlen(to_convert);

    for (int i = 0; i < char_length; i++)
    {
        converted_number = converted_number * 10 + (to_convert[i] - 48);
    }

    return converted_number;
}

int main()
{
    char to_convert[] = "1995";
    int converted_number;
    converted_number = Convert_To_Int(to_convert);
    printf("The converted number is: %d\n", converted_number);
    return 0;
}


