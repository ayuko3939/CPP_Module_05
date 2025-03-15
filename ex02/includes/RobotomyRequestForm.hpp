/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohasega <yohasega@student.42.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 19:24:58 by yohasega          #+#    #+#             */
/*   Updated: 2024/12/21 18:39:25 by yohasega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
  private:
	std::string	_target;
	RobotomyRequestForm();

  protected:
	void beExecuted() const;

  public:
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(const RobotomyRequestForm &src);
	~RobotomyRequestForm();
	
	RobotomyRequestForm &operator=(const RobotomyRequestForm &src);

	const std::string &getTarget() const;

	static const int	signGrade = 72;
	static const int	excuteGrade = 45;
};

#endif