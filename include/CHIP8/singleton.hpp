#ifndef _SINGLETON_H_
#define _SINGLETON_H_

#include <memory>

template<typename T>
class Singleton
{
public:
   typedef std::scoped_ptr<T> value_type;
   static value_type get_instance()
   {
      if (!instance)
      {
         instance.reset(new T());
      }
      return instance;
   }
private:
   Singleton() { }
   static value_type instance;
};

template<typename T>
typename Singleton<T>::value_type Singleton<T>::instance;

#endif
