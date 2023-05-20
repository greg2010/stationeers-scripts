#define gassensor d0
#define cooler d1
#define heater d2
#define dialmin d3
#define dialmax d4

num main(void) {
    while (1) {
        if ((load(gassensor, "Temperature") - 273) >= load(dialmax, "Setting")) {
            store(heater, "On", 0);
            store(cooler, "On", 1);
        } 
        if ((load(gassensor, "Temperature") - 273) <= load(dialmin, "Setting")) {
            store(cooler, "On", 0);
            store(heater, "On", 1);
        }
        else {
            store(cooler, "On", 0);
            store(heater, "On", 0);
        }
        sleep(5);
    }    
}
