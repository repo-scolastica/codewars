/* https://www.codewars.com/kata/5270d0d18625160ada0000e4/c */

int score(const int dice[5]) {

    unsigned char occurences[7] = { 0 };
    unsigned char i;
    int value = 0; 
  
    for (i = 0; i < 5; ++i) { ++occurences[dice[i]]; }
    for (i = 1; i < 7; ++i) { value = occurences[i] < 3 ? value : i; }

    value = value == 1 ? 1000 : value * 100;
    value += 100 * (occurences[1] % 3) + 50 * (occurences[5] % 3);

    return value;
}