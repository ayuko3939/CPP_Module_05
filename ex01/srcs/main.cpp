/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohasega <yohasega@student.42.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 19:27:27 by yohasega          #+#    #+#             */
/*   Updated: 2024/12/15 18:28:51 by yohasega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main()
{
	Bureaucrat	a("a", 150);
	Bureaucrat	b("b", 100);
	Bureaucrat	c("c", 1);
	Form		contract("contract", 1, 1);
	Form		agreement("agreement", 100, 50);
	Form		memorandum("memorandum", 150, 100);

	std::cout << "========== init ==========" << std::endl;
	std::cout << contract << std::endl;
	std::cout << agreement << std::endl;
	std::cout << memorandum << std::endl;
	std::cout << std::endl;

	std::cout << "========== test ==========" << std::endl;
	std::cout << "[1]" << std::endl;
	std::cout << a << std::endl;
	a.signForm(contract);
	a.signForm(agreement);
	a.signForm(memorandum);
	std::cout << std::endl;

	std::cout << "[2]" << std::endl;
	std::cout << b << std::endl;
	b.signForm(contract);
	b.signForm(agreement);
	b.signForm(memorandum);
	std::cout << std::endl;

	std::cout << "[3]" << std::endl;
	std::cout << c << std::endl;
	c.signForm(contract);
	c.signForm(agreement);
	c.signForm(memorandum);
	std::cout << std::endl;

	// std::cout << std::endl;
	// std::cout << "========== basic function test ==========" << std::endl;

	// Bureaucrat	ceo("CEO", 1);
	// Form	x("x", 100, 100);
	// Form y(x);
	// Form z(y);

	// std::cout << "[ before ]" << std::endl;
	// std::cout << x << std::endl;
	// std::cout << y << std::endl;
	// std::cout << z << std::endl;
	// std::cout << std::endl;

	// y.beSigned(ceo);
	// z = y;

	// std::cout << "[ after ]" << std::endl;
	// std::cout << x << std::endl;
	// std::cout << y << std::endl;
	// std::cout << z << std::endl;
	// std::cout << std::endl << std::endl;
	// try
	// {
	// 	Form tooLowForm1("TooLowForm1", 151, 1);
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cerr << RED << e.what() << END << std::endl;
	// }
	// try
	// {
	// 	Form tooLowForm2("TooLowForm3", 1, 151);
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cerr << RED << e.what() << END << std::endl;
	// }
	// try
	// {
	// 	Form tooHighForm1("TooHighForm1", 0, 1);
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cerr << RED << e.what() << END << std::endl;
	// }
	// try
	// {
	// 	Form tooHighForm2("TooHighForm2", 0, 1);
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cerr << RED << e.what() << END << std::endl;
	// }

	return (0);
}
