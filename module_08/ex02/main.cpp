/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusalves <gusalves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 21:00:39 by gusalves          #+#    #+#             */
/*   Updated: 2023/03/25 20:23:04 by gusalves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <stack>
#include <list>
#include "MutantStack.hpp"

void	printList(std::list<int> &lst)
{
	std::cout << "LIST: ";
	for (std::list<int>::iterator it = lst.begin(); it != lst.end(); it++)
		std::cout << " [" << *it << "]";
	std::cout << std::endl;
}

int main()
{
	{
		std::cout << std::endl;
		std::cout << "PDF TEST" << std::endl;
		MutantStack<int> mstack;

		mstack.push(5);
		mstack.push(17);
		mstack.pop();
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);

		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<int> s(mstack);
	}
	{
		std::cout << std::endl;
		std::cout << "LIST TEST" << std::endl;
		std::list<int> mylist;
		mylist.push_back(1);
		std::cout << "push_back [1]" << std::endl;
		printList(mylist);
		mylist.push_front(2);
		std::cout << "push_front [2]" << std::endl;
		printList(mylist);
		mylist.push_back(3);
		std::cout << "push_back [3]" << std::endl;
		printList(mylist);
		mylist.push_front(4);
		std::cout << "push_front [4]" << std::endl;
		printList(mylist);
		std::cout << "mylist back: [" << mylist.back() << "]" << std::endl;
		std::cout << "mylist front: [" << mylist.front() << "]" << std::endl;
		std::cout << "size of list: [" << mylist.size() << "]" << std::endl;
	}
	{
		std::cout << std::endl;
		std::cout << "REVERSE ITERATOR TEST" << std::endl;
		std::list<int> mylist;

		mylist.push_front(2);
		mylist.push_back(3);
		mylist.push_back(4);
		mylist.push_front(1);

		printList(mylist);
		std::cout << "RLIST: ";
		for (std::list<int>::reverse_iterator rit = mylist.rbegin(); rit != mylist.rend(); ++rit)
			std::cout << '['<< *rit << "] ";
		std::cout << std::endl;
	}
	return 0;
}
