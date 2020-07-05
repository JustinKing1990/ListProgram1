#include "List.h"
#include <iostream>
#include <cstdio>
template <class T>
    List1<T>::List1(){
    
}
template <class T>
    List1<T>::~List1(){
        
    }
template <class T>
    void List1<T>::clear(void){
        left.clear();
        right.clear();
    }
template <class T>
    void List1<T>::transferFrom (List1& source){
        if(left.length()>0)
        left.transferFrom(source.left);
        right.transferFrom(source.right);
    }
template <class T>
    List1<T>& List1<T>::operator = (List1& rhs){
        left.operator=(rhs.left);
        right.operator=(rhs.right);
        return (*this);
    }

   // List1 Specific Operations
template <class T>
    void List1<T>::moveToStart (void){
        for(int i = 0; left.length()!=0; i++){
            left.remove(useThis,0);
            right.add(useThis,i);
        }
    }
template <class T>
   void List1<T>::moveToFinish (void){
       for(int i =0; right.length()!=0;i++){
           right.remove(useThis,0);
           left.add(useThis,right.length());
       }
   }
template <class T>
   void List1<T>::advance (void){
       if(right.length()==0){
           cout<<"ERROR! There is nothing inside the Right side of the list!"<<endl;
           return;
       }
       right.remove(useThis,0);
       left.add(useThis,left.length());
   }
template <class T>
    void List1<T>::addRightFront (T& x){
        right.add(x,0);
    }
                                                
template <class T>
    void List1<T>::removeRightFront (T& x){
        if(right.length() == 0){
            cout<<"Error! There is nothing inside the Right side of the list!"<<endl;
            return;
        }
        right.remove(useThis,0);
        x = useThis;
    }

template <class T>
    T& List1<T>::rightFront (void){
      return(right.entry(0));
    }

template <class T>
    void List1<T>::replaceRightFront (T& x){
        right.remove(useThis,0);
        right.add(x,0);
        x = useThis;
    }

template <class T>
    void List1<T>::swapRights (List1& otherS){
        temp.operator=(right);
        right.operator=(otherS.right);
        otherS.right.operator=(temp);     
    }

template <class T>
    int List1<T>::leftLength (void){
        return left.length();
    }
template <class T>
    int List1<T>::rightLength (void){
        return right.length();
    }
template <class T>
    void List1<T>::outputList(void){
        left.outputSequence();
        right.outputSequence();
    }
