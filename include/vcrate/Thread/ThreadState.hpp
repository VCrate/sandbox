#pragma once

#include <vcrate/Alias.hpp>
#include <vcrate/bytecode/v1.hpp>

#include <array>

namespace vcrate { namespace sandbox {

class ThreadState {
public:

    using Register = ui32;

    Register& reg(ui32 id);
    Register reg(ui32 id) const;

    Register& reg_pc()              { return reg(bytecode::v1::register_pc); }
    Register  reg_pc() const        { return reg(bytecode::v1::register_pc); }

    Register& reg_flag()            { return reg(bytecode::v1::register_fg); }
    Register  reg_flag() const      { return reg(bytecode::v1::register_fg); }

    Register& reg_base_ptr()        { return reg(bytecode::v1::register_bp); }
    Register  reg_base_ptr() const  { return reg(bytecode::v1::register_bp); }

    Register& reg_stack_ptr()       { return reg(bytecode::v1::register_sp); }
    Register  reg_stack_ptr() const { return reg(bytecode::v1::register_sp); }

private:

    std::array<Register, 16> registers;

};

}}