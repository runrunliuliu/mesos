#include "allocator_factory.hpp"
#include "simple_allocator.hpp"
#include "slot_allocator.hpp"

using namespace mesos::internal::master;

DEFINE_FACTORY(Allocator, Master *)
{
  registerClass<SimpleAllocator>("simple");
  registerClass<SlotAllocator>("slot");
}
