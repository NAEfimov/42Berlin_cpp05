/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nefimov <nefimov@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/27 19:19:43 by nefimov           #+#    #+#             */
/*   Updated: 2026/09/27 19:36:02 by nefimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Form {
  public:
    Form();
    Form(const Form& other);
    ~Form();
    
    Form& operator=(const Form& other);
    
    std::string& getName() const;
    bool getIsSigned() const;
    int getGradeToSign() const;
    int getGradeToExec() const;

    void beSigned();
    
    class GradeTooHighException : public std::exception {
      public:
        virtual const char *what() const throw();
    };

    class GradeTooLowException : public std::exception {
      public:
        virtual const char *what() const throw();  
    };
    
  private:
    const std::string _name;
    bool _is_signed;
    const int _grade_to_sign;
    const int _grade_to_exec;    
};

std::ostream& operator<<(std::ostream& out, const Form& form);

#endif