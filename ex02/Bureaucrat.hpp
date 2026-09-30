/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nefimov <nefimov@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/26 07:35:04 by nefimov           #+#    #+#             */
/*   Updated: 2026/09/30 23:28:27 by nefimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <exception>
#include <iostream>
#include <string>

class AForm;

class Bureaucrat
{
public:
    Bureaucrat(std::string name, int grade);
    Bureaucrat(const Bureaucrat &other);
    ~Bureaucrat();

    Bureaucrat &operator=(Bureaucrat const &other);

    std::string getName() const;
    int getGrade() const;
    void incrementGrade();
    void decrementGrade();

    void executeForm(AForm const &form) const;

    class GradeTooHighException : public std::exception
    {
    public:
        virtual const char *what() const throw();
    };

    class GradeTooLowException : public std::exception
    {
    public:
        virtual const char *what() const throw();
    };

private:
    Bureaucrat();
    const std::string _name;
    int _grade;
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &bur);

#endif // BUREAUCRAT_HPP
