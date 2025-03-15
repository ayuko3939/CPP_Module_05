/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohasega <yohasega@student.42.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 19:24:58 by yohasega          #+#    #+#             */
/*   Updated: 2024/12/15 15:00:12 by yohasega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <cstdlib>
#include <ctime>

// ===================== Constructor & Destructor =====================

// private
RobotomyRequestForm::RobotomyRequestForm()
: AForm("RobotomyRequestForm", signGrade, excuteGrade), _target("Default")
{
	// std::cout << "RobotomyRequestForm default constructor was called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target)
: AForm("RobotomyRequestForm", signGrade, excuteGrade), _target(target)
{
	// std::cout << "RobotomyRequestForm default constructor was called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src)
: AForm(src), _target(src._target)
{
	// std::cout << "RobotomyRequestForm " << src._name << " copy constructor was called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	// std::cout << "RobotomyRequestForm " << _name << " destructor was called" << std::endl;
}

// ============================= Operator =============================

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &src)
{
	// std::cout << "RobotomyRequestForm " << src._name << " copy assignment operator called" << std::endl;
	if (&src != this)
	{
		AForm::operator=(src);
		_target = src._target;
	}
	return (*this);
}

// ============================== Getter ==============================

const std::string &RobotomyRequestForm::getTarget() const
{
	return (_target);
}

// ======================== Protected function ========================

void RobotomyRequestForm::beExecuted() const
{
	std::srand(std::time(NULL)); // init random number

	std::cout << "( Whirrr... ) ";
	if (std::rand() % 2)
	{
		std::cout << LIGHTGREEN << "Operation complete! "
				  << _target << " has been robotomized successfully!" << END << std::endl;
	}
	else
	{
		std::cout << YELLOW << "Oh no! Robotomy failed! But don't panic! Perhaps "
				  << _target << " likes being human after all!" << END << std::endl;
	}
}
