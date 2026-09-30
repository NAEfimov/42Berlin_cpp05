/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nefimov <nefimov@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 16:12:34 by nefimov           #+#    #+#             */
/*   Updated: 2026/09/30 23:26:13 by nefimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string const &target)
    : AForm("Presidential Pardon Form", 25, 5), _target(target) {}

PresidentialPardonForm::PresidentialPardonForm(
    PresidentialPardonForm const &other)
    : AForm(other), _target(other._target) {}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm &PresidentialPardonForm::operator=(
    PresidentialPardonForm const &other)
{
    if (this != &other)
        AForm::operator=(other);
    return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const &) const
{
    std::cout << _target << " has been pardoned by Zaphod Beeblebrox."
              << std::endl;
}