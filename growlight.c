#define sensor d0
#define grow_light d1

num main(void) {
	while (1) {
		if (load(sensor, "Activate") == 1) {
            store_batch(grow_light, "On", 1);
		} else {
            store_batch(grow_light, "On", 0);
		}

		yield();
	}	
}
