int romanToInt(char * s){
    int map[256] = {0};
    map['I'] = 1;
    map['V'] = 5;
    map['X'] = 10;
    map['L'] = 50;
    map['C'] = 100;
    map['D'] = 500;
    map['M'] = 1000;

    int total = 0;
    int i = 0;

    while (s[i]) {
        if (s[i + 1] && map[s[i]] < map[s[i + 1]]) {
            total += map[s[i + 1]] - map[s[i]];
            i += 2;
        } else {
            total += map[s[i]];
            i++;
        }
    }

    return total;
}
