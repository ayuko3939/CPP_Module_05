/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohasega <yohasega@student.42.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 20:18:27 by yohasega          #+#    #+#             */
/*   Updated: 2024/12/21 18:39:38 by yohasega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
  private:
	const std::string	_name;
	bool				_isSigned;
	const int			_signGrade;
	const int			_excuteGrade;

  public:
	Form();
	Form(std::string name, int signGrade, int excuteGrade);
	Form(const Form &src);
	~Form();

	Form &operator=(const Form &src);

	const std::string &getName() const;
	bool               getSignStatus() const;
	int                getSignGrade() const;
	int                getExcuteGrade() const;

	void beSigned(const Bureaucrat &bureaucrat);

	class GradeTooHighException : public std::exception
	{
		public:
			virtual const char *what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
		public:
			virtual const char *what() const throw();
	};
	class AlreadySignedException : public std::exception
	{
		public:
			virtual const char *what() const throw();
	};
};

std::ostream &operator<<(std::ostream &os, const Form &p);

#endif