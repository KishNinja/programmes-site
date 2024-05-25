// Функция №1
function complexFunction1() {
    let result = 0;
    for (let i = 0; i < 1000; i++) {
        result += Math.sin(i) * Math.cos(i) + Math.sqrt(i) + Math.log(i + 1);
    }
    for (let j = 0; j < 500; j++) {
        result -= Math.pow(j, 2) / Math.sqrt(j + 1);
    }
    for (let k = 0; k < 200; k++) {
        result *= Math.random() * (k + 1);
    }
    return result;
}