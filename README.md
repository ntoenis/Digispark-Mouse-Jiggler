1. The first step of programming the Digispark is downloading the latest Arduino programming IDE.
Go to the Arduino website and download and install the Arduino IDE.
https://www.arduino.cc/en/Main/Software
![The image below shows the contents of the folder extracted from the downloaded zipped file.](https://startingelectronics.org/tutorials/arduino/digispark/digispark-windows-setup/arduino-folder.png)

2. Install the Digispark Board Support Package

Start the Arduino IDE application and open Preferences Dialog box.
From the top menu of the Arduino IDE application, select File → Preferences to open the Preferences dialog box.

Paste the following in the Additional Boards Manager URLs: box of the Preferences dialog box:
http://digistump.com/package_digistump_index.json

![The image below shows the Additional Boards Manager URLs field of the Preferences dialog box.](https://startingelectronics.org/tutorials/arduino/digispark/digispark-windows-setup/arduino-preferences-urls.png)

Click the OK button to close the dialog box.

Open Boards Manager Dialog Box
In the Arduino IDE, use the top menu to navigate to Tools → Board → Boards Manager... to open the Boards Manager dialog box.

Type Digispark into the search field at the top of the Boards Manager dialog box that contains the text "Filter your search..." to easily find the Digispark package.

After filtering the packages, Digistump AVR Boards is displayed in the Boards Manager dialog box. Click the Install button at the bottom right of the Digistump item in the dialog box, as shown in the image below.
Digispark board support package in the Arduino IDE Boards Manager dialog box

![The image below shows the boards manager](https://startingelectronics.org/tutorials/arduino/digispark/digispark-windows-setup/digispark-board-package.png)

After clicking the Install button, the package will start installing. This may take a while, depending on the internet speed.

When installation completes, click the Close button at the bottom right of the dialog box.

3. Install the Digispark Drivers

Download the Digispark Digistump Drivers for Windows.

Unzip the Digistump.Drivers.zip file downloaded from the above link and extract the Digistump Drivers folder from it.

Open the unzipped Digistump Drivers folder, as shown in the following image.

![Unzipped Digistump Drivers folder with Windows drivers for Digispark.](https://startingelectronics.org/tutorials/arduino/digispark/digispark-windows-setup/digistump-drivers-folder.png)

Double-click either DPinst64.exe on a 64-bit Windows computer, or DPinst.exe on a 32-bit Windows computer to install the Digispark drivers or just click Install Drivers.exe to have it automatically detected.

When prompted to install the driver with the following dialog box, click the Install button.

![Windows Security dialog box displaying: Would you like to install this device software? Digistump LLC Ports.](https://startingelectronics.org/tutorials/arduino/digispark/digispark-windows-setup/digistum-driver-install.png)

If a dialog box pops up that displays Windows can't verify the publisher of this driver software, click the Install this driver software anyway button(be smart though).

![Publisher Window Warning.](https://startingelectronics.org/tutorials/arduino/digispark/digispark-windows-setup/digistump-driver-install-warning.png)

After the driver installation has finished, click the Finish button in the Device Driver Installation dialog box. 

Once everything is installed you're ready to open the project file in this repository. 

Select the Digispark Board in the Arduino IDE

From the top menu in the Arduino IDE, select Tools → Board → Digistump AVR Boards → Digispark (Default - 16.5MHz) to select the Digispark board.
Load the  Sketch to the IDE --> Click the Arduino Upload button on the top toolbar before plugging the Digispark board into a USB port --> Wait for the prompt at the bottom of the Arduino IDE window, as shown in the following image.

![start upload message output.](https://startingelectronics.org/tutorials/arduino/digispark/digispark-windows-setup/digispark-start-upload.png)

When the prompt Plug in device now... (will timeout in 60 seconds) appears, plug the Digispark board into a USB port of the computer.

After the sketch finishes uploading, a success message running: 100% complete and >> Micronucleus done. Thank you! appears at the bottom of the Arduino IDE window, as can be seen in the following image.

![completed message output.](https://startingelectronics.org/tutorials/arduino/digispark/digispark-windows-setup/digispark-finished-upload.png)

