/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nefimov <nefimov@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/27 19:19:43 by nefimov           #+#    #+#             */
/*   Updated: 2026/09/30 23:26:51 by nefimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class AForm
{
public:
    AForm(std::string name, int gr_to_sign, int gr_to_exec);
    AForm(const AForm &other);
    virtual ~AForm();

    AForm &operator=(const AForm &other);

    const std::string &getName() const;
    bool getIsSigned() const;
    int getGradeToSign() const;
    int getGradeToExec() const;

    void signForm(const Bureaucrat &bur);
    virtual void execute(Bureaucrat const &executor) const = 0;
    void executeForm(Bureaucrat const &executor) const;

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

    class NotSignedException : public std::exception
    {
    public:
        virtual const char *what() const throw();
    };

private:
    AForm();

    const std::string _name;
    bool _is_signed;
    const int _grade_to_sign;
    const int _grade_to_exec;

    void beSigned(const Bureaucrat &bur);
};

std::ostream &operator<<(std::ostream &out, const AForm &form);

#endif