#include "pch.h"
#include <iostream>
#include <math.h>
void linear_equation(float a, float b)
{
	if (a > 0)
	{
		printf("%s | %c%c\t\t\t\t\t%c%c", "x", 45, 236, 43, 236);
		std::cout << "\n____________________________________________\n";
		printf("%s | %s%s\t\t\t\t\t%c%c", "y", " ", " ", 43, 236);
		printf("\n");
		printf("%s | %c%c\t\t\t\t\t%s%s", " ", 45, 236, " ", " ");
	}
	else {
		printf("%s | %c%c\t\t\t\t\t%c%c", "x", 45, 236, 43, 236);
		std::cout << "\n____________________________________________\n";
		printf("%s | %c%c\t\t\t\t\t%s%s", "y", 43, 236, " ", " ");
		printf("\n");
		printf("%s | %s%s\t\t\t\t\t%c%c", " ", " ", " ", 45, 236);
	}
}

void quadratic_equation(float a, float b, float c)
{
	float x0 = -b / 2 * a;
	float delta = b * b - 4 * a*c;
	float y0 = -delta / 4 * a;
	if (a > 0)
	{
		printf("%s | %c%c\t\t    %.3f\t\t   %c%c", "x", 45, 236, x0, 43, 236);
		std::cout << "\n____________________________________________\n";
		printf("%s | %c%c\t\t\t\t\t   %c%c", " ", 43, 236, 43, 236);
		printf("\n");
		printf("%s | %s%s\t\t\t\t\t%s%s", "y", " ", " ", " ", " ");
		printf("\n");
		printf("%s | %s%s\t\t     %.3f\t\t    %s%s", " ", " ", " ", y0, " ", " ");
	}
	else
	{
		printf("%s | %c%c\t\t    %.3f\t\t   %c%c", "x", 45, 236, x0, 43, 236);
		std::cout << "\n____________________________________________\n";
		printf("%s | %s%s\t\t     %.3f\t\t    %s%s", " ", " ", " ", y0, " ", " ");
		printf("\n");
		printf("%s | %s%s\t\t\t\t\t%s%s", "y", " ", " ", " ", " ");
		printf("\n");
		printf("%s | %c%c\t\t\t\t\t   %c%c", " ", 45, 236, 45, 236);
	}
}
void cubic_equation(float a, float b, float c, float d)
{
	float deltaprime = b * b - 3 * a*c;
	float xCD = (-b - sqrt(deltaprime)) / 3 * a, xCT = (-b + sqrt(deltaprime)) / 3 * a;
	float yCD = a * pow(xCD, 3) + b * pow(xCD, 2) + c * xCD + d, yCT = a * pow(xCT, 3) + b * pow(xCT, 2) + c * xCT + d;
	if (a > 0 && deltaprime > 0) {
		printf("%s | %c%c\t\t %.3f\t     %.3f        %c%c", "x", 45, 236, xCD, xCT, 43, 236);
		std::cout << "\n____________________________________________\n";
		printf("%s |      %c\t %.3f\t-    %.3f     +  ", "y'", 43, 0, 0);
		std::cout << "\n____________________________________________\n";
		printf("%s |      \t %.3f\t                  %c%c", "y", yCD, 43, 236);
		printf("\n");
		printf("%s | %c%c\t\t\t     %.3f", " ", 45, 236, yCT);
	}
	else if (a < 0 && deltaprime>0) {
		printf("%s | %c%c\t\t %.3f\t     %.3f        %c%c", "x", 45, 236, xCT, xCD, 43, 236);
		std::cout << "\n____________________________________________\n";
		printf("%s |      %c\t %.3f\t+    %.3f     -  ", "y'", 45, 0, 0);
		std::cout << "\n____________________________________________\n";
		printf("%s | %c%c\t\t\t     %.3f", " ", 43, 236, yCD);
		printf("\n");
		printf("%s |      \t %.3f\t                  %c%c", "y", yCT, 45, 236);
	}
	else if (a > 0 && deltaprime <= 0) {
		printf("%s | %c%c\t\t              \t\t  %c%c", "x", 45, 236, 43, 236);
		std::cout << "\n____________________________________________\n";
		printf("%s|        \t     \t+               ", "y'");
		std::cout << "\n____________________________________________\n";
		printf("%s | \t\t\t                  %c%c", "y", 43, 236);
		printf("\n");
		printf("%s | %c%c                ", " ", 45, 236);
	}
	else if (a < 0 && deltaprime <= 0) {
		printf("%s | %c%c\t\t              \t\t  %c%c", "x", 45, 236, 43, 236);
		std::cout << "\n____________________________________________\n";
		printf("%s|        \t     \t-               ", "y'");
		std::cout << "\n____________________________________________\n";
		printf("%s | %c%c                ", "y", 43, 236);
		printf("\n");
		printf("%s | \t\t\t                  %c%c", " ", 45, 236);
	}
}
void biquadratic_equation(float a, float b, float c)
{
	float x0 = 0, x1 = -sqrt(-b / 2 * a), x2 = sqrt(-b / 2 * a);
	float y1 = a * pow(x1, 4) + b * pow(x1, 2) + c, y2 = a * pow(x2, 4) + b * pow(x2, 2) + c;
	if (a > 0 && b >= 0) {
		printf("%s | %c%c\t\t        0      \t\t  %c%c", "x", 45, 236, 43, 236);
		std::cout << "\n____________________________________________\n";
		printf("%s|     \t-       0       +    ", "y'");
		std::cout << "\n____________________________________________\n";
		printf("%s | %c%c                  \t\t  %c%c", "y", 43, 236, 43, 236);
		printf("\n");
		printf("%s |    \t             %.3f            ", " ", c);
	}
	else if (a < 0 && b <= 0) {
		printf("%s | %c%c\t\t        0      \t\t  %c%c", "x", 45, 236, 43, 236);
		std::cout << "\n____________________________________________\n";
		printf("%s|     \t+       0       -    ", "y'");
		std::cout << "\n____________________________________________\n";
		printf("%s |    \t             %.3f            ", "y", c);
		printf("\n");
		printf("%s | %c%c                  \t\t  %c%c", " ", 45, 236, 45, 236);
	}
	else if (a > 0 && b < 0) {
		printf("%s | %c%c\t     %.3f       0     %.3f   \t  %c%c", "x", 45, 236,x1, x2, 43, 236);
		std::cout << "\n____________________________________________\n";
		printf("%s|     -      0    +    0   -   0      +    ", "y'");
		std::cout << "\n____________________________________________\n";
		printf("%s | %c%c                 %.3f              %c%c", "y", 43, 236, c, 43, 236);
		printf("\n");
		printf("%s |\t    %.3f                %.3f", " ", y1, y2);
	}
	else if (a < 0 && b>0) {
		printf("%s | %c%c\t     %.3f       0     %.3f   \t  %c%c", "x", 45, 236, x1, x2, 43, 236);
		std::cout << "\n____________________________________________\n";
		printf("%s|     +      0    -    0   +   0      -    ", "y'");
		std::cout << "\n____________________________________________\n";
		printf("%s |\t    %.3f                %.3f", "y", y1, y2);
		printf("\n");
		printf("%s | %c%c                 %.3f              %c%c", " ", 45, 236, c, 45, 236);
	}
}
void rational_function_1(float a, float b, float c, float d)
{
	float checker = a * d - b * c;
	float x0 = -d / c, y0 = a / c;
	if (checker < 0) {
		printf("%s | %c%c\t            %.3f            \t  %c%c", "x", 45, 236, x0, 43, 236);
		std::cout << "\n____________________________________________\n";
		printf("%s|     -             ||            -    ", "y'");
		std::cout << "\n____________________________________________\n";
		printf("%s | %c%c                || %.3f                ", "y", 43, 236, y0);
		printf("\n");
		printf("%s |             %.3f ||             %c%c", " ", y0, 45, 236);
	}else{
		printf("%s | %c%c\t            %.3f            \t  %c%c", "x", 45, 236, x0, 43, 236);
		std::cout << "\n____________________________________________\n";
		printf("%s|     +             ||            +    ", "y'");
		std::cout << "\n____________________________________________\n";
		printf("%s |             %.3f ||                  %c%c", "y", y0, 43, 236);
		printf("\n");
		printf("%s | %c%c                || %.3f                ", " ", 45, 236, y0);
	}
}
void rational_function_2(float a, float b, float c) {
	float deltaprime = pow(a, 3)*c;
	float xk = -b / a, x1 = xk - sqrt(deltaprime) / a * a, x2 = xk + sqrt(deltaprime) / a * a;
	float y1 = (a*x1*x1 + b * x1 + c) / (a*x1 + b), y2 = (a*x2*x2 + b * x2 + c) / (a*x2 + b);
	if (a > 0 && deltaprime <= 0) {
		printf("%s | %c%c\t            %.3f            \t  %c%c", "x", 45, 236, xk, 43, 236);
		std::cout << "\n____________________________________________\n";
		printf("%s|     +             ||            +    ", "y'");
		std::cout << "\n____________________________________________\n";
		printf("%s |                %c%c ||                  %c%c", "y", 43, 236, 43, 236);
		printf("\n");
		printf("%s | %c%c                || %c%c                ", " ", 45, 236, 45, 236);
	}
	else if (a < 0 && deltaprime <= 0) {
		printf("%s | %c%c\t            %.3f            \t  %c%c", "x", 45, 236, xk, 43, 236);
		std::cout << "\n____________________________________________\n";
		printf("%s|     -             ||            -    ", "y'");
		std::cout << "\n____________________________________________\n";
		printf("%s | %c%c                || %c%c                ", "y", 45, 236, 45, 236);
		printf("\n");
		printf("%s |                %c%c ||                  %c%c", " ", 43, 236, 43, 236);
	}
	else if (a > 0 && deltaprime > 0) {
		printf("%s | %c%c\t  %.2f       %.2f      %.2f   \t  %c%c", "x", 45, 236, x1, xk, x2, 43, 236);
		std::cout << "\n____________________________________________\n";
		printf("%s|     +   0   -     ||     -  0  +  ", "y'");
		std::cout << "\n____________________________________________\n";
		printf("%s |       %.2f        || %c%c               %c%c", "y", y1, 43, 236, 43, 236);
		printf("\n");
		printf("%s | %c%c             %c%c ||        %.2f            ", " ", 45, 236, 45, 236, y2);
	}
	else if (a < 0 && deltaprime>0) {
		printf("%s | %c%c\t  %.2f       %.2f      %.2f   \t  %c%c", "x", 45, 236, x1, xk, x2, 43, 236);
		std::cout << "\n____________________________________________\n";
		printf("%s|     -   0   +     ||     +  0  -  ", "y'");
		std::cout << "\n____________________________________________\n";
		printf("%s | %c%c             %c%c ||        %.2f            ", "y", 43, 236, 43, 236, y1);
		printf("\n");
		printf("%s |       %.2f        || %c%c               %c%c", " ", y2, 45, 236, 45, 236);
	}
}
int main()
{
	float a = 2, b = 4, c = 7;
	quadratic_equation(a, b, c);

	return 0;
}
