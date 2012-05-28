#ifndef _OPCODES_H_
#define _OPCODES_H_

#include <memory>

#include "types.hpp"

//TODO: Add opcode implementations.

class Opcode
{
public:
   Opcode(opcode_t op):code(op)
   {
   }
   virtual ~Opcode()
   {
   }
   virtual void execute() = 0;
protected:
   opcode_t code;
};

typedef std::shared_ptr<Opcode> base_opcode;

class Opcode_0 : public Opcode
{
public:
   void execute() { }
};

class Opcode_1 : public Opcode
{
public:
   void execute() { }
};

class Opcode_2 : public Opcode
{
public:
   void execute() { }
};

class Opcode_3 : public Opcode
{
public:
   void execute() { }
};

class Opcode_4 : public Opcode
{
public:
   void execute() { }
};

class Opcode_5 : public Opcode
{
public:
   void execute() { }
};

class Opcode_6 : public Opcode
{
   void execute() { }
};

class Opcode_7 : public Opcode
{
public:
   void execute() { }
};

class Opcode_8 : public Opcode
{
public:
   void execute() { }
};

class Opcode_9 : public Opcode
{
public:
   void execute() { }
};

class Opcode_A : public Opcode
{
public:
   void execute() { }
};

class Opcode_B : public Opcode
{
public:
   void execute() { }
};

class Opcode_C : public Opcode
{
public:
   void execute() { }
};

class Opcode_D : public Opcode
{
public:
   void execute() { }
};

class Opcode_E : public Opcode
{
public:
   void execute() { }
};

class Opcode_F : public Opcode
{
public:
   void execute() { }
};

#endif
