/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nefimov <nefimov@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/26 07:35:01 by nefimov           #+#    #+#             */
/*   Updated: 2026/09/26 22:26:20 by nefimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name) {
    if (grade > 150) {
        throw GradeTooLowException();
    }
    else if (grade < 1) {
        throw GradeTooHighException();
    }
    this->_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat& other) :
    _name(other._name), _grade(other._grade) {}

Bureaucrat::~Bureaucrat() {}
    
std::string Bureaucrat::getName() const {
    return (_name);
}

int Bureaucrat::getGrade() const {
    return (_grade);    
}
    
Bureaucrat& Bureaucrat::incrementGrade() {
    if (_grade - 1 < 1) {
        throw GradeTooHighException();
    }
    _grade = _grade - 1;
    return (*this);
}
Bureaucrat& Bureaucrat::decrementGrade() {
    if (_grade + 1 > 150) {
        throw GradeTooLowException();
    }
    _grade = _grade + 1;
    return (*this);
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
    return ("Grade is too high");
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
    return ("Grade is too low");
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &bur) {
    out << bur.getName() << ", bureaucrat grade " << bur.getGrade() << "."
        << std::endl;
    return (out);
}
