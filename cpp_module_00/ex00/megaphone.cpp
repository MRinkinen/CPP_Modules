#include <iostream>

int main(int argc, char *argv[])
{
    int i = 1;
    if(argc == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return(EXIT_SUCCESS);
    }
    while (i < argc)
    {
        for(int x = 0; argv[i][x] != '\0'; x++)
        {
            char c;
            c = std::toupper(argv[i][x]);
            std::cout << c;
        }
        i++;
    }
    std::cout << std::endl;
    return (0);
}
