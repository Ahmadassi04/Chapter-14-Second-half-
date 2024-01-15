#include <iostream>
#include <string>

class Ball{
private:
    std::string color{"black"};
    double radius{10.0};

public:

    Ball()
        {
            print();
        }

    Ball(std::string c)
        :color{c}
        {
            print();
        }

        Ball(double r)
        :radius{r}
        {
            print();
        }

    Ball(std::string c,double r)
        :color{c},radius{r}
        {
            print();
        }
        void print(){
        std::cout << "Ball(" << color << ", " << radius << ")" << '\n';
        }

};

int main()
{
    Ball def{};
    Ball blue{ "blue" };
    Ball twenty{ 20.0 };
    Ball blueTwenty{ "blue", 20.0 };

    return 0;
}
