#define dishMed d0
#define dishLg d1
#define switch d2
#define button d3
#define light d4

num main(void){
num hasSignal;
num hasSignalPrev;
num sigHori
num sigVert
num sigVertPrev
num hasNoSignal;
num hori
num horiPrev
num vert
num vertPrev

while(load(switch, "On") = 1){
	hori = load(dishMed, "horizontal");
	store(dishMed, "power", 7500);
	sleep(4);
	hasSignal = load(dishMed, "Signalstrength");

if (hasSignal > 20 || hasSignal == -1){
		hori += 5
		store(dishMed, "horizontal", hori);
	}
if (hasSignal <= 20){
	sigVert = load(dishMed, "Signalstrength");
	sigVertPrev = load(dishMed, "Signalstrength");
	vert = load(dishMed, "vertical");
	vertPrev = load(dishMed, "vertical") + 5;
	store(dishLg, "horizontal", hori);
}
while(hasSignal < 20 && != -1 && (load(switch, "On") = 1) {
	vert = load(dishMed, "vertical");
	sigVert = load(dishMed, "Signalstrength");
	sleep(4)
	if (sigVert >  sigVertPrev && vert > vertPrev){
	vert -= 5;
	store(dishMed, "vertical", vert);
	sigVertPrev = sigVert;
	}
	if (sigVert < sigVertPrev && vert > vertPrev){
	vert += 5;
	store(dishMed, "vertical", vert);
	sigVertPrev = sigVert;
	}
	if (sigVert > sigVertPrev && vert < vertPrev){
	vert += 5;
	store(dishMed, "vertical", vert);
	sigVertPrev = sigVert;
	}
	if (sigVert < sigVertPrev && vert < vertPrev){
	vert -= 5;
	store(dishMed, "vertical", vert);
	sigVertPrev = sigVert;
	}
	if (sigVert = sigVertPrev && sigvert < 10){
	store(switch, "On", 0);
	store(light, "On", 1);
	store(dishLg, "vertical", vert);
}}