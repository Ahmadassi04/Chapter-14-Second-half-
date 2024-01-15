#include <iostream>

class Ball{
private:
    std::string color{};
    double radius{};

public:
    Ball(std::string c,double r)
        :color{c},radius{r}
        {
        }

    void print(Ball& b){

        std::cout << "Ball(" << color << ", " << radius << ")" << '\n';
    }
};

int main()
{
	Ball blue{ "blue", 10.0 };
	blue.print(blue);

	Ball red{ "red", 12.0 };
	red.print(red);

	return 0;
}
