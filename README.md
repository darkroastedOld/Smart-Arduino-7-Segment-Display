# Smart Arduino 7 Segment Display
A GitHub repo for my DIY large smart seven segment display project
# How does it work?
This 7 segment display doesn't use tons of differently placed led's but instead uses the individually addressable led strips. I soldered 7 of these together with small jumper cables so that I could control the display with only 1 digital Arduino pin. 
# Materials Used
For this build I used the following materials and tools:
- Laptop with the Arduino IDE installed
- Arduino Nano with a USB cable
- 7 Individually addressable LED's
- Jumper wires - to connect everything
- Cardboard - for the frame
- Aluminum Foil - for the reflection and evenly spreading of light

Tools
- Soldering Iron
- Breadboard - for prototyping
- Scissors or another cutting tool
- Optional but highly recommended: Cutting board

# How to Build

The build is very easy and everyone can do this. All you need to do is cut out a 7 segment display or create one with cardboard. Then you need to use 7 individually addressable led's and wire them up together. The Dout should connect to the next LEDs Din pin.

Please be careful when building this!! There is a chance you might break something! I am not responsible for any damages you create while using this how-to or my code.

# How to program
You can use the FASTLED library to program this. I have included my sample sketch with has a custom function for the digits 0-9 and has a cool little snake animation. 

You can program it yourself by setting each led on or off
# Future Development Idea's
- Use multiple of these for a large timing screen
- Connect multiple of these to an ESP8266 to view live online statistics, such as Youtube views or subs, likes on Instagram or 
- 3D print the cardboard part

# Credits
- A huge thanks to the makers of the FAST LED library. Without them this project would have never been possible. Go check out their github https://github.com/FastLED/FastLED 
