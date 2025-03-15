/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohasega <yohasega@student.42.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 19:27:27 by yohasega          #+#    #+#             */
/*   Updated: 2024/12/15 18:06:04 by yohasega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main()
{
	Bureaucrat	a("a", 1);
	Bureaucrat	b("b", 100);
	Bureaucrat	c("c", 150);

	
	std::cout << "========== init ==========" << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << c << std::endl;
	std::cout << std::endl;

	std::cout << "========== test ==========" << std::endl;
	std::cout << "[1] Grade 10 up!" << std::endl;
	std::cout << "before : " << b << std::endl;
	try
	{
		b.upGrade(10);
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << e.what() << END << std::endl;
	}
	std::cout << "after  : " << b << std::endl;
	std::cout << std::endl;

	std::cout << "[2] Grade 20 down!" << std::endl;
	std::cout << "before : " << b << std::endl;
	try
	{
		b.downGrade(20);
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << e.what() << END << std::endl;
	}
	std::cout << "after  : " << b << std::endl;
	std::cout << std::endl;

	std::cout << "[3] Grade 1 up! (Too high!)" << std::endl;
	std::cout << "before : " << a << std::endl;
	try
	{
		a.upGrade(1);
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << e.what() << END << std::endl;
	}
	std::cout << "after  : " << a << std::endl;
	std::cout << std::endl;

	std::cout << "[4] Grade 1 down! (Too low!)" << std::endl;
	std::cout << "before : " << c << std::endl;
	try
	{
		c.downGrade(1);
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << e.what() << END << std::endl;
	}
	std::cout << "after  : " << c << std::endl;
	std::cout << std::endl;

	std::cout << "[5] Construct grade 200! (Too low!)" << std::endl;
	try
	{
		Bureaucrat d("TooLow", 200);
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << e.what() << END << std::endl;
	}
	std::cout << std::endl;

	std::cout << "[6] Construct grade 0! (Too high!)" << std::endl;
	try
	{
		Bureaucrat d("TooHigh", 0);
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << e.what() << END << std::endl;
	}
	std::cout << std::endl;

	// std::cout << std::endl;
	// std::cout << "========== basic function test ==========" << std::endl;

	// Bureaucrat	x("x", 100);
	// Bureaucrat y(x);

	// std::cout << "[ before ]" << std::endl;
	// std::cout << x << std::endl;
	// std::cout << y << std::endl;
	// std::cout << std::endl;

	// try
	// {
	// 	y.setGrade(150);
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cerr << RED << e.what() << END << std::endl << std::endl;
	// }

	// std::cout << "[ after ]" << std::endl;
	// std::cout << x << std::endl;
	// std::cout << y << std::endl;

	return (0);
}