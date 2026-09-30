/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nefimov <nefimov@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 16:12:34 by nefimov           #+#    #+#             */
/*   Updated: 2026/09/30 22:51:40 by nefimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string target) 
    : AForm("Presidential Pardon Form", 25, 5), _target(target) {}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const {
    std::cout << this->getTarget() << " has been pardoned by Zaphod Beeblebrox."
              << std::endl; 
}

const std::string& PresidentialPardonForm::getTarget() const {
    return (_target);
}