/**
 * @param {...(null|boolean|number|string|Array|Object)} args
 * @return {number}
 */
var argumentsLength = function(...args) {
    var check = 0;
    args.forEach(() => check++)
    return check;
};

/**
 * argumentsLength(1, 2, 3); // 3
 */