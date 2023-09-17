#ifndef CG_LIVENESS_HPP
#define CG_LIVENESS_HPP

// A self-contained implementation of live variable analysis.

#include "array_pool.hpp"
#include "bitset.hpp"
#include "ir_decl.hpp"
#include "thread"

class fn_t;

namespace liveness_impl
{
    extern TLS array_pool_t<bitset_uint_t> bitset_pool;
    extern TLS unsigned set_size;
    extern TLS unsigned reserved_size;
}

inline unsigned live_set_size() { return liveness_impl::set_size; }

void calc_ssa_liveness(ssa_ht node); // only does a single node
unsigned calc_ssa_liveness(ir_t const& ir);
unsigned calc_ssa_liveness(ir_t const& ir, unsigned pool_size);

void clear_liveness_for(ir_t const& ir, ssa_ht node);

// If 'range' intersects 'def'.
bool live_at_def(ssa_ht range, ssa_ht def);

bool live_at_any_def(ssa_ht range, ssa_ht const* defs_begin,
                     ssa_ht const* defs_end);

bool live_range_overlap(ssa_ht a, ssa_ht b);

// A rough approximation of how much a live range overlaps with all others.
std::size_t live_range_busyness(ir_t& ir, ssa_ht h);

#endif
