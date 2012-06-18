#ifndef _OPCODES_H_
#define _OPCODES_H_

#include <memory>

#include "cpu.hpp"
#include "types.hpp"

namespace opcodes
{

class Base;

}

typedef std::shared_ptr<opcodes::Base> base_opcode;

//TODO: Add opcode implementations.

namespace opcodes
{

class Base
{
public:
   Base(domain::CPU& cont):context(cont)
   {
   }
   virtual ~Base()
   {
   }
   virtual void execute() = 0;
protected:
   CPU& context;
};

// 0NNN 	Calls RCA 1802 program at address NNN.
class ProcCall : public Base
{
public:
   ProcCall(domain::CPU& context):Base(context)
   {
   }
   virtual ~ProcCall() 
   {
   }
   void execute() { }
};

// 00E0 	Clears the screen.
class ClearScreen : public Base
{
public:
   ClearScreen(domain::CPU& context):Base(context)
   {
   }
   virtual ~ClearScreen()
   {
   }
   void execute() { }
};

// 00EE 	Returns from a subroutine.
class ReturnFromSub : public Base
{
public:
   ReturnFromSub(domain::CPU& context):Base(context)
   {
   }
   virtual ~ClearScreen()
   {
   }
   void execute() { }
};

// 1NNN 	Jumps to address NNN.
class Jump : public Base
{
public:
   Jump(domain::CPU& context):Base(context)
   {
   }
   virtual ~Jump()
   {
   }
   void execute() { }
};

// 2NNN 	Calls subroutine at NNN.
class CallSub : public Base
{
public:
   CallSub(domain::CPU& context):Base(context)
   {
   }
   virtual ~CallSub()
   {
   }
   void execute() { }
};

// 3XNN 	Skips the next instruction if VX equals NN.
class SkipNextWithNN : public Base
{
public:
   SkipNextWithNN(domain::CPU& context):Base(context)
   {
   }
   virtual ~SkipNextWithNN()
   {
   }
   void execute() { }
};

// 4XNN 	Skips the next instruction if VX doesn't equal NN.
class SkipNextWithoutNN : public Base
{
public:
   SkipNextWithoutNN(domain::CPU& context):Base(context)
   {
   }
   virtual ~SkipNextWithoutNN()
   {
   }
   void execute() { }
};

// 5XY0 	Skips the next instruction if VX equals VY.
class SkipNextWithVY : public Base
{
public:
   SkipNextWithVY(domain::CPU& context):Base(context)
   {
   }
   virtual ~SkipNextWithVY()
   {
   }
   void execute() { }
};

// 6XNN 	Sets VX to NN.
class SetVXToNN : public Base
{
public:
   SetVXToNN(domain::CPU& context):Base(context)
   {
   }
   virtual ~SetVXToNN()
   {
   }
   void execute() { }
};

// 7XNN 	Adds NN to VX.
class AddNNToVX : public Base
{
   AddNNToVX(domain::CPU& context):Base(context)
   {
   }
   virtual ~AddVXToNN()
   {
   }
   void execute() { }
};

// 8XY0 	Sets VX to the value of VY.
class SetVXToVY : public Base
{
public:
   SetVXToVY(domain::CPU& context):Base(context)
   {
   }
   virtual ~SetVXToVY()
   {
   }
   void execute() { }
};

// 8XY1 	Sets VX to VX or VY.
class SetVXToVXOrVY : public Base
{
public:
   SetVXToVXOrVY(domain::CPU& context):Base(context)
   {
   }
   virtual ~SetVXToVXOrVY()
   {
   }
   void execute() { }
};

// 8XY2 	Sets VX to VX and VY.
class SetVXToVXAndVY : public Base
{
public:
   SetVXToVXAndVY(domain::CPU& context):Base(context)
   {
   }
   virtual ~SetVXToVXAndVY()
   {
   }
   void execute() { }
};

// 8XY3 	Sets VX to VX xor VY.
class SetVXToVXXorVY : public Base
{
public:
   SetVXToVXXorVY(domain::CPU& context):Base(context)
   {
   }
   virtual ~SetVXToVXXorVY()
   {
   }
   void execute() { }
};

// 8XY4 	Adds VY to VX. VF is set to 1 when there's a carry, and to 0 when there isn't.
class AddVYToVX : public Base
{
public:
   AddVYToVX(domain::CPU& context):Base(context)
   {
   }
   virtual ~AddVYToVX()
   {
   }
   void execute() { }
};

// 8XY5 	VY is subtracted from VX. VF is set to 0 when there's a borrow, and 1 when there isn't.
class SubVYFromVX : public Base
{
public:
   SubVYFromVX(domain::CPU& context):Base(context)
   {
   }
   virtual ~SubVYFromVX()
   {
   }
   void execute() { }
};

// 8XY6 	Shifts VX right by one. VF is set to the value of the least significant bit of VX before the shift.
class ShiftVXRightOne : public Base
{
public:
   ShiftVXRightOne(domain::CPU& context):Base(context)
   {
   }
   virtual ~ShiftVXRightOne()
   {
   }
   void execute() { }
};

// 8XY7 	Sets VX to VY minus VX. VF is set to 0 when there's a borrow, and 1 when there isn't.
class SetVXToVYSubVX : public Base
{
public:
   SetVXToVYSubVX(domain::CPU& context):Base(context)
   {
   }
   virtual ~SetVXToVYSubVX()
   {
   }
   void execute() { }
};

// 8XYE 	Shifts VX left by one. VF is set to the value of the most significant bit of VX before the shift.[2]
class ShiftVXLeftOne : public Base
{
public:
   ShiftVXLeftOne(domain::CPU& context):Base(context)
   {
   }
   virtual ~ShiftVXLeftOne()
   {
   }
   void execute() { }
};

// 9XY0 	Skips the next instruction if VX doesn't equal VY.
class SkipNextWithoutVY : public Base
{
public:
   SkipNextWithoutVY(domain::CPU& context):Base(context)
   {
   }
   virtual ~SkipNextWithoutVY()
   {
   }
   void execute() { }
};

// ANNN 	Sets I to the address NNN.
class SetIToNNN : public Base
{
public:
   SetIToNNN(domain::CPU& context):Base(context)
   {
   }
   virtual ~SetIToNNN()
   {
   }
   void execute() { }
};

// BNNN 	Jumps to the address NNN plus V0.
class JumpToNNPlusV0 : public Base
{
public:
   JumpToNNPlusV0(domain::CPU& context):Base(context)
   {
   }
   virtual ~JumpToNNPlusV0()
   {
   }
   void execute() { }
};

// CXNN 	Sets VX to a random number and NN.
class SetVXToRandomAndNN : public Base
{
public:
   SetVXToRandomAndNN(domain::CPU& context):Base(context)
   {
   }
   virtual ~JumpToNNPlusV0()
   {
   }
   void execute() { }
};

/* DXYN 	Draws a sprite at coordinate (VX, VY) that has a width of 8 pixels and a height of N pixels. Each row of 8 pixels is read as bit-coded (with the most significant bit of each byte displayed on the left) starting from memory location I; I value doesn't change after the execution of this instruction. As described above, VF is set to 1 if any screen pixels are flipped from set to unset when the sprite is drawn, and to 0 if that doesn't happen. */
class DrawVXVY : public Base
{
public:
   DrawVXVY(domain::CPU& context):Base(context)
   {
   }
   virtual ~DrawVXVY()
   {
   }
   virtual void execute() { }
};

// EX9E 	Skips the next instruction if the key stored in VX is pressed.
class SkipNextWithKeyPressed : public Base
{
public:
   void execute() { }
};

// EXA1 	Skips the next instruction if the key stored in VX isn't pressed.
class SkipNextWithoutKeyPressed : public Base
{
public:
   void execute() { }
};

// FX07 	Sets VX to the value of the delay timer.
class SetVXToDelay : public Base
{
public:
   void execute() { }
};

// FX0A 	A key press is awaited, and then stored in VX.
class AwaitKeyAndStore : public Base
{
public:
   void execute() { }
};

// FX15 	Sets the delay timer to VX.
class SetDelayToVx : public Base
{
public:
   void execute() { }
};

// FX18 	Sets the sound timer to VX.
class SetSoundToVx : public Base
{
public:
   void execute() { }
};

// FX1E 	Adds VX to I.
// VF is set to 1 when range overflow (I+VX>0xFFF), and 0 when there isn't. This is undocumented feature of the Chip-8 and used by Spacefight 2019! game.
class AddVXToI : public Base
{
public:
   void execute() { }
};

// FX29 	Sets I to the location of the sprite for the character in VX. Characters 0-F (in hexadecimal) are represented by a 4x5 font.
class SetIToLocation : public Base
{
public:
   void execute() { }
};

// FX33 	Stores the Binary-coded decimal representation of VX, with the most significant of three digits at the address in I, the middle digit at I plus 1, and the least significant digit at I plus 2.
class StoreBcodedVX : public Base
{
public:
   void execute() { }
};

// FX55  Stores V0 to VX in memory starting at address I
// On the original interpreter, when the operation is done, I=I+X+1.
class StoreV0ToVXInI : public Base
{
public:
   void execute() { }
};

// FX65 	Fills V0 to VX with values from memory starting at address I
// On the original interpreter, when the operation is done, I=I+X+1.
class FillV0ToVXFromI : public Base
{
public:
   void execute() { }
};

}

#endif
