# List in C++ Standard Template Library (STL)

## Lists are sequence containers that allow non-contiguous memory allocation. As compared to the vector, the list has slow traversal, but once a position has been found, insertion and deletion are quick (constant time). Normally, when we say a List, we talk about a doubly linked list. For implementing a singly linked list, we use a forward_list.

## std::list is the class of the List container. It is the part of C++ Standard Template Library (STL) and is defined inside <list> header file.

# Syntax:
## std::list <data-type> name_of_list;

# Some Basic Operations on std::list

## front() – Returns the value of the first element in the list.
## back() – Returns the value of the last element in the list.
## push_front() – Adds a new element ‘g’ at the beginning of the list.
## push_back() – Adds a new element ‘g’ at the end of the list.
## pop_front() – Removes the first element of the list, and reduces the size of the list by 1.
## pop_back() – Removes the last element of the list, and reduces the size of the list by 1.
## insert() – Inserts new elements in the list before the element at a specified position.
## size() – Returns the number of elements in the list.
## begin() – begin() function returns an iterator pointing to the first element of the list.
## end() – end() function returns an iterator pointing to the theoretical last element which follows the last element.