# SkullTutorialTestwReadme

# Introduction

This tutorial will cover the mechanical, electrical, and software build so that you can create an animatronic skull that uses 8 servos, all run from a single 8-bit microcontroller. We will be using the PIC16F18855 chip on Microchip's Xpress development board: 

<p align="center">
  <img align="center" src="https://cloud.githubusercontent.com/assets/11512868/21235770/76374f84-c2b5-11e6-9304-a9be30eb3d10.png" width="400" height="300" />
</p>

Because the board does not contain enough independent PWM modules to run the number of servos, this tutorial show a novel method of creating an 8th independent PWM signal on a chip that currently contains only 7. I also include my BOM and Schematic for the electronics as well as instructions for fabrication of the skull. Let's get started!

# Building the Skull

First, let's cover getting the skull built.

## Bill of Materials

[![Alt text](https://img.youtube.com/vi/VID/0.jpg)](https://www.youtube.com/watch?v=VID)
*http://damien.pobel.fr/post/youtube-video-github/* <-- How to insert videos

Item | Quantity| Online Link
------------ | ------------- | -------------
Skull | 1 | https://www.amazon.com/gp/product/B00NT05OPO/ref=s9_simh_gw_g21_i3_r?ie=UTF8&fpl=fresh&pf_rd_m=ATVPDKIKX0DER&pf_rd_s=&pf_rd_r=G8JXBVJR7D7SXQDA35N7&pf_rd_t=36701&pf_rd_p=6aad23bd-3035-4a40-b691-0eefb1a18396&pf_rd_i=desktop
Hot Glue Extruder with Sticks | 1 | https://www.amazon.com/CCbetter-Temperature-Melting-Flexible-Projects/dp/B01178RVI2/ref=sr_1_3?ie=UTF8&qid=1477329839&sr=8-3&keywords=hot+glue+gun
10' 1-1/2" PVC Pipe | 1 | http://www.homedepot.com/p/1-1-2-in-x-10-ft-330-PSI-Schedule-40-PVC-DWV-Plain-End-Pipe-531111/100135041				
Turnigy TGY-9018MG Servo | 10 | http://www.hobbyking.com/hobbyking/store/__17322__Turnigy_8482_TGY_9018MG_MG_Servo_2_5kg_0_10sec_13g.html								
Threaded 2-56 Ball Link | 16 |  https://www.amazon.com/Great-Planes-Threaded-2-56-Ball/dp/B001BHEFUM/ref=sr_1_1?s=toys-and-games&ie=UTF8&qid=1477329613&sr=1-1&keywords=2-56+ball+link
Great Planes Threaded Pushrods | 6 | https://www.amazon.com/gp/product/B001BHGCZS/ref=ox_sc_act_title_1?ie=UTF8&psc=1&smid=ATVPDKIKX0DER
Mal to Male Jumper Wires | 1 Box | https://www.amazon.com/Phantom-YoYo-Dupont-Cable-10cm/dp/B00KOL8O6C/ref=sr_1_2?s=electronics&ie=UTF8&qid=1477329978&sr=1-2&keywords=male+to+male+jumper+wires
10k Ohm Resistor | 10 | https://www.amazon.com/dp/B00CVZ4DKU/ref=biss_dp_t_asn
(Optional) Perf Board | 1 | https://www.amazon.com/10Pcs-Prototype-Paper-Universal-Board/dp/B00ARTP1J4/ref=sr_1_1?ie=UTF8&qid=1477330293&sr=8-1&keywords=perf+board	
Ping Pong Ball | 2 | Any store
4-40 3/4" Screws | 1 Box | https://www.amazon.com/dp/B000MN3H50/ref=biss_dp_t_asn
Kobalt 1/2-in to 1/2-in U-Joint Socket Adapter | 1 | https://www.lowes.com/pd/Kobalt-1-2-in-to-1-2-in-U-Joint-Socket-Adapter/3380278		


The screws happened to be the screws on hand in the lab. Most screws will do the job as long as they fit the 4-40 spec.

## Overview

1. [Build the Jaw Mechanism](#building-the-jaw-mechanism)
2. [Build the Eyes Mechanism](#building-the-eye-mechanism)
3. [Build the Neck Mechanism](#building-the-neck-mechanism)
4. [(Optional) Build the Control Board](#building-the-control-board)
5. [(Optional) Build a Button](#building-a-button)
6. [Build the Base](#build-the-base)

## Building the Jaw Mechanism

First, take the skull and cut it open per the image shown in Figure 1. I cut out a lot of the upper and lower part of the back of the skull to give me plenty of room to work. The more you cut out, the more difficult it is to put back together later if you want to, so keep this in mind when deciding exactly how much to cut out. I probably could have been a little more liberal with my cutting.

<p align="center">
  <img  src="https://cloud.githubusercontent.com/assets/11512868/21245023/8abb30b0-c2dd-11e6-818b-338c0054e899.png" height="400" />
</p>

After you have cut open the head, take a drill ½” in diameter and drill a hole behind the cheek bone of the skull. This will serve as hole to connect our first rod between the first servo and the articulating Jaw. The placing for the first servo will be somewhat dependent on how you build your arm in the next step, so it is best to experiment with servo placement after you have built the arm and tested that the Jaw will move to the degree that you would like.

<p align="center">
  <img  src="https://cloud.githubusercontent.com/assets/11512868/21245998/14fe8b8c-c2e3-11e6-8c9c-1039909a88d1.png" height="400" />
</p>

There are no exact measurements for this part because it will depend somewhat on where you decide to place your first servo. My threaded rod was about 2” long. Take the threaded rod and cap it with a ball link on either side by  screwing the threaded rod into the ball link’s stalk. Take a very small drill bit, slightly smaller than the diameter of the threaded portion of your ball joint, and drill a hole in the jaw of the skull as seen in the pictures. After this, take the same drill bit and drill a hole in the servo arm to screw your other ball joint into. Push the two ball links on to the two ball joints, and secure both ball joints by attaching first a washer then a hex bolt to the back side of each ball joint as seen in the top Figure. After you have built the arm, and then placed and glued the servo, you are ready for the next section, the Eyes!

<p align="center">
  <img  src="https://cloud.githubusercontent.com/assets/11512868/21246295/0c89c5be-c2e5-11e6-83e5-1d5d36f8dbd3.png" height="600" />
</p>

## Building the Eye Mechanism

In the first step, we will be making the structure of the eyes. While I happened to have a pink and a purple ping pong ball handy, I would suggest the classic white if you have them. However, get funky, and creative! I look forward to seeing the combinations you come up with. The ping pong balls should have a line circling the entire balls where the two halves were originally formed together. Using that line for reference, move off center by ¼”, and cut the balls leaving you with a little more than half a ping pong ball. Finally, cut the PVC as indicated in the slide. Cut two sections of the PVC ¾” in length, then get two ping pong balls and cut them off center.

<p align="center">
  <img align="center" src="https://cloud.githubusercontent.com/assets/11512868/21269957/f29b53ce-c371-11e6-9aa1-9be207af403c.png" width="500" />
</p>

Cut another section of the PVC ½” in length, and separate two arcs ¼ of the entire diameter of the pipe. Glue these to the inside of the ping pong balls flush with the cut edge. This step will give us an anchor to attach the ball joint to which will be the pivot point our servo uses to turn each eye right and left. I found super glue worked particularly well to bond the pvc to the ping pong balls.

<p align="center">
  <img align="center" src="https://cloud.githubusercontent.com/assets/11512868/21270260/17802f56-c373-11e6-9b86-23e0c6a4354e.png" width="400" />
</p>

Insert Ball Joints into PVC Arcs. Taking the same drill bit we used to make holes for the ball joint in the jaw mechanism, drill holes deep enough to cover the stalk of the ball joints with the PVC up to the hex shaped stop on the ball joint. Taking some kind of glue ( I used super glue for this part) fasten the ball joints into the PVC arcs.

<p align="center">
  <img align="center" src="https://cloud.githubusercontent.com/assets/11512868/21271109/cf9cecb6-c376-11e6-9623-df883241b1aa.png" width="400" />
</p>

Now inserting a drill bit one size smaller than your 4-40 screws, drill four holes. Two in the top and bottom of the PVC, and one in the side. The top and bottom screws will serve as the rotation axis for the eyes to move left and right, while the middle screw will serve to securely connect the two halves of the eye together. If you want, you can really use any little piece of rod laying around that fits within the sizing of where it needs to be. This part will be fixed.

<p align="center">
  <img align="center" src="https://cloud.githubusercontent.com/assets/11512868/21271254/7e5673da-c377-11e6-8961-e9758d8414e2.png" width="400" />
</p>

Glue the top and bottom screws to the PVC, then connect the eyes. Your final completion should look something like this. The red rectangle indicates where the hidden screw is that serves as the bridge between the two eyes.

<p align="center">
  <img align="center" src="https://cloud.githubusercontent.com/assets/11512868/21271351/eaa6cc2e-c377-11e6-93a9-2cf37070ab96.png" width="400" />
</p>

Next, to add some life to your skull, glue an LED into each of the eyes. If you are using darker colored ping pong balls like the ones I have chosen, take a little time to sand down the thickness close to where the LEDs are mounted. Otherwise, it is difficult to see the life in the eyes. For mounting, I found hot glue worked well to bond the LEDs to the curved surface of the ping pong balls.

<p align="center">
  <img align="center" src="https://cloud.githubusercontent.com/assets/11512868/21271572/b781a944-c378-11e6-96a7-5e9d5e8b13e9.png" width="400" />
</p>

In order to get our eyes to move up and down as well as left and right, I chose to attach the left/right servos to the eye structure, and then to move the entire structure up and down to get that degree of freedom. In case you don’t know, a degree  of freedom is simply a particular direction a mechanism can move. Left/ Right and Up/Down would be two different degrees of freedom. You may notice the servo should end up at an angle, which I found was the best positioning for aligning the servo arm with the ball joint on each of the eyes. However, do not be afraid to experiment and find the position that will give you the best range of motion.

<p align="center">
  <img align="center" src="https://cloud.githubusercontent.com/assets/11512868/21271637/fd3bef62-c378-11e6-97d0-4f1b2633b26c.png" width="400" />
</p>

Cut two more pieces of the threaded rod to 2” in length. Drill a hole size to fit the rod ¼” deep into the face of the PVC holding the ping pong balls, as well as a similar diameter hole ½” deep into the PVC holding the servos. Glue the rods into place to connect the servo holder to the eye holder pieces

<p align="center">
  <img align="center" src="https://cloud.githubusercontent.com/assets/11512868/21271766/8097dd8a-c379-11e6-87d4-8062c652e119.png" width="400" />
</p>

For both eyes, drill two more holes towards the top of the servo holder pieces to hold two more rods. Then, slide one rod through concentric holes on the left and right eyes. Do this again for the other set of holes. Concentric holes just mean two holes that align. As you can see from my experimenting above, my first version was not very clean, but it got the job done! The main goal of this step is to connect the two sides of the eyes together at a second location so that when they move up and down, it will happen at the same rate.

<p align="center">
  <img align="center" src="https://cloud.githubusercontent.com/assets/11512868/21271859/f5d55a78-c379-11e6-858b-8190ddef449f.png" width="400" />
</p>

Add a ball joint to the servo horn, and then connect the ball joints on the eyes and servo horns via the accompanying ball links and a small piece (~1 ½”) of rod between the links. The manufacturer suggests using solder the rod to the links. Here is the final piece of the left/right puzzle. At this point, you may want to test your servos thus far to make sure everything is working properly. If so, fast forward to the programming section, and return to this point in the video once you are happy with the way things are moving.

<p align="center">
  <img align="center" src="https://cloud.githubusercontent.com/assets/11512868/21271925/438b3b2a-c37a-11e6-8ad2-bd9f5e86ca34.png" width="400" />
</p>

Insert the now complete L/R part of the eye mechanism into the skull by drilling holes in each temple and securing the skull connect screws into the skull with hex bolts.

<p align="center">
  <img align="center" src="https://cloud.githubusercontent.com/assets/11512868/21272005/a5338760-c37a-11e6-8914-4d0ee352f9ff.png" width="400" />
</p>

Cut another piece of PVC ¾” in length and cut a notch to the depth of the servo. Then, cut a curve in the other side of the PVC to match the curve of the bottom of the skull. This will be the control for your Up/Down motion. The weird cut in the bottom of the mounting PVC piece should align with the contour of the bottom of your skull towards the back. You want to place this piece as far back in the head as possible so that it may align with the back of the Left/Right mechanisms you have just created.

<p align="center">
  <img align="center" src="https://cloud.githubusercontent.com/assets/11512868/21272109/05dac9e8-c37b-11e6-941d-68d7144eecd8.png" width="400" />
</p>

Glue the new piece into the bottom of the skull with the servo glued in and attached.

<p align="center">
  <img align="center" src="https://cloud.githubusercontent.com/assets/11512868/21272170/4e4f45be-c37b-11e6-951d-148d642ee936.png" width="400" />
</p>

Finally, connect the previous servo to the L/R mechanism using ball links and joints with rod as in the previous examples. Once you have finished this, congrats you have finished two sections! All we have left to do on the mechanical build is the neck and the bonus activities.

<p align="center">
  <img align="center" src="https://cloud.githubusercontent.com/assets/11512868/21272237/a340810a-c37b-11e6-8b62-35926541dc2f.png" width="400" />
</p>

## Building the Neck Mechanism

Cut 1” PVC and cut 4 notches as shown in the picture below, 1 for each servo. This will serve as the connecting piece between the bottom of your skull and the 4 servos that control the four directions of your neck which are Forward, Backward, Left, and Right.

<p align="center">
  <img align="center" src="https://cloud.githubusercontent.com/assets/11512868/21272374/33e23942-c37c-11e6-9963-753465a1e683.png" width="400" />
</p>

Cut a hole in the bottom of the skull slightly smaller than ½” to fit the universal joint male lead into, then glue the pvc inlaid with servos around the hole.

<p align="center">
  <img align="center" src="https://cloud.githubusercontent.com/assets/11512868/21272669/8c5cae4e-c37d-11e6-8768-ea8894133aba.png" width="400" />
</p>

Glue the universal joint to a flat piece of wood ~ 1 ½” by 1 ½”. Then, cut a piece of the PVC 1 ½” in length in half. Drill a hole 1” in diameter in the curve of the PVC and then glue the PVC to the piece of wood. Lastly, take the universal joint, push it through the hole in the PVC, and glue it to the wood.

<p align="center">
  <img align="center" src="https://cloud.githubusercontent.com/assets/11512868/21272774/e112a04c-c37d-11e6-8473-fa21cda9eff0.png" width="400" />
</p>

Make 4 Ball Joint connectors with rods 3 ¾” in length. These pieces will run between your mounting piece and the servos to give them a base from which to move the head. This being said, while I found 3 ¾” to be an effective length, you could probably make them shorter if you were running low on materials. However, make sure they are long enough that, once attached to the base, the servos arms are not being twisted to accommodate for the short connecting rods.

<p align="center">
  <img align="center" src="https://cloud.githubusercontent.com/assets/11512868/21272909/5545e4ec-c37e-11e6-8260-d8cdcd1a2ca2.png" width="400" />
</p>

Cut a piece of PVC 6 ½” long and attach the universal joint assembly to one end with glue. Take the head piece and connect it to the neck by inserting the male end of the universal joint into the hole cut into the bottom of the head. 

<p align="center">
  <img align="center" src="https://cloud.githubusercontent.com/assets/11512868/21272978/aca6997a-c37e-11e6-87ee-72989612cb0d.png" width="400" />
</p>

Attach 4 ball joints 2 ½” down the PVC from the base of the assembly. Each will be positioned off center from the center of the servo horns in the neck, so wait to permanently attach the joints to the PVC until you make sure the distances of everything work. This step will take some work to make sure the positioning of everything is correct. I strongly recommend if you have not already to try programming some of the servos to make sure the movements are correct for what you are looking for. I will go into more detail in the explanation of the code, but the positioning of every servo will be unique. While my set-up works with the duty cycles I have chosen for my program, these numbers will most likely change depending on the location of your servo heads. 

<p align="center">
  <img align="center" src="https://cloud.githubusercontent.com/assets/11512868/21273056/1115b63e-c37f-11e6-9610-198407e6f693.png" width="400" />
</p>

## Build the Control Board

This is the schematic, or diagram of how the system is wired together. Each servo has attached what is called a Pull Down Resistor to their signal wires. This keeps stray noise, or electrical interference, from causing the servos to move when we do not want them to. The servos used in this tutorial can go up to 6V, but we will use a 5V rail because the power supply available was only rated to 5V. While the servos may move slightly slower, that will not be a big problem. If you want to use the servos at a faster speed, then all you need to do is bump this power up to 6V. Finally, and this is very important to remember, all the grounds, including that of the Xpress board, must be connected. Otherwise, it will introduce problems into our system that we do not want to deal with! The two LEDs shown are the two LEDs in the eyes of the Skull. 

<p align="center">
  <img align="center" src="https://cloud.githubusercontent.com/assets/11512868/21273180/9da0c350-c37f-11e6-98ce-e0b968b5d628.png" width="400" />
</p>
