QRCodeTexture2D module for GodotEngine 4.x
========================================

![image](https://user-images.githubusercontent.com/3649998/129288546-55b03061-2dd1-4555-9b6b-9409c503355f.png)

Introduction
------------

A new texture type is added to GodotEngine by this module: QRCodeTexture2D.

This new texture is a QR Code generated from a given content String.

This module uses [Nayuki's QR Code generator library](https://www.nayuki.io/page/qr-code-generator-library) under MIT Licence.

Features
--------

* Generate a QR Code image texture from a string content (can be an URL)
* Customizable colour (be careful with contrast to keep high readability for scanners)
* 4 error correction levels (QR Code Model 2 standard)
* Customizable border thickness

https://user-images.githubusercontent.com/3649998/129322688-2f935abb-aa07-446d-895a-25694b15921e.mp4

Installation
------------

This project is an addon module for GodotEngine. [Recompile recompile the engine from sources](https://docs.godotengine.org/en/stable/development/compiling/index.html) to use it.

* Clone this repository in the Godot sources **modules** folder or create a **qrcode** folder in the **modules** folder and copy the files manually.
* Recompile the engine

Usage
-----

QRCodeTexture can be used as any other texture in the engine.

Most common usage: Display a QRCode in a UI using a TextureRect node.

* Create a TextureRect node.
* From the inspector, check the **Expand** checkbox and select **Keep Aspect** for **Stretch Mode** to prevent deformation when resizing the QR Code.
* Add a new **QRCodeTexture2D** in the **texture** slot.

![image](https://user-images.githubusercontent.com/3649998/129286912-ba39c662-4258-4982-a334-beebfb0aecf5.png)

* The default content is empty. Generated QR Codes contain no data.
* Add content (text, URL...) in the **content** text area.

Optional :

* Customize the **colour**. Default is black. Keep a high contrast level for scanner readability.
* Customize **Border** thickness (default is 1 square).
* Choose **Error Correction Level**. QR Code contains redundant data allowing scanners to read the QR Code even if a part is missing or dirty.

Default correction level is set to 1 (Low) (allow 7% correction capability)

2 (Medium) allow 15% correction capability

3 (Quartile) allow 25% correction capability

4 (High) allow 30% correction capability

![image](https://user-images.githubusercontent.com/3649998/129288506-3b33892a-ea43-4bd7-a584-c034644a538e.png)

License
-------

See [License file](./LICENSE)
