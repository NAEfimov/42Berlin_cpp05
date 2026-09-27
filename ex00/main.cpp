/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nefimov <nefimov@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/26 07:34:46 by nefimov           #+#    #+#             */
/*   Updated: 2026/09/27 18:09:24 by nefimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"

void create_bureaucrat_test(const std::string& name, int grade) {
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
    create_bureaucrat_test("wrong", 151);
    std::cout << std::endl;
}

void test_create_bureaucrat_grade_too_high() {
    std::cout << "*** " << "test_create_bureaucrat_grade_too_high" << " ***\n";
    create_bureaucrat_test("god", 0);
    std::cout << std::endl;
}

void test_create_bureaucrat_lowest_grade() {
    std::cout << "*** " << "test_create_bureaucrat_lowest_grade" << " ***\n";
    create_bureaucrat_test("looser", 150);
    std::cout << std::endl;
}

void test_create_bureaucrat_highest_grade() {
    std::cout << "*** " << "test_create_bureaucrat_highest_grade" << " ***\n";
    create_bureaucrat_test("Boss", 1);
    std::cout << std::endl;
}

void test_copy_constructor_and_assignment() {
    std::cout << "*** " << "test_copy_constructor_and_assignment" << " ***\n";
    try
    {
        std::cout << "Create Bureaucrat('A', 75)" << std::endl;
        Bureaucrat A("A", 75);
        std::cout << " > " << A;
        
        std::cout << "Create Bureaucrat B(A)" << std::endl;
        Bureaucrat B(A);
        std::cout << " > " << B;

        std::cout << "Create Bureaucrat('C', 25)" << std::endl;
        Bureaucrat C("C", 25);
        std::cout << " > " << C;
        
        std::cout << "C = A" << std::endl;
        C = A;
        std::cout << " > " << C;
    }
    catch (const std::exception &e)
    {
        std::cout << " > " << e.what() << std::endl;
    }
    
    std::cout << std::endl;
}

void test_increment_grade() {
    std::cout << "*** " << "test_increment_grade" << " ***\n";
    try
    {
        std::cout << "Create Bureaucrat('Boss', 2) " << std::endl;
        Bureaucrat boss("Boss", 2);
        std::cout << " > " << boss;

        std::cout << "Increment 'Boss'" << std::endl;
        boss.incrementGrade();
        std::cout << " > " << boss;

        std::cout << "Increment 'Boss'" << std::endl;
        boss.incrementGrade();
        std::cout << " > " << boss;
    }
    catch(const std::exception& e)
    {
        std::cout << " > " << e.what() << std::endl;
    } 
}

void test_decrement_grade() {
    std::cout << "*** " << "test_increment_grade" << " ***\n";
    try
    {
        std::cout << "Create Bureaucrat('intern', 149) " << std::endl;
        Bureaucrat intern("intern", 149);
        std::cout << " > " << intern;

        std::cout << "Decrement 'intern'" << std::endl;
        intern.decrementGrade();
        std::cout << " > " << intern;

        std::cout << "Decrement 'intern'" << std::endl;
        intern.decrementGrade();
        std::cout << " > " << intern;
    }
    catch(const std::exception& e)
    {
        std::cout << " > " << e.what() << std::endl;
    } 
}

// void test_() {
//     std::cout << "*** " << "test_" << " ***\n";
// }

int main(void)
{
    // Test constructor
    test_create_bureaucrat_grade_too_low();
    test_create_bureaucrat_grade_too_high();
    test_create_bureaucrat_lowest_grade();
    test_create_bureaucrat_highest_grade();
    test_copy_constructor_and_assignment();

    // Test increment and decrement grade
    test_increment_grade();
    test_decrement_grade();
    
    return 0;
}