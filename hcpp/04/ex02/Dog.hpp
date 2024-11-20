/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hozkaya <hozkaya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 18:17:07 by hozkaya           #+#    #+#             */
/*   Updated: 2024/08/26 15:12:10 by hozkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Brain.hpp"
class Dog : public AAnimal
{
    private:
        Brain *brain;
    public:
        Dog();
        Dog(std::string type);
        ~Dog();
        Dog(const Dog &dog);
        Dog &operator = (const Dog &dog);
        virtual void makeSound() const;
        std::string getidea(int index) const;
        void setidea(std::string idea, int index);
};