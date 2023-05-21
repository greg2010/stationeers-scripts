#define gassensor d0
#define cooler d1
#define heater d2
#define dialmin d3
#define dialmax d4

num main(void) {
    num isHot;
    num isCold;
    while (1) {
        isHot = (load(gassensor, "Temperature") - 273) >= load(dialmax, "Setting");
        isCold = (load(gassensor, "Temperature") - 273) <= load(dialmin, "Setting");

        if (isHot) {
            store(heater, "On", 0);
            store(cooler, "On", 1);
        }

        if (isCold) {
            store(cooler, "On", 0);
            store(heater, "On", 1);
        }

        if ((isCold == 0) && (isHot == 0)) {
            store(cooler, "On", 0);
            store(heater, "On", 0);
        }
        sleep(5);
    }
}
