/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nefimov <nefimov@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/26 07:34:46 by nefimov           #+#    #+#             */
/*   Updated: 2026/09/30 17:28:35 by nefimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"

// void create_form_test(const std::string& name, int grade_to_sign, int grade_to_exec) {
//     std::cout << "Create Form('"<< name << "', " << grade_to_sign << ", "
//               << grade_to_exec  << ") " << std::endl;
//     try
//     {
//         Form form(name, grade_to_sign, grade_to_exec);
//         std::cout << "  " << form;
//     }
//     catch (const std::exception &e)
//     {
//         std::cout << "  " << e.what() << std::endl;
//     }
// }

// void test_create_form_grade_too_low() {
//     std::cout << "*** " << "test_create_form_grade_too_low" << " ***\n";
//     create_form_test("Good_form", 150, 150);
//     create_form_test("Wrong_sign", 151, 150);
//     create_form_test("Wrong_exec", 150, 151);
//     std::cout << std::endl;
// }
// void test_create_form_grade_too_high() {
//     std::cout << "*** " << "test_create_form_grade_too_high" << " ***\n";
//     create_form_test("Good_form", 1, 1);
//     create_form_test("Wrong_sign", 0, 1);
//     create_form_test("Wrong_exec", 1, 0);
//     std::cout << std::endl;
//     }
    
// void test_copy_constructor_and_assignment() {
//     std::cout << "*** " << "test_copy_constructor_and_assignment" << " ***\n";
//     try
//     {
//         std::cout << "Create Form('A', 75, 75)" << std::endl;
//         Form a("A", 75, 75);
//         std::cout << " > " << a;
        
//         std::cout << "Create Form B(A)" << std::endl;
//         Form b(a);
//         std::cout << " > " << b;
        
//         std::cout << "Create Form('C', 25)" << std::endl;
//         Form c("C", 25, 15);
//         Bureaucrat bur("bur", 1);
//         c.signForm(bur);
//         std::cout << " > " << c;
        
//         std::cout << "C = A" << std::endl;
//         c = a;
//         std::cout << " > " << c;
//     }
//     catch (const std::exception &e)
//     {
//         std::cout << " > " << e.what() << std::endl;
//     }
    
//     std::cout << std::endl;
// }

// void test_sign_form() {
//     std::cout << "*** " << "test_sign_form" << " ***\n";
//     try
//     {
//         std::cout << "Create Form('A', 75, 75)" << std::endl;
//         Form a("A", 75, 75);
//         std::cout << " > " << a;
        
//         std::cout << "Create Form('B', 25, 25)" << std::endl;
//         Form b("B", 25, 25);
//         std::cout << " > " << b;
        
//         std::cout << "Create Bureaucrats with grades 76, 50, 25 " << std::endl;
//         Bureaucrat bur_low("Bur_76", 76);
//         std::cout << " > " << bur_low;
//         Bureaucrat bur_middle("Bur_50", 50);
//         std::cout << " > " << bur_middle;
//         Bureaucrat bur_high("Bur_25", 25);
//         std::cout << " > " << bur_high;
        
//         a.signForm(bur_low);
//         a.signForm(bur_middle);
//         a.signForm(bur_high);

//         b.signForm(bur_low);
//         b.signForm(bur_middle);
//         b.signForm(bur_high);        
//     }
//     catch (const std::exception &e)
//     {
//         std::cout << " > " << e.what() << std::endl;
//     }
    
//     std::cout << std::endl;
// }

int main(void)
{
    // Test constructor
    // test_create_form_grade_too_low();
    // test_create_form_grade_too_high();
    // test_copy_constructor_and_assignment();

    // test_sign_form();
    
    return 0;
}