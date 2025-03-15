/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohasega <yohasega@student.42.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 20:18:27 by yohasega          #+#    #+#             */
/*   Updated: 2024/12/15 14:02:23 by yohasega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

// ===================== Constructor & Destructor =====================

Form::Form()
: _name("default"), _isSigned(false), _signGrade(LOWEST_GRADE), _excuteGrade(LOWEST_GRADE)
{
	// std::cout << INDIGO << "Form default constructor was called" << END << std::endl;
}

Form::Form(std::string name, int signGrade, int excuteGrade)
: _name(name), _isSigned(false), _signGrade(signGrade), _excuteGrade(excuteGrade)
{
	// std::cout << INDIGO << "Form " << _name << " constructor was called" << END << std::endl;
	if (signGrade < HIGHEST_GRADE || excuteGrade < HIGHEST_GRADE)
		throw (Form::GradeTooHighException());
	else if (signGrade > LOWEST_GRADE || excuteGrade > LOWEST_GRADE)
		throw (Form::GradeTooLowException());
}

Form::Form(const Form &src)
: _name(src._name), _isSigned(false), _signGrade(src._signGrade), _excuteGrade(src._excuteGrade)
{
	// std::cout << INDIGO << "Form " << src._name << " copy constructor was called" << END << std::endl;
}

Form::~Form()
{
	// std::cout << INDIGO << "Form " << _name << " destructor was called" << END << std::endl;
}

// ============================= Operator =============================

Form &Form::operator=(const Form &src)
{
	// std::cout << INDIGO << "Form " << src._name << " copy assignment operator called" << END << std::endl;
	if (&src != this)
	{
		_isSigned = src._isSigned;
	}
	return (*this);
}

// ============================== Getter ==============================

const std::string &Form::getName() const
{
	return (_name);
}

bool Form::getSignStatus() const
{
	return (_isSigned);
}

int Form::getSignGrade() const
{
	return (_signGrade);
}

int Form::getExcuteGrade() const
{
	return (_excuteGrade);
}

// ========================== Public function =========================

void Form::beSigned(const Bureaucrat &bureaucrat)
{
	if (_isSigned == true)
		throw Form::AlreadySignedException();
	else if (_signGrade < bureaucrat.getGrade())
		throw Form::GradeTooLowException();
	else
		_isSigned = true;
}

const char *Form::GradeTooHighException::what() const throw()
{
	return ("too high grade!");
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("too low grade!");
}

const char *Form::AlreadySignedException::what() const throw()
{
	return ("this form is already signed!");
}

// =============================== other ==============================

std::ostream &operator<<(std::ostream &os, const Form &p)
{
	os << "Form name        : " << p.getName() << "\n"
	   << "sign status      : " << (p.getSignStatus() ? "signed" : "yet") << "\n"
	   << "grade for sign   : " << p.getSignGrade() << "\n"
	   << "grade for excute : " << p.getExcuteGrade() << "\n";
	return (os);
}
