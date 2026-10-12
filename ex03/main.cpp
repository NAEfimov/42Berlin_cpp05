/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nefimov <nefimov@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/26 07:34:46 by nefimov           #+#    #+#             */
/*   Updated: 2026/10/12 14:15:33 by nefimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void)
{
    Intern intern;
    AForm *form;

    form = intern.makeForm("shrubbery creation", "garden");
	std::cout << *form << std::endl;
    delete form;
    
	form = intern.makeForm("robotomy request", "Bender");
	std::cout << *form << std::endl;
    delete form;
    
	form = intern.makeForm("presidential pardon", "Arthur Dent");
	std::cout << *form << std::endl;
    delete form;
    
	form = intern.makeForm("coffee request", "office");
    delete form;

    return 0;
}