/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nefimov <nefimov@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/26 07:34:46 by nefimov           #+#    #+#             */
/*   Updated: 2026/09/26 13:24:48 by nefimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"

int main(void) {
    // Grade too low 
    std::cout << "**************************************************************************\n";
    std::cout << "Create Bureaucrat('wrong', 151) " << std::endl;
    Bureaucrat wrong("wrong", 151);
    // Grade low
    std::cout << "**************************************************************************\n";
    std::cout << "Create Bureaucrat('looser', 149) " << std::endl;
    Bureaucrat looser("looser", 149);
    std::cout << "  " << looser;
    
    std::cout << "Increment 'looser'" << std::endl;
    std::cout << "  " << looser.inc();
    
    for (int i = 0; i < 3; ++i) {   
        std::cout << "Decrement 'looser'" << std::endl;
        std::cout << "  " << looser.dec();
    }
    
    return 0;
}