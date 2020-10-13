#ifndef SHIPPING_STOPWATCH_H
#define SHIPPING_STOPWATCH_H

#include <chrono>
#include <atomic>

/**
 * Source :
 *
* https://codereview.stackexchange.com/questions/196245/extremely-simple-timer-class-in-c
*/

template <typename Clock = std::chrono::high_resolution_clock>
class stopwatch
{
    const typename Clock::time_point start_point;
public:
    stopwatch() :
            start_point(Clock::now())
    {}

    template <typename Rep = typename Clock::duration::rep, typename Units = typename Clock::duration>
    Rep elapsed_time() const
    {
        std::atomic_thread_fence(std::memory_order_relaxed);
        auto counted_time = std::chrono::duration_cast<Units>(Clock::now() - start_point).count();
        std::atomic_thread_fence(std::memory_order_relaxed);
        return static_cast<Rep>(counted_time);
    }
};

#endif //SHIPPING_STOPWATCH_H
