/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nefimov <nefimov@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/26 07:34:46 by nefimov           #+#    #+#             */
/*   Updated: 2026/09/30 23:28:54 by nefimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <ctime>
#include <iostream>
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void)
{
    Bureaucrat president("President", 1);
    Bureaucrat manager("Manager", 46);
    Bureaucrat gardener("Gardener", 138);
    std::cout << std::endl;

    ShrubberyCreationForm shrubbery("test");
    RobotomyRequestForm robotomy("Bender");
    PresidentialPardonForm pardon("Arthur Dent");
    std::cout << std::endl;

    shrubbery.signForm(gardener);
    std::cout << "---------" << std::endl;
    gardener.executeForm(shrubbery);
    manager.executeForm(shrubbery);
    std::cout << std::endl;

    std::srand(std::time(NULL));
    robotomy.signForm(gardener);
    robotomy.signForm(manager);
    std::cout << "---------" << std::endl;
    manager.executeForm(robotomy);
    president.executeForm(robotomy);
    std::cout << std::endl;

    pardon.signForm(gardener);
    pardon.signForm(manager);
    pardon.signForm(president);
    std::cout << "---------" << std::endl;
    president.executeForm(pardon);

    return 0;
}