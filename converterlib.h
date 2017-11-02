float cm_to_in(void)
{
    float cm = get_float("Number of centimeters:");
    float in = cm / 2.54;
    printf("\nThe number of inches is %.2f\n", in);
    return in;
}

float ft_to_cm(void)
{
    float ft = get_float("Number of feet: ");
    float cm = ft * 30.48;
    printf("\nThe number of centimeters is %.2f\n", cm);
    return cm;
}
