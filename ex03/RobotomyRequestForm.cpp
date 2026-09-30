/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nefimov <nefimov@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 16:12:34 by nefimov           #+#    #+#             */
/*   Updated: 2026/09/30 23:26:25 by nefimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <cstdlib>
#include <iostream>

RobotomyRequestForm::RobotomyRequestForm(std::string const &target)
    : AForm("Robotomy Request Form", 72, 45), _target(target) {}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &other)
    : AForm(other), _target(other._target) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm &RobotomyRequestForm::operator=(
    RobotomyRequestForm const &other)
{
    if (this != &other)
        AForm::operator=(other);
    return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const &) const
{
    std::cout << "Bzzzzzzzz... drilling noises..." << std::endl;
    if (std::rand() % 2 == 0)
        std::cout << _target << " has been robotomized successfully."
                  << std::endl;
    else
        std::cout << "The robotomy of " << _target << " failed."
                  << std::endl;
}
