/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohasega <yohasega@student.42.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 16:09:19 by yohasega          #+#    #+#             */
/*   Updated: 2024/12/15 17:23:32 by yohasega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

// ===================== Constructor & Destructor =====================

Intern::Intern()
{
	// std::cout << INDIGO << "Intern default constructor was called" << END << std::endl;
}

Intern::Intern(const Intern &src)
{
	// std::cout << INDIGO <<  "Intern copy constructor was called" << END <<  std::endl;
	(void)src;
}

Intern::~Intern()
{
	// std::cout << INDIGO <<  "Intern destructor was called" << END <<  std::endl;
}

// ============================= Operator =============================

Intern &Intern::operator=(const Intern &src)
{
	// std::cout << INDIGO <<  "Intern copy assignment operator called" << END <<  std::endl;
	(void)src;
	return (*this);
}

// ========================== Public function =========================

static AForm *newPresidentialPardon(const std::string target)
{
	return (new PresidentialPardonForm(target));
}

static AForm *newRobotomyRequest(const std::string target)
{
	return (new RobotomyRequestForm(target));
}

static AForm *newShrubberyCreation(const std::string target)
{
	return (new ShrubberyCreationForm(target));
}

// pointers to functions that return AForm*
typedef AForm *(*FormConstructorPtr)(const std::string);

AForm *Intern::makeForm(std::string formName, std::string formTarget)
{
	AForm *aform = NULL;

	std::string formList[] = {"presidential pardon", "robotomy request", "shrubbery creation"};
	FormConstructorPtr list[] = {&newPresidentialPardon, &newRobotomyRequest, &newShrubberyCreation};
	
	for (int i = 0; i < 3; ++i)
	{
		if (formName == formList[i])
		{
			aform = list[i](formTarget);
			break;
		}
	}

	return (aform);
}
