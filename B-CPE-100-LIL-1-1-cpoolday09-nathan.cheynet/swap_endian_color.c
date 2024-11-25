/*
** EPITECH PROJECT, 2024
** swap_endian_color
** File description:
** changes the endianness of the color and returns it
*/

int swap_endian_color(int color)
{
    unsigned char my_red = (color >> 16) & 0xFF;
    unsigned char my_green = (color >> 8) & 0xFF;
    unsigned char my_blue = color & 0xFF;
    int my_swapped_color = 0;

    my_swapped_color |= (my_blue << 16);
    my_swapped_color |= (my_green << 8);
    my_swapped_color |= my_red;
    return my_swapped_color;
}
