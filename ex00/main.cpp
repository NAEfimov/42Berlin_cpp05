/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nefimov <nefimov@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/26 07:34:46 by nefimov           #+#    #+#             */
/*   Updated: 2026/09/26 23:25:27 by nefimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"

void create_bureaucrat(const std::string name, int grade) {
    std::cout << "Create Bureaucrat('"<< name << "', " << grade << ") "
              << std::endl;
    try
    {
        Bureaucrat bureaucrat(name, grade);
        std::cout << "  " << bureaucrat;
    }
    catch (const std::exception &e)
    {
        std::cout << "  " << e.what() << std::endl;
    }
}

void test_create_bureaucrat_grade_too_low() {
    std::cout << "*** " << "test_create_bureaucrat_grade_too_low" << " ***\n";
    create_bureaucrat("wrong", 151);
    std::cout << std::endl;
}

void test_create_bureaucrat_grade_too_high() {
    std::cout << "*** " << "test_create_bureaucrat_grade_too_high" << " ***\n";
    create_bureaucrat("god", 0);
    std::cout << std::endl;
}

void test_create_bureaucrat_lowest_grade() {
    std::cout << "*** " << "test_create_bureaucrat_lowest_grade" << " ***\n";
    create_bureaucrat("looser", 150);
    std::cout << std::endl;
}

void test_create_bureaucrat_highest_grade() {
    std::cout << "*** " << "test_create_bureaucrat_highest_grade" << " ***\n";
    create_bureaucrat("Boss", 1);
    std::cout << std::endl;
}



int main(void)
{
    // Grade too low
    test_create_bureaucrat_grade_too_low();
    test_create_bureaucrat_grade_too_high();
    test_create_bureaucrat_lowest_grade();
    test_create_bureaucrat_highest_grade();
    
    try
    {

    // Grade low
    std::cout << "**************************************************************************\n";
    std::cout << "Create Bureaucrat('looser', 149) " << std::endl;
    Bureaucrat looser("looser", 149);
    std::cout << "  " << looser;

    std::cout << "Increment 'looser'" << std::endl;
    // try
    // {
        std::cout << "  " << looser.incrementGrade();
    // }
    // catch (Bureaucrat::GradeTooHighException &e)
    // {
        // std::cout << e.what() << std::endl;
    // }

    for (int i = 0; i < 3; ++i)
    {
        std::cout << "Decrement 'looser'" << std::endl;
        // try
        // {
            std::cout << "  " << looser.decrementGrade();
        // }
        // catch (Bureaucrat::GradeTooLowException &e)
        // {
            // std::cout << e.what() << std::endl;
        // }
    }
    }
    catch (const std::exception &e)
    {
        std::cout << "  " << e.what() << std::endl;
    }
    
    return 0;
}