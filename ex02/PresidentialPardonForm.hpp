/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nefimov <nefimov@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 16:12:37 by nefimov           #+#    #+#             */
/*   Updated: 2026/09/30 17:27:38 by nefimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTALPARDONFORM_HPP
#define PRESIDENTALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public AForm {
  public:
    PresidentialPardonForm(const std::string target);
    ~PresidentialPardonForm();
    
    void execute(Bureaucrat const & executor) const;
    const std::string& getTarget() const;

  private:
    PresidentialPardonForm();
    const std::string _target;
};

#endif