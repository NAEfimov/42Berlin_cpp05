/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nefimov <nefimov@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/27 19:19:23 by nefimov           #+#    #+#             */
/*   Updated: 2026/09/28 00:04:47 by nefimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string name, int gr_to_sign, int gr_to_exec) :
    _name(name), _is_signed(false), _grade_to_sign(gr_to_sign),
    _grade_to_exec(gr_to_exec) {
    if (gr_to_sign < 1 || gr_to_exec < 1) {
        throw GradeTooHighException();
    }
    if (gr_to_sign > 150 || gr_to_exec > 150) {
        throw GradeTooLowException();
    }
}

Form::Form(const Form& other) :
    _name(other._name), _is_signed(other._is_signed),
    _grade_to_sign(other._grade_to_sign), _grade_to_exec(other._grade_to_exec) {}

Form::~Form() {}

Form& Form::operator=(const Form& other) {
    if (this != &other) {
        _is_signed = other._is_signed;
    }
    return (*this);
}

const std::string& Form::getName() const {
    return (_name);
}

bool Form::getIsSigned() const {
    return (_is_signed);
}

int Form::getGradeToSign() const {
    return (_grade_to_sign);
}

int Form::getGradeToExec() const {
    return (_grade_to_exec);
}

void Form::beSigned(const Bureaucrat& bur) {
    if (bur.getGrade() > _grade_to_sign) {
        throw GradeTooLowException();
    }
    _is_signed = true;
}
void Form::signForm(const Bureaucrat& bur) {
    try
    {
        this->beSigned(bur);
        std::cout << bur.getName() << " signed " << this->_name;
    }
    catch(const std::exception& e)
    {
        std::cout << bur.getName() << " couldn’t sign " << this->_name
                  << " because " << e.what() << std::endl;
    }
}

const char *Form::GradeTooHighException::what() const throw() {
    return ("Grade is too high");
}

const char *Form::GradeTooLowException::what() const throw() {
    return ("Grade is too low");
}

std::ostream& operator<<(std::ostream& out, const Form& form) {
    out << form.getName() << ", form grade to sign " << form.getGradeToSign()
        << ", grade to execute " << form.getGradeToExec() << ", "
        << (form.getIsSigned() ? "signed" : "not signed") << "."
        << std::endl;
    return (out);
}
