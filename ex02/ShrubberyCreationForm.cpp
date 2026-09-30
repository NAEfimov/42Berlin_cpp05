/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nefimov <nefimov@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 16:12:34 by nefimov           #+#    #+#             */
/*   Updated: 2026/09/30 23:26:35 by nefimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>
#include <stdexcept>

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target)
    : AForm("Shrubbery Creation Form", 145, 137), _target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(
    ShrubberyCreationForm const &other)
    : AForm(other), _target(other._target) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(
    ShrubberyCreationForm const &other)
{
    if (this != &other)
        AForm::operator=(other);
    return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const &) const
{
    std::ofstream file((_target + "_shrubbery").c_str());
    if (!file)
        throw std::runtime_error("Could not create shrubbery file");
    file << "       /\\\n"
         << "      /  \\\n"
         << "     /++++\\\n"
         << "    /  ()  \\\n"
         << "    --------\n";
}
