#include <vcrate/Thread/ThreadState.hpp>

namespace vcrate { namespace sandbox {

ThreadState::Register& ThreadState::reg(ui32 id) {
    return registers[id];
}

ThreadState::Register ThreadState::reg(ui32 id) const {
    return registers[id];
}

}}