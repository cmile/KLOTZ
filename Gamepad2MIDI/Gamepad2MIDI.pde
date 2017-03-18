import net.java.games.input.*;
import org.gamecontrolplus.*;
import org.gamecontrolplus.gui.*;

import themidibus.*;

int CHANNEL = 10;
int VELOCITY = 127;

MidiBus output;
ControlIO controlIO;
ControlDevice joypad;
ControlSlider sliderX;
ControlSlider sliderY;

void setup(){
  size(400,400);
  controlIO = ControlIO.getInstance(this); 
  joypad = controlIO.getMatchedDevice("KLOTZ"); //getDevice(2);
  if (joypad == null) {
    println("No suitable device configured");
    System.exit(-1); // End the program NOW!
  }
  joypad.plug(this, "handleButton1Press",   ControlIO.ON_PRESS, "B1");
  joypad.plug(this, "handleButton1Release", ControlIO.ON_RELEASE, "B1");
  joypad.plug(this, "handleButton2Press",     ControlIO.ON_PRESS, "B2");
  joypad.plug(this, "handleButton2Release", ControlIO.ON_RELEASE, "B2");
  joypad.plug(this, "handleButton3Press",     ControlIO.ON_PRESS, "B3");
  joypad.plug(this, "handleButton3Release", ControlIO.ON_RELEASE, "B3");
  joypad.plug(this, "handleButton4Press",     ControlIO.ON_PRESS, "B4");
  joypad.plug(this, "handleButton4Release", ControlIO.ON_RELEASE, "B4");
  joypad.plug(this, "handleButton5Press",     ControlIO.ON_PRESS, "B5");
  joypad.plug(this, "handleButton5Release", ControlIO.ON_RELEASE, "B5");
  joypad.plug(this, "handleButton6Press",     ControlIO.ON_PRESS, "B6");
  joypad.plug(this, "handleButton6Release", ControlIO.ON_RELEASE, "B6");
  joypad.plug(this, "handleButton7Press",     ControlIO.ON_PRESS, "B7");
  joypad.plug(this, "handleButton7Release", ControlIO.ON_RELEASE, "B7");
  joypad.plug(this, "handleButton8Press",     ControlIO.ON_PRESS, "B8");
  joypad.plug(this, "handleButton8Release", ControlIO.ON_RELEASE, "B8");
  joypad.plug(this, "handleButton9Press",     ControlIO.ON_PRESS, "B9");
  joypad.plug(this, "handleButton9Release", ControlIO.ON_RELEASE, "B9");
  joypad.plug(this, "handleButton10Press",     ControlIO.ON_PRESS, "B10");
  joypad.plug(this, "handleButton10Release", ControlIO.ON_RELEASE, "B10");
  joypad.plug(this, "handleButton11Press",     ControlIO.ON_PRESS, "B11");
  joypad.plug(this, "handleButton11Release", ControlIO.ON_RELEASE, "B11");
  joypad.plug(this, "handleButton12Press",     ControlIO.ON_PRESS, "B12");
  joypad.plug(this, "handleButton12Release", ControlIO.ON_RELEASE, "B12");
  sliderX = joypad.getSlider("B13u15");
  sliderY = joypad.getSlider("B14u16");
  output = new MidiBus(this, -1, "loopMIDI Port");
}

void keyPressed()
{
  // if the key is between 'A'(65) and 'z'(122)
  if( key == 'a') {
     CHANNEL = 15;
  } else if( key == 's') {
     CHANNEL = 14;    
  }
}

void handleButton1Press(){ output.sendNoteOn (CHANNEL, 0xC, VELOCITY); println("Button 1: 0x0C Note On"); }
void handleButton1Release(){ output.sendNoteOff(CHANNEL, 0xC, VELOCITY); println("Button 1: 0x0C Note Off"); }
void handleButton2Press(){ output.sendNoteOn (CHANNEL, 0xD, VELOCITY); println("Button 2: 0x0D Note On"); }
void handleButton2Release(){ output.sendNoteOff(CHANNEL, 0xD, VELOCITY); println("Button 2: 0x0D Note Off"); }
void handleButton3Press(){ output.sendNoteOn (CHANNEL, 0xE, VELOCITY); println("Button 3: 0x0E Note On"); }
void handleButton3Release(){ output.sendNoteOff(CHANNEL, 0xE, VELOCITY); println("Button 3: 0x0E Note Off"); }
void handleButton4Press(){ output.sendNoteOn (CHANNEL, 0xF, VELOCITY); println("Button 4: 0x0F Note On"); }
void handleButton4Release(){ output.sendNoteOff(CHANNEL, 0xF, VELOCITY); println("Button 4: 0x0F Note Off"); }
void handleButton5Press(){ output.sendNoteOn (CHANNEL, 0x8, VELOCITY); println("Button 5: 0x08 Note On"); }
void handleButton5Release(){ output.sendNoteOff(CHANNEL, 0x8, VELOCITY); println("Button 5: 0x08 Note Off"); }
void handleButton6Press(){ output.sendNoteOn (CHANNEL, 0x9, VELOCITY); println("Button 6: 0x09 Note On"); }
void handleButton6Release(){ output.sendNoteOff(CHANNEL, 0x9, VELOCITY); println("Button 6: 0x09 Note Off"); }
void handleButton7Press(){ output.sendNoteOn (CHANNEL, 0xA, VELOCITY); println("Button 7: 0x0A Note On"); }
void handleButton7Release(){ output.sendNoteOff(CHANNEL, 0xA, VELOCITY); println("Button 7: 0x0A Note Off"); }
void handleButton8Press(){ output.sendNoteOn (CHANNEL, 0xB, VELOCITY); println("Button 8: 0x0B Note On"); }
void handleButton8Release(){ output.sendNoteOff(CHANNEL, 0xB, VELOCITY); println("Button 8: 0x0B Note Off"); }
void handleButton9Press(){ output.sendNoteOn (CHANNEL, 0x4, VELOCITY); println("Button 9: 0x04 Note On"); }
void handleButton9Release(){ output.sendNoteOff(CHANNEL, 0x4, VELOCITY); println("Button 9: 0x04 Note Off"); }
void handleButton10Press(){output.sendNoteOn (CHANNEL, 0x5, VELOCITY); println("Button 10: 0x05 Note On"); }
void handleButton10Release(){output.sendNoteOff(CHANNEL, 0x5, VELOCITY); println("Button 10: 0x05 Note Off"); }
void handleButton11Press(){output.sendNoteOn (CHANNEL, 0x6, VELOCITY); println("Button 11: 0x06 Note On"); }
void handleButton11Release(){output.sendNoteOff(CHANNEL, 0x6, VELOCITY); println("Button 11: 0x06 Note Off"); }
void handleButton12Press(){output.sendNoteOn (CHANNEL, 0x7, VELOCITY); println("Button 12: 0x07 Note On"); }
void handleButton12Release(){output.sendNoteOff(CHANNEL, 0x7, VELOCITY); println("Button 12: 0x07 Note Off"); }

float oldX=0;
float oldY=0;

void draw(){
  float x = sliderX.getValue();
  float y = sliderY.getValue();  
  
  if (oldX != x) {
    if (x > -0.5 && x < 0.5) {
      if (oldX < -0.5) {
        CHANNEL = 12;
        println("Switched to channel: " + CHANNEL);
        /*
        output.sendNoteOff(CHANNEL, 0x3, VELOCITY); 
        println("Button 16: 0x03 Note Off");
        */
      } else if (oldX > 0.5) {
        CHANNEL = 10;
        println("Switched to channel: " + CHANNEL);
        /*
        output.sendNoteOff(CHANNEL, 0x1, VELOCITY);
        println("Button 14: 0x01 Note Off"); 
        */
      }
    } else {
      if (x < -0.5) {
        /*
        output.sendNoteOn(CHANNEL, 0x3, VELOCITY);
        println("Button 16: 0x03 Note On");
        */
      } else if (x > 0.5) {
        /*
        output.sendNoteOn(CHANNEL, 0x1, VELOCITY);
        println("Button 14: 0x01 Note On");
        */
      }
    }
    oldX = x;       
  }
  if (oldY != y) {
    if (y > -0.5 && y < 0.5) {
      if (oldY < -0.5) {
        CHANNEL = 11;
        println("Switched to channel: " + CHANNEL);
        /*
        output.sendNoteOff(CHANNEL, 0x2, VELOCITY); 
        println("Button 15: 0x02 Note Off"); 
        */
      } else if (oldY > 0.5) {
        CHANNEL = 9;
        println("Switched to channel: " + CHANNEL);
        /*
        output.sendNoteOff(CHANNEL, 0x0, VELOCITY);
        println("Button 13: 0x00 Note Off");
        */
      }
    } else {
      if (y < -0.5) {
        /*
        output.sendNoteOn(CHANNEL, 0x2, VELOCITY);
        println("Button 15: 0x02 Note On");
        */
      } else if (y > 0.5) {
        /*
        //CHANNEL = 9;
        output.sendNoteOn(CHANNEL, 0x0, VELOCITY);
        println("Button 13: 0x00 Note On");
        */
      }
    }
    oldY = y;       
  }
}