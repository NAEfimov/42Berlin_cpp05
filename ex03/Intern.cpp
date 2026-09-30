/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nefimov <nefimov@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 23:40:08 by nefimov           #+#    #+#             */
/*   Updated: 2026/09/30 23:41:42 by nefimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <iostream>

namespace
{
    typedef AForm *(*FormCreator)(std::string const &target);

    AForm *createShrubbery(std::string const &target)
    {
        return new ShrubberyCreationForm(target);
    }

    AForm *createRobotomy(std::string const &target)
    {
        return new RobotomyRequestForm(target);
    }

    AForm *createPardon(std::string const &target)
    {
        return new PresidentialPardonForm(target);
    }
}

Intern::Intern() {}

Intern::Intern(Intern const &)
{
}

Intern::~Intern() {}

Intern &Intern::operator=(Intern const &)
{
    return *this;
}

AForm *Intern::makeForm(std::string const &formName,
                        std::string const &target) const
{
    static const std::string names[] = {
        "shrubbery creation",
        "robotomy request",
        "presidential pardon"
    };
    static FormCreator creators[] = {
        createShrubbery,
        createRobotomy,
        createPardon
    };

    for (std::size_t i = 0; i < sizeof(names) / sizeof(names[0]); ++i)
    {
        if (formName == names[i])
        {
            std::cout << "Intern creates " << formName << std::endl;
            return creators[i](target);
        }
    }
    std::cerr << "Intern cannot create unknown form: "
              << formName << std::endl;
    return NULL;
}
