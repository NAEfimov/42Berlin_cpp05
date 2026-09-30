/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nefimov <nefimov@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 16:12:37 by nefimov           #+#    #+#             */
/*   Updated: 2026/09/30 23:26:28 by nefimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"
#include <string>

class RobotomyRequestForm : public AForm
{
public:
    RobotomyRequestForm(std::string const &target);
    RobotomyRequestForm(RobotomyRequestForm const &other);
    ~RobotomyRequestForm();

    RobotomyRequestForm &operator=(RobotomyRequestForm const &other);

    void execute(Bureaucrat const &executor) const;

private:
    RobotomyRequestForm();
    const std::string _target;
};

#endif