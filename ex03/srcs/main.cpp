/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohasega <yohasega@student.42.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 19:27:27 by yohasega          #+#    #+#             */
/*   Updated: 2024/12/15 17:46:49 by yohasega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int	main()
{
	// std::cout << "========== subject test ==========" << std::endl;	
	// Intern someRandomIntern;
	// AForm* rrf;
	// rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	// std::cout << rrf->getName() << std::endl;
	// delete rrf;

	// std::cout << std::endl;

	std::cout << "========== orignal test ==========" << std::endl;
	Intern intern;
	AForm *a;
	AForm *b;
	AForm *c;

	a = intern.makeForm("presidential pardon", "Arthur Dent");
	b = intern.makeForm("robotomy request", "JoeShimamura");
	c = intern.makeForm("shrubbery creation", "home");

	std::cout << a->getName() << std::endl;
	std::cout << b->getName()  << std::endl;
	std::cout << c->getName()  << std::endl;

	// std::cout << std::endl;

	// std::cout << "========== additional test ==========" << std::endl;
	// Bureaucrat bureaucrat("Bureaucrat", 1);
	
	// bureaucrat.signForm(*a);
	// bureaucrat.signForm(*b);
	// bureaucrat.signForm(*c);
	
	// bureaucrat.executeForm(*a);
	// bureaucrat.executeForm(*b);
	// bureaucrat.executeForm(*c);

	delete a;
	delete b;
	delete c;

	return (0);
}
