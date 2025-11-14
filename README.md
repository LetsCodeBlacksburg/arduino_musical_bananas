# arduino_musical_bananas
LCBB Musical Bananas, beginner arduino input/output activity.

This is a fun little musical fruit organ (touch sensors) made from 3Mohm pull down
resistors into the Analog 0-5 pins, connected to pieces of fruit
to trigger the keys C-A (using pitches.h).  It's not a perfect quality 
sound with the constant polled reading of every analog input, but it's
good enough to get kids engaged. If anyone has a better key-polling method
please let me know.

Also.. I recommend using a small 8ohm speaker instead of a passive buzzer. But 
definately don't use an active buzzer. They're teerible for attempting to make
actual tones.

