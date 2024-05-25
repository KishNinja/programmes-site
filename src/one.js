// Функция №1
function complexFunction2() {
    let result = 1;
    for (let i = 1; i <= 100; i++) {
        result *= i;
    }
    for (let j = 1; j <= 50; j++) {
        result += Math.pow(j, 3) - Math.sqrt(j) + Math.log(j + 1);
    }
    for (let k = 1; k <= 200; k++) {
        result /= Math.random() * (k + 1);
    }
    return result;
}