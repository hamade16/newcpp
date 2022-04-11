#include "Karen.hpp"

Karen::Karen ( void )
{
}

Karen::~Karen ( void )
{
}

void Karen::complain ( std::string level )
{
   
    std::string array[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    typedef void ( Karen::*KarenPtr )( void );
    KarenPtr funcPtr[4] = { &Karen::debug, &Karen::info, &Karen::warning, &Karen::error};

    for (int i = 0; i < 4; i++)
    {
        while (level == array[i])
        {
            (this->*funcPtr[i])();
            return ;
        }
    }
    (this->*funcPtr[3])();  
}

void Karen::debug( void )
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do !" << std::endl;
}

void Karen::info( void )
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl;
}

void Karen::warning( void )
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Karen::error( void )
{
    std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
}
