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
