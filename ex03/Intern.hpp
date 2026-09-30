/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nefimov <nefimov@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 23:40:12 by nefimov           #+#    #+#             */
/*   Updated: 2026/09/30 23:43:44 by nefimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include <string>

class AForm;

class Intern
{
public:
    Intern();
    Intern(Intern const &other);
    ~Intern();

    Intern &operator=(Intern const &other);

    AForm *makeForm(std::string const &formName,
                    std::string const &target) const;
};

#endif