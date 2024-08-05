# Build a venus flytrap that snaps at intruders!

This project uses a servo and a photoresistor to create a very basic responsive circuit. You can also use an ultrasonic proximity sensor, but I wanted something that could be more easily hidden in the final design. The photoresistor uses darkness as a proxy for a hand or object being near the flytrap.

If you've never used an Arduino before, feel free to check out the beginner tutorials on my website at www.shebuildsrobots.org, where you can find more detailed information on how to set up your code and circuit.

The basic circuit is below. You'll want to solder extra-long legs onto the photoresistor or use hookup wires to integrate it into your venus flytrap.

![Circuit Diagram](https://github.com/user-attachments/assets/28a52663-ef5d-4161-be07-a8b0d1e3b83d)

Rather than using static light threhold values, you could opt to take a light reading of the room, e.g. over 100 measurements and average them at setup time. When a light reading sufficiently below the room average is found, the flytrap could be edited to snap closed. If you're having trouble tuning the threshold, use the Serial Monitor to diagnose your readings.
