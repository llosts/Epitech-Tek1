/*
** EPITECH PROJECT, 2024
** get_color
** File description:
** returns the color as an int by handling its three RGB components
*/

int get_color(unsigned char red, unsigned char green, unsigned blue)
{
    int color = 0;

    color |= (red << 16);
    color |= (green << 8);
    color |= blue;
    return color;
}
