/**
 * @param {integer} init
 * @return { increment: Function, decrement: Function, reset: Function }
 */
var createCounter = function(n)
{
     let cnt = n;
    function increment() {
        return ++cnt;
    }
    function decrement() {
        return --cnt;
    }
    function reset() {
        cnt = n;
        return cnt;
    }
    return {
        increment: increment,
        decrement: decrement,
        reset: reset
    };
};

/**
 * const counter = createCounter(5)
 * counter.increment(); // 6
 * counter.reset(); // 5
 * counter.decrement(); // 4
 */