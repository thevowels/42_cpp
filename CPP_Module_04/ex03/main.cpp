/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aphyo-ht <aphyo-ht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/30 08:50:29 by aphyo-ht          #+#    #+#             */
/*   Updated: 2026/07/15 18:22:02 by aphyo-ht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "Cure.hpp"
#include "AMateria.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
void IceUnitTesting();
void CureUnitTesting();
void MateriaUnitTesting();
void CharacterUnitTest();
void MaterialSourceTest();


void lineBreak(std::string str)
{
    std::cout << std::endl;
    std::cout << "\033[32m--------------------" << str << "--------------------\033[0m" << std::endl;
    std::cout << std::endl;
}

void lineBreak()
{
    std::cout << "\033[35m-----------------------------------------------------\033[0m" << std::endl;
}

int	main(void)
{
    // CureUnitTesting();
    // IceUnitTesting();
    // MateriaUnitTesting();
    // CharacterUnitTest();
    // MaterialSourceTest();

    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    ICharacter* me = new Character("me");
    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    ICharacter* bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);
    delete bob;
    delete me;
    delete src;

    return 0;
}

void MaterialSourceTest()
{
    
}

void CharacterUnitTest()
{
    Character character;
    Character *a = new Character;
    Character *b = new Character("Nick");
    Character *c = new Character(*a);
    

    a->equip(new Ice());
    a->equip(new Cure());
    a->equip(new Ice());
    a->equip(new Ice());
    a->unequip(0);
    a->unequip(2);
    a->equip(new Cure());
    a->equip(new Cure());


    
    Character *d = new Character(*a);
    d->unequip(0);
    d->unequip(0);
    a->equip(new Ice());
    d->equip(new Ice);
    d->equip(new Cure());
    d->use(1,*a);
    d->use(3,*b);
    d->use(-42, *a);
    lineBreak("Attacking ");
    a->use(1, *a);
    lineBreak(" Done ");
    a->use(0,*a);
    *d = *a;
    delete a;
    delete b;
    delete c;
    delete d;

}

void MateriaUnitTesting()
{
    AMateria *a = new Ice();
    AMateria *b = new Cure();


    AMateria *c = a->clone();
    std::cout << "Type of C "  << c->getType() << std::endl;


    delete a;
    delete b;
    delete c;

}
void CureUnitTesting()
{
    lineBreak("Cure Unit Testing start.");
    Cure cure;
    
    Cure *a = new Cure;
    Cure *b = new Cure();

    Cure    *c = new Cure(*a);
    Ice     *d = new Ice(*(Ice *)a);

    AMateria *e = a->clone();

    *a = *b;
    std::cout << "Type of D : " << d->getType() << std::endl;
    std::cout << "Type of AMateria : " << e->getType() << std::endl;

    delete a;
    delete b;
    delete c;
    delete d;
    delete e;
    
    
    lineBreak("Unit testing finish.");
    
}

void IceUnitTesting()
{

    // done
      lineBreak("Abstract Class Test");
  //Animal animal; // This line will cause a compilation error because Animal is an abstract class

  //ice instance on stack
  Ice ice;

  // ice instance on heap
  // Default Constructor;
  Ice *a = new Ice;

  // copy construcctor
  Ice *b = new Ice(*a);


  // testing assignment operator.
  Ice *c = new Ice();
  *c = *b;
  // c = b that is danger. We are copying the address from one holder to another and could cause segmentation fault.
  
  AMateria *d = a->clone();


  std::cout <<"Type of D: " << d->getType() << std::endl;

  delete(d);


  //deleting copied instance
  delete(c);
  // delete default constructor instance
  delete(a);

  // delete copy constructor instance
  delete(b);

  lineBreak("Deleting Objects on Stack");

}