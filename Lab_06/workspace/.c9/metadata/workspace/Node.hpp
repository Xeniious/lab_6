{"filter":false,"title":"Node.hpp","tooltip":"/Node.hpp","undoManager":{"mark":0,"position":0,"stack":[[{"start":{"row":0,"column":0},"end":{"row":34,"column":1},"action":"insert","lines":["/**","*\t@author ","*\t@date ","*\t@file Node.hpp","*/","","template <typename T>","Node<T>::Node(T value) : m_value(value), m_next(nullptr)","{","","}","","template <typename T>","T Node<T>::getValue() const","{","\treturn(m_value);","}","","template <typename T>","void Node<T>::setValue(T value)","{","\tm_value = value;","}","","template <typename T>","Node<T>* Node<T>::getNext() const","{","\treturn(m_next);","}","","template <typename T>","void Node<T>::setNext(Node<T>* next)","{","\tm_next = next;","}"],"id":1}]]},"ace":{"folds":[],"scrolltop":0,"scrollleft":0,"selection":{"start":{"row":7,"column":27},"end":{"row":7,"column":27},"isBackwards":false},"options":{"guessTabSize":true,"useWrapMode":false,"wrapToView":true},"firstLineState":0},"timestamp":1509596927300,"hash":"34ae9a7399bf2da3491a5ea41e0c9ce682d3bb56"}