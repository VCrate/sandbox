#pragma once

#include <vcrate/Alias.hpp>

#include <vector>
#include <optional>

namespace vcrate { namespace sandbox {

class MemoryOwner {
public:

    struct Block {
        Block(ui32 address, ui32 size);
        Block();

        static Block null();

        bool is_null() const;
        void reset();
        bool fuse(Block const& block);

        ui32 address;
        ui32 size;

        // all bytes in interval 
        //      [address, address + size - 1] 
        // correspond to this block
    };

    enum class Priority { LowestAddr, HighestAddr};

    bool ask_for(Block block);
    void give_back(Block block);
    Block demand(ui32 size, Priority priority = Priority::LowestAddr);

private:

    std::vector<Block>::iterator get_block_after(ui32 address);

    std::vector<Block> blocks;

};

}}