num main(void) {
    num diodeSumPrev;
    num diodeSum;

    store_batch(hash("StructureDiodeSlide"), "On", 0);
    store_batch(hash("StructureLightRound"), "On", 1);
    store_batch(hash("StructureLightLongWide"), "On", 1);
    store_batch(hash("StructureLightLongAngled"), "On", 1);
    diodeSumPrev = load_batch(hash("StructureDiodeSlide"), "On", 1);
    yield();

    while (1) {
        diodeSum = load_batch(hash("StructureDiodeSlide"), "On", 1);

        if (diodeSum < diodeSumPrev)
        {
            store_batch(hash("StructureDiodeSlide"), "On", 0);
            store_batch(hash("StructureLightRound"), "On", 1);
            store_batch(hash("StructureLightLongWide"), "On", 1);
            store_batch(hash("StructureLightLongAngled"), "On", 1);
            diodeSumPrev = diodeSum;
        }
         if ((diodeSum > diodeSumPrev))
        {
            store_batch(hash("StructureDiodeSlide"), "On", 1);
            store_batch(hash("StructureLightRound"), "On", 0);
            store_batch(hash("StructureLightLongWide"), "On", 0);
            store_batch(hash("StructureLightLongAngled"), "On", 0);
            diodeSumPrev = diodeSum;
        }

        yield();
    }
}
