/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nefimov <nefimov@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/27 19:19:23 by nefimov           #+#    #+#             */
/*   Updated: 2026/09/30 22:55:16 by nefimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(std::string name, int gr_to_sign, int gr_to_exec) :
    _name(name), _is_signed(false), _grade_to_sign(gr_to_sign),
    _grade_to_exec(gr_to_exec) {
    if (gr_to_sign < 1 || gr_to_exec < 1) {
        throw GradeTooHighException();
    }
    if (gr_to_sign > 150 || gr_to_exec > 150) {
        throw GradeTooLowException();
    }
}

AForm::AForm(const AForm& other) :
    _name(other._name), _is_signed(other._is_signed),
    _grade_to_sign(other._grade_to_sign), _grade_to_exec(other._grade_to_exec) {}

AForm::~AForm() {}

AForm& AForm::operator=(const AForm& other) {
    if (this != &other) {
        _is_signed = other._is_signed;
    }
    return (*this);
}

const std::string& AForm::getName() const {
    return (_name);
}

bool AForm::getIsSigned() const {
    return (_is_signed);
}

int AForm::getGradeToSign() const {
    return (_grade_to_sign);
}

int AForm::getGradeToExec() const {
    return (_grade_to_exec);
}

void AForm::beSigned(const Bureaucrat& bur) {
    if (bur.getGrade() > _grade_to_sign) {
        throw GradeTooLowException();
    }
    _is_signed = true;
}
void AForm::signForm(const Bureaucrat& bur) {
    try
    {
        this->beSigned(bur);
        std::cout << bur.getName() << " signed " << this->_name << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << bur.getName() << " couldn’t sign " << this->_name
                  << " because " << e.what() << std::endl;
    }
}

void AForm::executeForm(const Bureaucrat& executor) const {
    if (!_is_signed)
        throw NotSignedException();
    if (this->getGradeToExec() < _grade_to_exec)
        throw GradeTooLowException();
    this->execute(executor);
}

const char *AForm::GradeTooHighException::what() const throw() {
    return ("Grade is too high");
}

const char *AForm::GradeTooLowException::what() const throw() {
    return ("Grade is too low");
}

const char *AForm::NotSignedException::what() const throw() {
    return ("Form is not signed");
}

std::ostream& operator<<(std::ostream& out, const AForm& form) {
    out << form.getName() << ", form grade to sign " << form.getGradeToSign()
        << ", grade to execute " << form.getGradeToExec() << ", "
        << (form.getIsSigned() ? "signed" : "not signed") << "."
        << std::endl;
    return (out);
}
