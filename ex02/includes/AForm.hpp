/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohasega <yohasega@student.42.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 20:18:27 by yohasega          #+#    #+#             */
/*   Updated: 2024/12/21 18:39:09 by yohasega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
  private:
	const std::string	_name;
	bool				_isSigned;
	const int			_signGrade;
	const int			_excuteGrade;

  protected:
	virtual void beExecuted() const = 0;

  public:
	AForm();
	AForm(std::string name, int signGrade, int excuteGrade);
	AForm(const AForm &src);
	virtual ~AForm();

	AForm &operator=(const AForm &src);

	const std::string &getName() const;
	bool               getSignStatus() const;
	int                getSignGrade() const;
	int                getExcuteGrade() const;

	void beSigned(const Bureaucrat &bureaucrat);
	void execute(Bureaucrat const & executor) const;

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
	class NotSignedException : public std::exception
	{
		public:
			virtual const char *what() const throw();
	};
};

std::ostream &operator<<(std::ostream &os, const AForm &p);

#endif