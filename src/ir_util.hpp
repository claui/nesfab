#ifndef IR_UTIL_HPP
#define IR_UTIL_HPP

#include "ir.hpp"

class fn_t;

bool io_pure(ssa_node_t const& ssa_node);
bool pure(ssa_node_t const& ssa_node);
bool ct_pure(ssa_node_t const& ssa_node);

// If 'ssa_node' changes the bank to an unspecified value.
bool clobbers_unknown_bank(fn_t const& fn, ssa_node_t const& ssa_node);

// Loosely approximates the cost of each ssa node, proportional to (but not equal to) cycles.
unsigned estimate_cost(ssa_node_t const& ssa_node);

void steal_ssa_after(ssa_ht ssa, cfg_ht steal_dest);

#endif
