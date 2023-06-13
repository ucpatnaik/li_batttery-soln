# li_batttery-soln
**Issue Description:**

An easy solution to premature failure of Lithium-Ion Battery using Arduino
Many electronic devices, such as smartwatches, frequently encounter the problem of Lithium-Ion batteries swelling and failing prematurely. This issue has persisted since the initial introduction of these batteries and continues with the latest models even. Although it appears to be a design flaw, it is surprising that how could a global leader like Apple would make such serious mistakes. It could be a defective battery or for some other reason perhaps to limit the lifespan of the watch, presumably for techno-commercial reasons.

**Underlying Reasoning**:

Sensitivity of Lithium-Ion Batteries to Over-Temperature
Lithium-Ion batteries are highly sensitive to various factors, with over-temperature being a critical parameter. Monitoring the temperature of each individual battery cell, whether they are single, in series, or in series-parallel configurations, is essential. Ideally, after the battery reaches full charge, the charging current should decrease to zero. Failure to achieve this results in unnecessary current flow, leading to temperature rise, swelling, and eventual failure. In the case of our example smartwatches, the battery swelling causes the display unit to protrude from its chamber. However, when multiple cells are employed in other gadgets, a Battery Management System (BMS) is usually implemented which is beyond the scope of this simple discussion.

**Proposed Solution**:

Current Sensing Circuit with Arduino Simulation
To address this issue, a current sensing circuit is introduced between the charger output and the device being used. This circuit cuts off the output once the battery current reaches a significantly low level. Provided here is an Arduino simulation circuit along with a program code specifically designed for smartwatches, which can be readily utilized. For other devices, suitable modifications in the hardware arrangement and a minor adjustment in the code will resolve the problem, as explained in the accompanying video.
The circuit (link below) uses an Arduino to drive a MOSFET Z44, Q1 through R2 330R from D3. An indication LED is driven from the same pin through another 300R. A variable resistance RV2 as the load is used just for simulation purposes. Varying the value of RV2 the current is changed which actually happens in real battery charging. In order to ascertain the real charging current and fully charged current while the battery is in use ( Measure the current in a multimeter) or a low-cost device as shown that reads both voltage and current. Note down the fully charged current readings. Choose the value of R5 or use one-ohm 1-watt resistor. Read the voltage drop across the R5 while fully charged and during charging. This is fed to A0 of Arduino. Correct some what mid-value in the program say 0.2 volt as we have taken. The volt meter and ammeter used are for simulation purposes only. The delay time is taken in the program for 3 seconds ie  3000 mili seconds for simulation purposes only.  Change the delay time to say 30000.    However, in practice, the output should be fed to the battery. For ease of use take a USB socket at the RV2 points (not using the RV2). The best will be to take a USB extension cord and cut it into 2 pieces. Use the male end to the 5-volt adapter for feeding the power to the circuit and the female end connected at the RV2 points (not using the RV2).

**[Circuit]**

(https://github.com/ucpatnaik/li_batttery-soln/assets/10235434/969f8ec8-ece9-40a8-bea5-060db6a92ece)
