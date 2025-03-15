/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohasega <yohasega@student.42.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 19:25:03 by yohasega          #+#    #+#             */
/*   Updated: 2024/12/15 14:42:35 by yohasega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

// ===================== Constructor & Destructor =====================

// private
PresidentialPardonForm::PresidentialPardonForm()
: AForm("PresidentialPardonForm", signGrade, excuteGrade), _target("Default")
{
	// std::cout << INDIGO << "PresidentialPardonForm default constructor was called" << END << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target)
: AForm("PresidentialPardonForm", signGrade, excuteGrade), _target(target)
{
	// std::cout << INDIGO << "PresidentialPardonForm default constructor was called" << END << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src)
: AForm(src), _target(src._target)
{
	// std::cout << INDIGO << "PresidentialPardonForm " << src._name << " copy constructor was called" << END << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	// std::cout << INDIGO << "PresidentialPardonForm " << _name << " destructor was called" << END << std::endl;
}

// ============================= Operator =============================

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &src)
{
	// std::cout << INDIGO << "PresidentialPardonForm " << src._name << " copy assignment operator called" << END << std::endl;
	if (&src != this)
	{
		AForm::operator=(src);
		_target = src._target;
	}
	return (*this);
}

// ============================== Getter ==============================

const std::string &PresidentialPardonForm::getTarget() const
{
	return (_target);
}

// ======================== Protected function ========================

void PresidentialPardonForm::beExecuted() const
{
	std::cout << _target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
