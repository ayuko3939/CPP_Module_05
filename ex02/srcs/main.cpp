/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohasega <yohasega@student.42.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 19:27:27 by yohasega          #+#    #+#             */
/*   Updated: 2024/12/15 18:25:53 by yohasega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int	main()
{
	Bureaucrat	bureaucrat("Bureaucrat(1)", 1);
	// Bureaucrat	bureaucrat("Bureaucrat(25)", 25);
	// Bureaucrat	bureaucrat("Bureaucrat(72)", 72);
	// Bureaucrat	bureaucrat("Bureaucrat(145)", 145);
	// Bureaucrat	bureaucrat("Bureaucrat(150)", 150);

	PresidentialPardonForm	PForm("Arthur Dent");
	RobotomyRequestForm		RForm("Joe Shimamura");
	ShrubberyCreationForm	SForm("home");

	std::cout << "========== init ==========" << std::endl;
	std::cout << PForm << "Target           : " << PForm.getTarget() << std::endl << std::endl;
	std::cout << RForm << "Target           : " << RForm.getTarget() << std::endl << std::endl;
	std::cout << SForm << "Target           : " << SForm.getTarget() << std::endl << std::endl;
	std::cout << std::endl;


	std::cout << "========== test ==========" << std::endl;
	std::cout << "[ PresidentialPardonForm ]" << std::endl;
	bureaucrat.signForm(PForm);
	bureaucrat.executeForm(PForm);
	std::cout << std::endl;

	std::cout << "[ RobotomyRequestForm ]" << std::endl;
	bureaucrat.signForm(RForm);
	bureaucrat.executeForm(RForm);
	std::cout << std::endl;

	std::cout << "[ ShrubberyCreationForm ]" << std::endl;
	bureaucrat.signForm(SForm);
	bureaucrat.executeForm(SForm);
	std::cout << std::endl;


	// std::cout << std::endl;
	// std::cout << "========== basic function test ==========" << std::endl;

	// PresidentialPardonForm	x("Arthur Dent");
	// PresidentialPardonForm	y(x);
	// PresidentialPardonForm	z("Ford Prefect");
	// // RobotomyRequestForm		x("Joe Shimamura");
	// // RobotomyRequestForm		y("Joe Shimamura");
	// // RobotomyRequestForm		z("Ivan Whisky");
	// // ShrubberyCreationForm	x("home");
	// // ShrubberyCreationForm	y("home");
	// // ShrubberyCreationForm	z("park");

	// std::cout << "[ before ]" << std::endl;
	// std::cout << x << "Target           : " << x.getTarget() << std::endl;
	// std::cout << y << "Target           : " << y.getTarget() << std::endl;
	// std::cout << z << "Target           : " << z.getTarget() << std::endl;
	// std::cout << std::endl;

	// z = y;

	// std::cout << "[ after ]" << std::endl;
	// std::cout << x << "Target           : " << x.getTarget() << std::endl;
	// std::cout << y << "Target           : " << y.getTarget() << std::endl;
	// std::cout << z << "Target           : " << z.getTarget() << std::endl;

	return (0);
}
