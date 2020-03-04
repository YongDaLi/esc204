::: {.site-container}
-   [Skip to primary
    navigation](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#genesis-nav-primary){.screen-reader-shortcut}
-   [Skip to main
    content](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#genesis-content){.screen-reader-shortcut}
-   [Skip to primary
    sidebar](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#genesis-sidebar-primary){.screen-reader-shortcut}
-   [Skip to
    footer](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#genesis-footer-widgets){.screen-reader-shortcut}

::: {.wrap}
::: {.title-area}
[PyImageSearch](https://www.pyimagesearch.com/)

You can master Computer Vision, Deep Learning, and OpenCV -
PyImageSearch
:::

::: {.wrap}
-   [[About](https://www.pyimagesearch.com/about/)]{#menu-item-12816}
-   [[FAQ](https://www.pyimagesearch.com/faqs/)]{#menu-item-12817}
-   [[Contact](https://www.pyimagesearch.com/contact/)]{#menu-item-12818}
:::

::: {.main-nav-wrap}
-   [[Get
    Started](https://www.pyimagesearch.com/start-here/)]{#menu-item-11459}
-   [[Topics](https://www.pyimagesearch.com/topics/)]{#menu-item-10696}
    -   [[Deep
        Learning](https://www.pyimagesearch.com/category/deep-learning/)]{#menu-item-10698}
    -   [[Dlib
        Library](https://www.pyimagesearch.com/category/dlib/)]{#menu-item-10699}
    -   [[Embedded/IoT and Computer
        Vision](https://www.pyimagesearch.com/category/embedded/)]{#menu-item-10700}
    -   [[Face
        Applications](https://www.pyimagesearch.com/category/faces/)]{#menu-item-10701}
    -   [[Image
        Processing](https://www.pyimagesearch.com/category/image-processing/)]{#menu-item-10702}
    -   [[Interviews](https://www.pyimagesearch.com/category/interviews/)]{#menu-item-10703}
    -   [[Keras and
        TensorFlow](https://www.pyimagesearch.com/category/keras-and-tensorflow/)]{#menu-item-10704}
    -   [[Machine Learning and Computer
        Vision](https://www.pyimagesearch.com/category/machine-learning/)]{#menu-item-10705}
    -   [[Medical Computer
        Vision](https://www.pyimagesearch.com/category/medical/)]{#menu-item-10706}
    -   [[Optical Character Recognition
        (OCR)](https://www.pyimagesearch.com/category/optical-character-recognition-ocr/)]{#menu-item-10707}
    -   [[Object
        Detection](https://www.pyimagesearch.com/category/object-detection/)]{#menu-item-10708}
    -   [[Object
        Tracking](https://www.pyimagesearch.com/category/object-tracking/)]{#menu-item-10709}
    -   [[OpenCV
        Tutorials](https://www.pyimagesearch.com/category/opencv/)]{#menu-item-10711}
    -   [[Raspberry
        Pi](https://www.pyimagesearch.com/category/raspberry-pi/)]{#menu-item-10710}
-   [[Books and
    Courses](https://www.pyimagesearch.com/books-and-courses/)]{#menu-item-12831}
-   [[OpenCV Install
    Guides](https://www.pyimagesearch.com/opencv-tutorials-resources-guides/)]{#menu-item-2615}
-   [[Blog](https://www.pyimagesearch.com/blog/)]{#menu-item-12845}
-   [[About](https://www.pyimagesearch.com/about/)]{#menu-item-2619}
-   [[FAQ](https://www.pyimagesearch.com/faqs/)]{#menu-item-10258}
-   [[Contact](https://www.pyimagesearch.com/contact/)]{#menu-item-6744}

::: {.header-search}
[Search]{.screen-reader-text}

[Search\...]{.screen-reader-text}

[Submit]{.screen-reader-text}
:::

Menu

Close[Menu]{.screen-reader-text}
:::
:::

::: {.pyi-page-hero}
::: {.wrap}
[[OpenCV Tutorials](https://www.pyimagesearch.com/category/opencv/)
[Tutorials](https://www.pyimagesearch.com/category/tutorials/)]{.entry-categories}

Install OpenCV 4 on your Raspberry Pi {#install-opencv-4-on-your-raspberry-pi .entry-title}
=====================================

by [[[Adrian
Rosebrock]{.entry-author-name}](https://www.pyimagesearch.com/author/adrian/){.entry-author-link}]{.entry-author}
on September 26, 2018

::: {.pyi-hero-left}
:::

::: {.pyi-hero-right}
:::
:::
:::

::: {.site-inner}
::: {.wrap}
::: {.content-sidebar-wrap}
::: {#genesis-content .content role="main"}
::: {.entry-content}
[![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/install-opencv4-rpi-header.jpg){.aligncenter
.wp-image-8559 width="600" height="400"
sizes="(max-width: 600px) 100vw, 600px"
srcset="https://www.pyimagesearch.com/wp-content/uploads/2018/08/install-opencv4-rpi-header.jpg 1000w, https://www.pyimagesearch.com/wp-content/uploads/2018/08/install-opencv4-rpi-header-300x200.jpg 300w, https://www.pyimagesearch.com/wp-content/uploads/2018/08/install-opencv4-rpi-header-768x512.jpg 768w"}](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/install-opencv4-rpi-header.jpg)

Today I'm going to show you how to compile and install OpenCV 4 on your
Raspberry Pi.

OpenCV 4 was [officially released](https://opencv.org/opencv-4-0-0.html)
on November 20th, 2018.

This blog post was updated subsequently on November 28th to accommodate
the changes to the install (previously these instructions linked to the
alpha release source code).

It is also possible to [pip install OpenCV as
well!](https://pyimagesearch.com/2018/09/19/pip-install-opencv/) As of
this update however, PyPi does not contain precompiled OpenCV 4 binaries
which can be installed via pip.

Therefore, if you want OpenCV 4 then you'll need to compile from source.

**To learn how to install OpenCV 4 on your Raspberry Pi, *just follow
this tutorial!***

::: {#pyi-source-code-block .source-code-wrap}
::: {.gpd-source-code}
::: {.gpd-source-code-content}
![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/source-code-icon.png)

#### Looking for the source code to this post?

Jump Right To The Downloads Section
:::
:::
:::

Install OpenCV 4 on your Raspberry Pi
-------------------------------------

In this blog post, we're going to install OpenCV 4 on your Raspberry Pi.
OpenCV 4 has a goal of reducing bloat, adding optimizations, and
updating the deep learning module.

***Note:*** *There are many install guides on my blog. Before you begin,
be sure to check out the available install tutorials on my **[OpenCV
installation
guides](https://pyimagesearch.com/opencv-tutorials-resources-guides/)**
page.*

First we'll cover assumptions that go along with this tutorial.

From there, we'll walk through 7 steps to compile and install OpenCV 4
on your Raspberry Pi. Compiling from source allows us to have full
control over the compile and build. It also allows us to grab the latest
code --- something that pip and apt-get don't offer.

Finally, we'll test our OpenCV 4 install on our Raspberry Pi with a fun
project.

Let's get started.

### Assumptions

In this tutorial, I am going to assume that you already own a
**[Raspberry Pi 3 B](https://amzn.to/2OzzWKi)** or the
newer **[Raspberry Pi 3 B+](https://amzn.to/2xxGhOO)** with **[Raspbian
Stretch installed](https://www.raspberrypi.org/downloads/raspbian/)**.

If you don't already have the Raspbian Stretch OS, you'll need to
upgrade your OS to take advantage of [Raspbian Stretch's new
features](https://www.raspberrypi.org/blog/raspbian-stretch/).

To upgrade your Raspberry Pi 3 to Raspbian Stretch, you may [download it
here](https://www.raspberrypi.org/downloads/raspbian/) and follow these
[upgrade
instructions](https://www.raspberrypi.org/documentation/installation/installing-images/README.md)
(or [these for the NOOBS
route](https://www.raspberrypi.org/downloads/noobs/) which is
recommended for beginners). The former instructions take approximately
10 minutes to download via a torrent client and about 10 minutes to
flash the SD card with Etcher or another tool. At that point you can
power up and proceed to the next section.*\
*

Assuming that your OS is up to date, you'll need one of the following
for the remainder of this post:

-   *Physical access* to your Raspberry Pi 3 so that you can open up a
    terminal and execute commands
-   *Remote access* via SSH or VNC.

I'll be doing the majority of this tutorial via SSH, but as long as you
have access to a terminal, you can easily follow along.

***Can't SSH?*** If you see your Pi on your network, but can't ssh to
it, you may need to enable SSH. This can easily be done via the
Raspberry Pi desktop preferences menu (you'll need an HDMI cable and a
keyboard/mouse) or running

::: {.enlighter-default .enlighter-v-inline .enlighter-t-pyis-enlighter-theme}
[[sudo service ssh start]{.enlighter-text}]{.enlighter}
:::

`sudo service ssh start`{.EnlighterJSRAW .enlighter-origin
enlighter-language="generic"}  from the command line of your Pi.

After you've changed the setting and rebooted, you can test SSH directly
on the Pi with the localhost address. Open a terminal and type

::: {.enlighter-default .enlighter-v-inline .enlighter-t-pyis-enlighter-theme}
[[ssh pi\@127.0.0.]{.enlighter-text}[1]{.enlighter-n1}]{.enlighter}
:::

`ssh pi@127.0.0.1`{.EnlighterJSRAW .enlighter-origin
enlighter-language="shell"}  to see if it is working. To SSH from
another computer you'll need the Pi's IP address --- you could figure it
out by looking at your router's clients page or by running

::: {.enlighter-default .enlighter-v-inline .enlighter-t-pyis-enlighter-theme}
[[ifconfig]{.enlighter-text}]{.enlighter}
:::

`ifconfig`{.EnlighterJSRAW .enlighter-origin
enlighter-language="shell"}  on the Pi itself.

***Keyboard layout giving you problems?*** Change your keyboard layout
by going to the Raspberry Pi desktop preferences menu. I use the
standard US Keyboard layout, but you'll want to select the one
appropriate for you.

### Step \#1: Expand filesystem on your Raspberry Pi

To get the OpenCV 4 party started, fire up your Raspberry Pi and open an
SSH connection (alternatively use the Raspbian desktop with a keyboard +
mouse and launch a terminal).

Are you using a *brand new* install of Raspbian Stretch?

If so, the first thing you should do is expand your filesystem to
include *all available space* on your micro-SD card:

::: {.enlighter-default .enlighter-v-codegroup .enlighter-t-pyis-enlighter-theme .enlighter-linenumbers}
::: {.enlighter-codegroup-switch}
::: {.enlighter-btn .enlighter-active}
Install OpenCV 4 on your Raspberry Pi
:::
:::

::: {.enlighter-codegroup-wrapper}
::: {.enlighter-toolbar}
::: {.enlighter-btn .enlighter-btn-raw}
:::

::: {.enlighter-btn .enlighter-btn-copy}
:::

::: {.enlighter-btn .enlighter-btn-window}
:::

::: {.enlighter-btn .enlighter-btn-website}
:::
:::

::: {style="display: block;"}
::: {.enlighter style=""}
<div>

<div>

[\$ sudo raspi-config]{.enlighter-text}

</div>

</div>
:::

``` {.enlighter-raw}
$ sudo raspi-config
```
:::
:::
:::

``` {.EnlighterJSRAW .enlighter-origin enlighter-language="shell" enlighter-theme="" enlighter-highlight="" enlighter-linenumbers="true" enlighter-lineoffset="" enlighter-title="Install OpenCV 4 on your Raspberry Pi" enlighter-group="3"}
$ sudo raspi-config
```

And then select the *"Advanced Options"* menu item:

![**Figure 1:** Selecting the "Advanced Options" from the `raspi-config`
menu to expand the Raspbian file system on your Raspberry Pi is
important before installing OpenCV 4. Next we'll actually expand the
filesystem.](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/install-opencv4-rpi-raspiconfig.jpg){.wp-image-8547
width="600" height="453" sizes="(max-width: 600px) 100vw, 600px"
srcset="https://www.pyimagesearch.com/wp-content/uploads/2018/08/install-opencv4-rpi-raspiconfig.jpg 1000w, https://www.pyimagesearch.com/wp-content/uploads/2018/08/install-opencv4-rpi-raspiconfig-300x227.jpg 300w, https://www.pyimagesearch.com/wp-content/uploads/2018/08/install-opencv4-rpi-raspiconfig-768x580.jpg 768w"}

Followed by selecting *"Expand filesystem"*:

![**Figure 2:** The Raspberry Pi "Expand Filesystem" menu allows us to
take advantage of our entire flash memory card. This will give us space
necessary to install OpenCV 4 and other
packages.](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/install-opencv4-rpi-expandfs.jpg){.wp-image-8548
width="600" height="453" sizes="(max-width: 600px) 100vw, 600px"
srcset="https://www.pyimagesearch.com/wp-content/uploads/2018/08/install-opencv4-rpi-expandfs.jpg 1000w, https://www.pyimagesearch.com/wp-content/uploads/2018/08/install-opencv4-rpi-expandfs-300x227.jpg 300w, https://www.pyimagesearch.com/wp-content/uploads/2018/08/install-opencv4-rpi-expandfs-768x580.jpg 768w"}

Once prompted, you should select the first option, ***"A1. Expand File
System"***, ***hit Enter*** on your keyboard, arrow down to the
***"\<Finish\>"*** button, and then reboot your Pi --- you may be
prompted to reboot, but if you aren't you can execute:

::: {.enlighter-default .enlighter-v-codegroup .enlighter-t-pyis-enlighter-theme .enlighter-linenumbers}
::: {.enlighter-codegroup-switch}
::: {.enlighter-btn .enlighter-active}
Install OpenCV 4 on your Raspberry Pi
:::
:::

::: {.enlighter-codegroup-wrapper}
::: {.enlighter-toolbar}
::: {.enlighter-btn .enlighter-btn-raw}
:::

::: {.enlighter-btn .enlighter-btn-copy}
:::

::: {.enlighter-btn .enlighter-btn-window}
:::

::: {.enlighter-btn .enlighter-btn-website}
:::
:::

::: {style="display: block;"}
::: {.enlighter style=""}
<div>

<div>

[\$ sudo reboot]{.enlighter-text}

</div>

</div>
:::

``` {.enlighter-raw}
$ sudo reboot
```
:::
:::
:::

``` {.EnlighterJSRAW .enlighter-origin enlighter-language="shell" enlighter-theme="" enlighter-highlight="" enlighter-linenumbers="true" enlighter-lineoffset="" enlighter-title="Install OpenCV 4 on your Raspberry Pi" enlighter-group="4"}
$ sudo reboot
```

After rebooting, your file system should have been expanded to include
all available space on your micro-SD card. You can verify that the disk
has been expanded by executing

::: {.enlighter-default .enlighter-v-inline .enlighter-t-pyis-enlighter-theme}
[[df -h]{.enlighter-text}]{.enlighter}
:::

`df -h`{.EnlighterJSRAW .enlighter-origin enlighter-language="generic"}
and examining the output:

::: {.enlighter-default .enlighter-v-codegroup .enlighter-t-pyis-enlighter-theme .enlighter-linenumbers}
::: {.enlighter-codegroup-switch}
::: {.enlighter-btn .enlighter-active}
Install OpenCV 4 on your Raspberry Pi
:::
:::

::: {.enlighter-codegroup-wrapper}
::: {.enlighter-toolbar}
::: {.enlighter-btn .enlighter-btn-raw}
:::

::: {.enlighter-btn .enlighter-btn-copy}
:::

::: {.enlighter-btn .enlighter-btn-window}
:::

::: {.enlighter-btn .enlighter-btn-website}
:::
:::

::: {style="display: block;"}
::: {.enlighter style=""}
<div>

<div>

[\$ df -h]{.enlighter-text}

</div>

</div>

<div>

<div>

[Filesystem Size Used Avail Use% Mounted on]{.enlighter-text}

</div>

</div>

<div>

<div>

[/dev/root 30G 4.2G 24G ]{.enlighter-text}[15]{.enlighter-n1}[%
/]{.enlighter-text}

</div>

</div>

<div>

<div>

[devtmpfs 434M ]{.enlighter-text}[0]{.enlighter-n1}[ 434M
]{.enlighter-text}[0]{.enlighter-n1}[% /dev]{.enlighter-text}

</div>

</div>

<div>

<div>

[tmpfs 438M ]{.enlighter-text}[0]{.enlighter-n1}[ 438M
]{.enlighter-text}[0]{.enlighter-n1}[% /dev/shm]{.enlighter-text}

</div>

</div>

<div>

<div>

[tmpfs 438M 12M 427M ]{.enlighter-text}[3]{.enlighter-n1}[%
/run]{.enlighter-text}

</div>

</div>

<div>

<div>

[tmpfs 5.0M 4.0K 5.0M ]{.enlighter-text}[1]{.enlighter-n1}[%
/run/lock]{.enlighter-text}

</div>

</div>

<div>

<div>

[tmpfs 438M ]{.enlighter-text}[0]{.enlighter-n1}[ 438M
]{.enlighter-text}[0]{.enlighter-n1}[% /sys/fs/cgroup]{.enlighter-text}

</div>

</div>

<div>

<div>

[/dev/mmcblk0p1 42M 21M 21M ]{.enlighter-text}[51]{.enlighter-n1}[%
/boot]{.enlighter-text}

</div>

</div>

<div>

<div>

[tmpfs 88M ]{.enlighter-text}[0]{.enlighter-n1}[ 88M
]{.enlighter-text}[0]{.enlighter-n1}[%
/run/user/]{.enlighter-text}[1000]{.enlighter-n1}

</div>

</div>
:::

``` {.enlighter-raw}
$ df -h
Filesystem      Size  Used Avail Use% Mounted on
/dev/root        30G  4.2G   24G  15% /
devtmpfs        434M     0  434M   0% /dev
tmpfs           438M     0  438M   0% /dev/shm
tmpfs           438M   12M  427M   3% /run
tmpfs           5.0M  4.0K  5.0M   1% /run/lock
tmpfs           438M     0  438M   0% /sys/fs/cgroup
/dev/mmcblk0p1   42M   21M   21M  51% /boot
tmpfs            88M     0   88M   0% /run/user/1000
```
:::
:::
:::

``` {.EnlighterJSRAW .enlighter-origin enlighter-language="shell" enlighter-theme="" enlighter-highlight="" enlighter-linenumbers="true" enlighter-lineoffset="" enlighter-title="Install OpenCV 4 on your Raspberry Pi" enlighter-group="6"}
$ df -h
Filesystem      Size  Used Avail Use% Mounted on
/dev/root        30G  4.2G   24G  15% /
devtmpfs        434M     0  434M   0% /dev
tmpfs           438M     0  438M   0% /dev/shm
tmpfs           438M   12M  427M   3% /run
tmpfs           5.0M  4.0K  5.0M   1% /run/lock
tmpfs           438M     0  438M   0% /sys/fs/cgroup
/dev/mmcblk0p1   42M   21M   21M  51% /boot
tmpfs            88M     0   88M   0% /run/user/1000
```

As you can see, my Raspbian filesystem has been expanded to include all
32GB of the micro-SD card.

However, even with my filesystem expanded, I have already used 15% of my
32GB card.

If you are using an 8GB card you may be using close to 50% of the
available space, so one simple thing to do is to delete both LibreOffice
and Wolfram engine to free up some space on your Pi:

::: {.enlighter-default .enlighter-v-codegroup .enlighter-t-pyis-enlighter-theme .enlighter-linenumbers}
::: {.enlighter-codegroup-switch}
::: {.enlighter-btn .enlighter-active}
Install OpenCV 4 on your Raspberry Pi
:::
:::

::: {.enlighter-codegroup-wrapper}
::: {.enlighter-toolbar}
::: {.enlighter-btn .enlighter-btn-raw}
:::

::: {.enlighter-btn .enlighter-btn-copy}
:::

::: {.enlighter-btn .enlighter-btn-window}
:::

::: {.enlighter-btn .enlighter-btn-website}
:::
:::

::: {style="display: block;"}
::: {.enlighter style=""}
<div>

<div>

[\$ sudo apt-get purge wolfram-engine]{.enlighter-text}

</div>

</div>

<div>

<div>

[\$ sudo apt-get purge libreoffice\*]{.enlighter-text}

</div>

</div>

<div>

<div>

[\$ sudo apt-get clean]{.enlighter-text}

</div>

</div>

<div>

<div>

[\$ sudo apt-get autoremove]{.enlighter-text}

</div>

</div>
:::

``` {.enlighter-raw}
$ sudo apt-get purge wolfram-engine
$ sudo apt-get purge libreoffice*
$ sudo apt-get clean
$ sudo apt-get autoremove
```
:::
:::
:::

``` {.EnlighterJSRAW .enlighter-origin enlighter-language="shell" enlighter-theme="" enlighter-highlight="" enlighter-linenumbers="true" enlighter-lineoffset="" enlighter-title="Install OpenCV 4 on your Raspberry Pi" enlighter-group="7"}
$ sudo apt-get purge wolfram-engine
$ sudo apt-get purge libreoffice*
$ sudo apt-get clean
$ sudo apt-get autoremove
```

**After removing the Wolfram Engine and LibreOffice, *you can reclaim
almost 1GB!***

### Step \#2: Install OpenCV 4 dependencies on your Raspberry Pi

From there, let's update our system:

::: {.enlighter-default .enlighter-v-codegroup .enlighter-t-pyis-enlighter-theme .enlighter-linenumbers}
::: {.enlighter-codegroup-switch}
::: {.enlighter-btn .enlighter-active}
Install OpenCV 4 on your Raspberry Pi
:::
:::

::: {.enlighter-codegroup-wrapper}
::: {.enlighter-toolbar}
::: {.enlighter-btn .enlighter-btn-raw}
:::

::: {.enlighter-btn .enlighter-btn-copy}
:::

::: {.enlighter-btn .enlighter-btn-window}
:::

::: {.enlighter-btn .enlighter-btn-website}
:::
:::

::: {style="display: block;"}
::: {.enlighter style=""}
<div>

<div>

[\$ sudo apt-get update && sudo apt-get upgrade]{.enlighter-text}

</div>

</div>
:::

``` {.enlighter-raw}
$ sudo apt-get update && sudo apt-get upgrade
```
:::
:::
:::

``` {.EnlighterJSRAW .enlighter-origin enlighter-language="shell" enlighter-theme="" enlighter-highlight="" enlighter-linenumbers="true" enlighter-lineoffset="" enlighter-title="Install OpenCV 4 on your Raspberry Pi" enlighter-group="8"}
$ sudo apt-get update && sudo apt-get upgrade
```

And then let's install developer tools including
[CMake](https://cmake.org/):

::: {.enlighter-default .enlighter-v-codegroup .enlighter-t-pyis-enlighter-theme .enlighter-linenumbers}
::: {.enlighter-codegroup-switch}
::: {.enlighter-btn .enlighter-active}
Install OpenCV 4 on your Raspberry Pi
:::
:::

::: {.enlighter-codegroup-wrapper}
::: {.enlighter-toolbar}
::: {.enlighter-btn .enlighter-btn-raw}
:::

::: {.enlighter-btn .enlighter-btn-copy}
:::

::: {.enlighter-btn .enlighter-btn-window}
:::

::: {.enlighter-btn .enlighter-btn-website}
:::
:::

::: {style="display: block;"}
::: {.enlighter style=""}
<div>

<div>

[\$ sudo apt-get install build-essential cmake unzip
pkg-config]{.enlighter-text}

</div>

</div>
:::

``` {.enlighter-raw}
$ sudo apt-get install build-essential cmake unzip pkg-config
```
:::
:::
:::

``` {.EnlighterJSRAW .enlighter-origin enlighter-language="shell" enlighter-theme="" enlighter-highlight="" enlighter-linenumbers="true" enlighter-lineoffset="" enlighter-title="Install OpenCV 4 on your Raspberry Pi" enlighter-group="9"}
$ sudo apt-get install build-essential cmake unzip pkg-config
```

Next, let's install a selection of image and video libraries --- these
are *critical* to being able to work with image and video files:

::: {.enlighter-default .enlighter-v-codegroup .enlighter-t-pyis-enlighter-theme .enlighter-linenumbers}
::: {.enlighter-codegroup-switch}
::: {.enlighter-btn .enlighter-active}
Install OpenCV 4 on your Raspberry Pi
:::
:::

::: {.enlighter-codegroup-wrapper}
::: {.enlighter-toolbar}
::: {.enlighter-btn .enlighter-btn-raw}
:::

::: {.enlighter-btn .enlighter-btn-copy}
:::

::: {.enlighter-btn .enlighter-btn-window}
:::

::: {.enlighter-btn .enlighter-btn-website}
:::
:::

::: {style="display: block;"}
::: {.enlighter style=""}
<div>

<div>

[\$ sudo apt-get install libjpeg-dev libpng-dev
libtiff-dev]{.enlighter-text}

</div>

</div>

<div>

<div>

[\$ sudo apt-get install libavcodec-dev libavformat-dev libswscale-dev
libv4l-dev]{.enlighter-text}

</div>

</div>

<div>

<div>

[\$ sudo apt-get install libxvidcore-dev libx264-dev]{.enlighter-text}

</div>

</div>
:::

``` {.enlighter-raw}
$ sudo apt-get install libjpeg-dev libpng-dev libtiff-dev
$ sudo apt-get install libavcodec-dev libavformat-dev libswscale-dev libv4l-dev
$ sudo apt-get install libxvidcore-dev libx264-dev
```
:::
:::
:::

``` {.EnlighterJSRAW .enlighter-origin enlighter-language="shell" enlighter-theme="" enlighter-highlight="" enlighter-linenumbers="true" enlighter-lineoffset="" enlighter-title="Install OpenCV 4 on your Raspberry Pi" enlighter-group="10"}
$ sudo apt-get install libjpeg-dev libpng-dev libtiff-dev
$ sudo apt-get install libavcodec-dev libavformat-dev libswscale-dev libv4l-dev
$ sudo apt-get install libxvidcore-dev libx264-dev
```

From there, let's install GTK, our GUI backend:

::: {.enlighter-default .enlighter-v-codegroup .enlighter-t-pyis-enlighter-theme .enlighter-linenumbers}
::: {.enlighter-codegroup-switch}
::: {.enlighter-btn .enlighter-active}
Install OpenCV 4 on your Raspberry Pi
:::
:::

::: {.enlighter-codegroup-wrapper}
::: {.enlighter-toolbar}
::: {.enlighter-btn .enlighter-btn-raw}
:::

::: {.enlighter-btn .enlighter-btn-copy}
:::

::: {.enlighter-btn .enlighter-btn-window}
:::

::: {.enlighter-btn .enlighter-btn-website}
:::
:::

::: {style="display: block;"}
::: {.enlighter style=""}
<div>

<div>

[\$ sudo apt-get install
libgtk-]{.enlighter-text}[3]{.enlighter-n1}[-dev]{.enlighter-text}

</div>

</div>
:::

``` {.enlighter-raw}
$ sudo apt-get install libgtk-3-dev
```
:::
:::
:::

``` {.EnlighterJSRAW .enlighter-origin enlighter-language="shell" enlighter-theme="" enlighter-highlight="" enlighter-linenumbers="true" enlighter-lineoffset="" enlighter-title="Install OpenCV 4 on your Raspberry Pi" enlighter-group="11"}
$ sudo apt-get install libgtk-3-dev
```

And now let's install a package which may reduce pesky GTK warnings:

::: {.enlighter-default .enlighter-v-codegroup .enlighter-t-pyis-enlighter-theme .enlighter-linenumbers}
::: {.enlighter-codegroup-switch}
::: {.enlighter-btn .enlighter-active}
Install OpenCV 4 on your Raspberry Pi
:::
:::

::: {.enlighter-codegroup-wrapper}
::: {.enlighter-toolbar}
::: {.enlighter-btn .enlighter-btn-raw}
:::

::: {.enlighter-btn .enlighter-btn-copy}
:::

::: {.enlighter-btn .enlighter-btn-window}
:::

::: {.enlighter-btn .enlighter-btn-website}
:::
:::

::: {style="display: block;"}
::: {.enlighter style=""}
<div>

<div>

[\$ sudo apt-get install libcanberra-gtk\*]{.enlighter-text}

</div>

</div>
:::

``` {.enlighter-raw}
$ sudo apt-get install libcanberra-gtk*
```
:::
:::
:::

``` {.EnlighterJSRAW .enlighter-origin enlighter-language="shell" enlighter-theme="" enlighter-highlight="" enlighter-linenumbers="true" enlighter-lineoffset="" enlighter-title="Install OpenCV 4 on your Raspberry Pi" enlighter-group="12"}
$ sudo apt-get install libcanberra-gtk*
```

The asterisk will grab the ARM specific GTK.

Followed by installing two packages which contain numerical
optimizations for OpenCV:

::: {.enlighter-default .enlighter-v-codegroup .enlighter-t-pyis-enlighter-theme .enlighter-linenumbers}
::: {.enlighter-codegroup-switch}
::: {.enlighter-btn .enlighter-active}
Install OpenCV 4 on your Raspberry Pi
:::
:::

::: {.enlighter-codegroup-wrapper}
::: {.enlighter-toolbar}
::: {.enlighter-btn .enlighter-btn-raw}
:::

::: {.enlighter-btn .enlighter-btn-copy}
:::

::: {.enlighter-btn .enlighter-btn-window}
:::

::: {.enlighter-btn .enlighter-btn-website}
:::
:::

::: {style="display: block;"}
::: {.enlighter style=""}
<div>

<div>

[\$ sudo apt-get install libatlas-base-dev gfortran]{.enlighter-text}

</div>

</div>
:::

``` {.enlighter-raw}
$ sudo apt-get install libatlas-base-dev gfortran
```
:::
:::
:::

``` {.EnlighterJSRAW .enlighter-origin enlighter-language="shell" enlighter-theme="" enlighter-highlight="" enlighter-linenumbers="true" enlighter-lineoffset="" enlighter-title="Install OpenCV 4 on your Raspberry Pi" enlighter-group="13"}
$ sudo apt-get install libatlas-base-dev gfortran
```

And finally, let's install the Python 3 development headers:

::: {.enlighter-default .enlighter-v-codegroup .enlighter-t-pyis-enlighter-theme .enlighter-linenumbers}
::: {.enlighter-codegroup-switch}
::: {.enlighter-btn .enlighter-active}
Install OpenCV 4 on your Raspberry Pi
:::
:::

::: {.enlighter-codegroup-wrapper}
::: {.enlighter-toolbar}
::: {.enlighter-btn .enlighter-btn-raw}
:::

::: {.enlighter-btn .enlighter-btn-copy}
:::

::: {.enlighter-btn .enlighter-btn-window}
:::

::: {.enlighter-btn .enlighter-btn-website}
:::
:::

::: {style="display: block;"}
::: {.enlighter style=""}
<div>

<div>

[\$ sudo apt-get install python3-dev]{.enlighter-text}

</div>

</div>
:::

``` {.enlighter-raw}
$ sudo apt-get install python3-dev
```
:::
:::
:::

``` {.EnlighterJSRAW .enlighter-origin enlighter-language="shell" enlighter-theme="" enlighter-highlight="" enlighter-linenumbers="true" enlighter-lineoffset="" enlighter-title="Install OpenCV 4 on your Raspberry Pi" enlighter-group="14"}
$ sudo apt-get install python3-dev
```

Once you have all of these prerequisites installed you can move on to
the next step.

### Step \#3: Download OpenCV 4 for your Raspberry Pi

Our next step is to download OpenCV.

Let's navigate to our home folder and download both
[opencv](https://github.com/opencv/opencv) and
[opencv\_contrib](https://github.com/opencv/opencv_contrib). The contrib
repo contains extra modules and functions which we frequently use here
on the PyImageSearch blog.** You should be installing the OpenCV library
with the additional contrib modules as well.**

When you're ready, just follow along to download both the

::: {.enlighter-default .enlighter-v-inline .enlighter-t-pyis-enlighter-theme}
[[opencv]{.enlighter-text}]{.enlighter}
:::

`opencv`{.EnlighterJSRAW .enlighter-origin enlighter-language="python"} 
and

::: {.enlighter-default .enlighter-v-inline .enlighter-t-pyis-enlighter-theme}
[[opencv\_contrib]{.enlighter-text}]{.enlighter}
:::

`opencv_contrib`{.EnlighterJSRAW .enlighter-origin
enlighter-language="python"}  code:

::: {.enlighter-default .enlighter-v-codegroup .enlighter-t-pyis-enlighter-theme .enlighter-linenumbers}
::: {.enlighter-codegroup-switch}
::: {.enlighter-btn .enlighter-active}
Install OpenCV 4 on your Raspberry Pi
:::
:::

::: {.enlighter-codegroup-wrapper}
::: {.enlighter-toolbar}
::: {.enlighter-btn .enlighter-btn-raw}
:::

::: {.enlighter-btn .enlighter-btn-copy}
:::

::: {.enlighter-btn .enlighter-btn-window}
:::

::: {.enlighter-btn .enlighter-btn-website}
:::
:::

::: {style="display: block;"}
::: {.enlighter style=""}
<div>

<div>

[\$ cd \~]{.enlighter-text}

</div>

</div>

<div>

<div>

[\$ wget -O opencv.zip
https://github.com/opencv/opencv/archive/4.0.0.zip]{.enlighter-text}

</div>

</div>

<div>

<div>

[\$ wget -O opencv\_contrib.zip
https://github.com/opencv/opencv\_contrib/archive/4.0.0.zip]{.enlighter-text}

</div>

</div>
:::

``` {.enlighter-raw}
$ cd ~
$ wget -O opencv.zip https://github.com/opencv/opencv/archive/4.0.0.zip
$ wget -O opencv_contrib.zip https://github.com/opencv/opencv_contrib/archive/4.0.0.zip
```
:::
:::
:::

``` {.EnlighterJSRAW .enlighter-origin enlighter-language="shell" enlighter-theme="" enlighter-highlight="" enlighter-linenumbers="true" enlighter-lineoffset="" enlighter-title="Install OpenCV 4 on your Raspberry Pi" enlighter-group="17"}
$ cd ~
$ wget -O opencv.zip https://github.com/opencv/opencv/archive/4.0.0.zip
$ wget -O opencv_contrib.zip https://github.com/opencv/opencv_contrib/archive/4.0.0.zip
```

From there, let's unzip the archives:

::: {.enlighter-default .enlighter-v-codegroup .enlighter-t-pyis-enlighter-theme .enlighter-linenumbers}
::: {.enlighter-codegroup-switch}
::: {.enlighter-btn .enlighter-active}
Install OpenCV 4 on your Raspberry Pi
:::
:::

::: {.enlighter-codegroup-wrapper}
::: {.enlighter-toolbar}
::: {.enlighter-btn .enlighter-btn-raw}
:::

::: {.enlighter-btn .enlighter-btn-copy}
:::

::: {.enlighter-btn .enlighter-btn-window}
:::

::: {.enlighter-btn .enlighter-btn-website}
:::
:::

::: {style="display: block;"}
::: {.enlighter style=""}
<div>

<div>

[\$ unzip opencv.zip]{.enlighter-text}

</div>

</div>

<div>

<div>

[\$ unzip opencv\_contrib.zip]{.enlighter-text}

</div>

</div>
:::

``` {.enlighter-raw}
$ unzip opencv.zip
$ unzip opencv_contrib.zip
```
:::
:::
:::

``` {.EnlighterJSRAW .enlighter-origin enlighter-language="shell" enlighter-theme="" enlighter-highlight="" enlighter-linenumbers="true" enlighter-lineoffset="" enlighter-title="Install OpenCV 4 on your Raspberry Pi" enlighter-group="18"}
$ unzip opencv.zip
$ unzip opencv_contrib.zip
```

I also like to rename the directories:

::: {.enlighter-default .enlighter-v-codegroup .enlighter-t-pyis-enlighter-theme .enlighter-linenumbers}
::: {.enlighter-codegroup-switch}
::: {.enlighter-btn .enlighter-active}
Install OpenCV 4 on your Raspberry Pi
:::
:::

::: {.enlighter-codegroup-wrapper}
::: {.enlighter-toolbar}
::: {.enlighter-btn .enlighter-btn-raw}
:::

::: {.enlighter-btn .enlighter-btn-copy}
:::

::: {.enlighter-btn .enlighter-btn-window}
:::

::: {.enlighter-btn .enlighter-btn-website}
:::
:::

::: {style="display: block;"}
::: {.enlighter style=""}
<div>

<div>

[\$ mv
opencv-]{.enlighter-text}[4.0]{.enlighter-n0}[.]{.enlighter-text}[0]{.enlighter-n1}[
opencv]{.enlighter-text}

</div>

</div>

<div>

<div>

[\$ mv
opencv\_contrib-]{.enlighter-text}[4.0]{.enlighter-n0}[.]{.enlighter-text}[0]{.enlighter-n1}[
opencv\_contrib]{.enlighter-text}

</div>

</div>
:::

``` {.enlighter-raw}
$ mv opencv-4.0.0 opencv
$ mv opencv_contrib-4.0.0 opencv_contrib
```
:::
:::
:::

``` {.EnlighterJSRAW .enlighter-origin enlighter-language="python" enlighter-theme="" enlighter-highlight="" enlighter-linenumbers="true" enlighter-lineoffset="" enlighter-title="Install OpenCV 4 on your Raspberry Pi" enlighter-group="19"}
$ mv opencv-4.0.0 opencv
$ mv opencv_contrib-4.0.0 opencv_contrib
```

If you skip renaming the directories, don't forget to update the CMake
paths.

Now that

::: {.enlighter-default .enlighter-v-inline .enlighter-t-pyis-enlighter-theme}
[[opencv]{.enlighter-text}]{.enlighter}
:::

`opencv`{.EnlighterJSRAW .enlighter-origin enlighter-language="python"} 
and

::: {.enlighter-default .enlighter-v-inline .enlighter-t-pyis-enlighter-theme}
[[opencv\_contrib]{.enlighter-text}]{.enlighter}
:::

`opencv_contrib`{.EnlighterJSRAW .enlighter-origin
enlighter-language="python"}  are downloaded and ready to go, let's set
up our environment.

### Step \#4: Configure your Python 3 virtual environment for OpenCV 4

Let's grab and install pip, a Python Package Manager.

To install pip, simply enter the following in your terminal:

::: {.enlighter-default .enlighter-v-codegroup .enlighter-t-pyis-enlighter-theme .enlighter-linenumbers}
::: {.enlighter-codegroup-switch}
::: {.enlighter-btn .enlighter-active}
Install OpenCV 4 on your Raspberry Pi
:::
:::

::: {.enlighter-codegroup-wrapper}
::: {.enlighter-toolbar}
::: {.enlighter-btn .enlighter-btn-raw}
:::

::: {.enlighter-btn .enlighter-btn-copy}
:::

::: {.enlighter-btn .enlighter-btn-window}
:::

::: {.enlighter-btn .enlighter-btn-website}
:::
:::

::: {style="display: block;"}
::: {.enlighter style=""}
<div>

<div>

[\$ wget https://bootstrap.pypa.io/get-pip.py]{.enlighter-text}

</div>

</div>

<div>

<div>

[\$ sudo python3 get-pip.py]{.enlighter-text}

</div>

</div>
:::

``` {.enlighter-raw}
$ wget https://bootstrap.pypa.io/get-pip.py
$ sudo python3 get-pip.py
```
:::
:::
:::

``` {.EnlighterJSRAW .enlighter-origin enlighter-language="shell" enlighter-theme="" enlighter-highlight="" enlighter-linenumbers="true" enlighter-lineoffset="" enlighter-title="Install OpenCV 4 on your Raspberry Pi" enlighter-group="22"}
$ wget https://bootstrap.pypa.io/get-pip.py
$ sudo python3 get-pip.py
```

#### Make use of virtual environments for Python development

If you aren't familiar with virtual environments, please take a moment
look at this [article on
RealPython](https://realpython.com/blog/python/python-virtual-environments-a-primer/) or
read the first half of the [this blog post on
PyImageSearch](https://pyimagesearch.com/2016/05/02/accessing-rpi-gpio-and-gpio-zero-with-opencv-python/).

Virtual environments will allow you to run different versions of Python
software in isolation on your system. Today we'll be setting up just one
environment, but you could easily have an environment for each project.

Let's go ahead and install  

::: {.enlighter-default .enlighter-v-inline .enlighter-t-pyis-enlighter-theme}
[[virtualenv]{.enlighter-text}]{.enlighter}
:::

`virtualenv`{.EnlighterJSRAW .enlighter-origin
enlighter-language="python"}  and

::: {.enlighter-default .enlighter-v-inline .enlighter-t-pyis-enlighter-theme}
[[virtualenvwrapper]{.enlighter-text}]{.enlighter}
:::

`virtualenvwrapper`{.EnlighterJSRAW .enlighter-origin
enlighter-language="python"}  now --- they allow for Python virtual
environments:

::: {.enlighter-default .enlighter-v-codegroup .enlighter-t-pyis-enlighter-theme .enlighter-linenumbers}
::: {.enlighter-codegroup-switch}
::: {.enlighter-btn .enlighter-active}
Install OpenCV 4 on your Raspberry Pi
:::
:::

::: {.enlighter-codegroup-wrapper}
::: {.enlighter-toolbar}
::: {.enlighter-btn .enlighter-btn-raw}
:::

::: {.enlighter-btn .enlighter-btn-copy}
:::

::: {.enlighter-btn .enlighter-btn-window}
:::

::: {.enlighter-btn .enlighter-btn-website}
:::
:::

::: {style="display: block;"}
::: {.enlighter style=""}
<div>

<div>

[\$ sudo pip install virtualenv virtualenvwrapper]{.enlighter-text}

</div>

</div>

<div>

<div>

[\$ sudo rm -rf \~/get-pip.py \~/.cache/pip]{.enlighter-text}

</div>

</div>
:::

``` {.enlighter-raw}
$ sudo pip install virtualenv virtualenvwrapper
$ sudo rm -rf ~/get-pip.py ~/.cache/pip
```
:::
:::
:::

``` {.EnlighterJSRAW .enlighter-origin enlighter-language="shell" enlighter-theme="" enlighter-highlight="" enlighter-linenumbers="true" enlighter-lineoffset="" enlighter-title="Install OpenCV 4 on your Raspberry Pi" enlighter-group="25"}
$ sudo pip install virtualenv virtualenvwrapper
$ sudo rm -rf ~/get-pip.py ~/.cache/pip
```

To finish the install of these tools, we need to update our 

::: {.enlighter-default .enlighter-v-inline .enlighter-t-pyis-enlighter-theme}
[[\~/.profile]{.enlighter-text}]{.enlighter}
:::

`~/.profile`{.EnlighterJSRAW .enlighter-origin
enlighter-language="shell"}  file (similar to

::: {.enlighter-default .enlighter-v-inline .enlighter-t-pyis-enlighter-theme}
[[.bashrc]{.enlighter-text}]{.enlighter}
:::

`.bashrc`{.EnlighterJSRAW .enlighter-origin enlighter-language="shell"} 
or

::: {.enlighter-default .enlighter-v-inline .enlighter-t-pyis-enlighter-theme}
[[.bash\_profile]{.enlighter-text}]{.enlighter}
:::

`.bash_profile`{.EnlighterJSRAW .enlighter-origin
enlighter-language="shell"} ).

Using a terminal text editor such as

::: {.enlighter-default .enlighter-v-inline .enlighter-t-pyis-enlighter-theme}
[[vi]{.enlighter-text}]{.enlighter}
:::

`vi`{.EnlighterJSRAW .enlighter-origin enlighter-language="shell"} /

::: {.enlighter-default .enlighter-v-inline .enlighter-t-pyis-enlighter-theme}
[[vim]{.enlighter-text}]{.enlighter}
:::

`vim`{.EnlighterJSRAW .enlighter-origin enlighter-language="shell"}  or

::: {.enlighter-default .enlighter-v-inline .enlighter-t-pyis-enlighter-theme}
[[nano]{.enlighter-text}]{.enlighter}
:::

`nano`{.EnlighterJSRAW .enlighter-origin enlighter-language="shell"} ,
add the following lines to your

::: {.enlighter-default .enlighter-v-inline .enlighter-t-pyis-enlighter-theme}
[[\~/.profile]{.enlighter-text}]{.enlighter}
:::

`~/.profile`{.EnlighterJSRAW .enlighter-origin
enlighter-language="shell"} :

::: {.enlighter-default .enlighter-v-codegroup .enlighter-t-pyis-enlighter-theme .enlighter-linenumbers}
::: {.enlighter-codegroup-switch}
::: {.enlighter-btn .enlighter-active}
Install OpenCV 4 on your Raspberry Pi
:::
:::

::: {.enlighter-codegroup-wrapper}
::: {.enlighter-toolbar}
::: {.enlighter-btn .enlighter-btn-raw}
:::

::: {.enlighter-btn .enlighter-btn-copy}
:::

::: {.enlighter-btn .enlighter-btn-window}
:::

::: {.enlighter-btn .enlighter-btn-website}
:::
:::

::: {style="display: block;"}
::: {.enlighter style=""}
<div>

<div>

[\# virtualenv and virtualenvwrapper]{.enlighter-c0}[]{.enlighter-text}

</div>

</div>

<div>

<div>

[export
WORKON\_HOME=]{.enlighter-text}[\$HOME]{.enlighter-k7}[/.virtualenvs]{.enlighter-text}

</div>

</div>

<div>

<div>

[export VIRTUALENVWRAPPER\_PYTHON=/usr/bin/python3]{.enlighter-text}

</div>

</div>

<div>

<div>

[source /usr/local/bin/virtualenvwrapper.sh]{.enlighter-text}

</div>

</div>
:::

``` {.enlighter-raw}
# virtualenv and virtualenvwrapper
export WORKON_HOME=$HOME/.virtualenvs
export VIRTUALENVWRAPPER_PYTHON=/usr/bin/python3
source /usr/local/bin/virtualenvwrapper.sh
```
:::
:::
:::

``` {.EnlighterJSRAW .enlighter-origin enlighter-language="shell" enlighter-theme="" enlighter-highlight="" enlighter-linenumbers="true" enlighter-lineoffset="" enlighter-title="Install OpenCV 4 on your Raspberry Pi" enlighter-group="33"}
# virtualenv and virtualenvwrapper
export WORKON_HOME=$HOME/.virtualenvs
export VIRTUALENVWRAPPER_PYTHON=/usr/bin/python3
source /usr/local/bin/virtualenvwrapper.sh
```

Alternatively, you can append the lines directly via bash commands:

::: {.enlighter-default .enlighter-v-codegroup .enlighter-t-pyis-enlighter-theme .enlighter-linenumbers}
::: {.enlighter-codegroup-switch}
::: {.enlighter-btn .enlighter-active}
Install OpenCV 4 on your Raspberry Pi
:::
:::

::: {.enlighter-codegroup-wrapper}
::: {.enlighter-toolbar}
::: {.enlighter-btn .enlighter-btn-raw}
:::

::: {.enlighter-btn .enlighter-btn-copy}
:::

::: {.enlighter-btn .enlighter-btn-window}
:::

::: {.enlighter-btn .enlighter-btn-website}
:::
:::

::: {style="display: block;"}
::: {.enlighter style=""}
<div>

<div>

[\$ echo -e ]{.enlighter-text}[\"\\n\# virtualenv and
virtualenvwrapper\"]{.enlighter-s0}[ \>\> \~/.profile]{.enlighter-text}

</div>

</div>

<div>

<div>

[\$ echo ]{.enlighter-text}[\"export
WORKON\_HOME=\$HOME/.virtualenvs\"]{.enlighter-s0}[ \>\>
\~/.profile]{.enlighter-text}

</div>

</div>

<div>

<div>

[\$ echo ]{.enlighter-text}[\"export
VIRTUALENVWRAPPER\_PYTHON=/usr/bin/python3\"]{.enlighter-s0}[ \>\>
\~/.profile]{.enlighter-text}

</div>

</div>

<div>

<div>

[\$ echo ]{.enlighter-text}[\"source
/usr/local/bin/virtualenvwrapper.sh\"]{.enlighter-s0}[ \>\>
\~/.profile]{.enlighter-text}

</div>

</div>
:::

``` {.enlighter-raw}
$ echo -e "\n# virtualenv and virtualenvwrapper" >> ~/.profile
$ echo "export WORKON_HOME=$HOME/.virtualenvs" >> ~/.profile
$ echo "export VIRTUALENVWRAPPER_PYTHON=/usr/bin/python3" >> ~/.profile
$ echo "source /usr/local/bin/virtualenvwrapper.sh" >> ~/.profile
```
:::
:::
:::

``` {.EnlighterJSRAW .enlighter-origin enlighter-language="shell" enlighter-theme="" enlighter-highlight="" enlighter-linenumbers="true" enlighter-lineoffset="" enlighter-title="Install OpenCV 4 on your Raspberry Pi" enlighter-group="34"}
$ echo -e "\n# virtualenv and virtualenvwrapper" >> ~/.profile
$ echo "export WORKON_HOME=$HOME/.virtualenvs" >> ~/.profile
$ echo "export VIRTUALENVWRAPPER_PYTHON=/usr/bin/python3" >> ~/.profile
$ echo "source /usr/local/bin/virtualenvwrapper.sh" >> ~/.profile
```

Next, source the

::: {.enlighter-default .enlighter-v-inline .enlighter-t-pyis-enlighter-theme}
[[\~/.profile]{.enlighter-text}]{.enlighter}
:::

`~/.profile`{.EnlighterJSRAW .enlighter-origin
enlighter-language="shell"}  file:

::: {.enlighter-default .enlighter-v-codegroup .enlighter-t-pyis-enlighter-theme .enlighter-linenumbers}
::: {.enlighter-codegroup-switch}
::: {.enlighter-btn .enlighter-active}
Install OpenCV 4 on your Raspberry Pi
:::
:::

::: {.enlighter-codegroup-wrapper}
::: {.enlighter-toolbar}
::: {.enlighter-btn .enlighter-btn-raw}
:::

::: {.enlighter-btn .enlighter-btn-copy}
:::

::: {.enlighter-btn .enlighter-btn-window}
:::

::: {.enlighter-btn .enlighter-btn-website}
:::
:::

::: {style="display: block;"}
::: {.enlighter style=""}
<div>

<div>

[\$ source \~/.profile]{.enlighter-text}

</div>

</div>
:::

``` {.enlighter-raw}
$ source ~/.profile
```
:::
:::
:::

``` {.EnlighterJSRAW .enlighter-origin enlighter-language="shell" enlighter-theme="" enlighter-highlight="" enlighter-linenumbers="true" enlighter-lineoffset="" enlighter-title="Install OpenCV 4 on your Raspberry Pi" enlighter-group="36"}
$ source ~/.profile
```

#### Create a virtual environment to hold OpenCV 4 and additional packages

Now you're at the point where you can create your OpenCV 4 + Python 3
virtual environment on your Raspberry Pi:

::: {.enlighter-default .enlighter-v-codegroup .enlighter-t-pyis-enlighter-theme .enlighter-linenumbers}
::: {.enlighter-codegroup-switch}
::: {.enlighter-btn .enlighter-active}
Install OpenCV 4 on your Raspberry Pi
:::
:::

::: {.enlighter-codegroup-wrapper}
::: {.enlighter-toolbar}
::: {.enlighter-btn .enlighter-btn-raw}
:::

::: {.enlighter-btn .enlighter-btn-copy}
:::

::: {.enlighter-btn .enlighter-btn-window}
:::

::: {.enlighter-btn .enlighter-btn-website}
:::
:::

::: {style="display: block;"}
::: {.enlighter style=""}
<div>

<div>

[\$ mkvirtualenv cv -p python3]{.enlighter-text}

</div>

</div>
:::

``` {.enlighter-raw}
$ mkvirtualenv cv -p python3
```
:::
:::
:::

``` {.EnlighterJSRAW .enlighter-origin enlighter-language="shell" enlighter-theme="" enlighter-highlight="" enlighter-linenumbers="true" enlighter-lineoffset="" enlighter-title="Install OpenCV 4 on your Raspberry Pi" enlighter-group="37"}
$ mkvirtualenv cv -p python3
```

This line simply creates a Python 3 virtual environment named

::: {.enlighter-default .enlighter-v-inline .enlighter-t-pyis-enlighter-theme}
[[cv]{.enlighter-text}]{.enlighter}
:::

`cv`{.EnlighterJSRAW .enlighter-origin enlighter-language="python"} .

You can (and should) name your environment(s) whatever you'd like --- I
like to keep them short and sweet while also providing enough
information so I'll remember what they are for. For example, I like to
name my environments like this:

-   ::: {.enlighter-default .enlighter-v-inline .enlighter-t-pyis-enlighter-theme}
    [[py3cv4]{.enlighter-text}]{.enlighter}
    :::

    `py3cv4`{.EnlighterJSRAW .enlighter-origin
    enlighter-language="shell"}

-   ::: {.enlighter-default .enlighter-v-inline .enlighter-t-pyis-enlighter-theme}
    [[py3cv3]{.enlighter-text}]{.enlighter}
    :::

    `py3cv3`{.EnlighterJSRAW .enlighter-origin
    enlighter-language="shell"}

-   ::: {.enlighter-default .enlighter-v-inline .enlighter-t-pyis-enlighter-theme}
    [[py2cv2]{.enlighter-text}]{.enlighter}
    :::

    `py2cv2`{.EnlighterJSRAW .enlighter-origin
    enlighter-language="shell"}

-   etc.

Let's verify that we're in the

::: {.enlighter-default .enlighter-v-inline .enlighter-t-pyis-enlighter-theme}
[[cv]{.enlighter-text}]{.enlighter}
:::

`cv`{.EnlighterJSRAW .enlighter-origin enlighter-language="shell"} 
environment by using the

::: {.enlighter-default .enlighter-v-inline .enlighter-t-pyis-enlighter-theme}
[[workon]{.enlighter-text}]{.enlighter}
:::

`workon`{.EnlighterJSRAW .enlighter-origin enlighter-language="shell"} 
command:

::: {.enlighter-default .enlighter-v-codegroup .enlighter-t-pyis-enlighter-theme .enlighter-linenumbers}
::: {.enlighter-codegroup-switch}
::: {.enlighter-btn .enlighter-active}
Install OpenCV 4 on your Raspberry Pi
:::
:::

::: {.enlighter-codegroup-wrapper}
::: {.enlighter-toolbar}
::: {.enlighter-btn .enlighter-btn-raw}
:::

::: {.enlighter-btn .enlighter-btn-copy}
:::

::: {.enlighter-btn .enlighter-btn-window}
:::

::: {.enlighter-btn .enlighter-btn-website}
:::
:::

::: {style="display: block;"}
::: {.enlighter style=""}
<div>

<div>

[\$ workon cv]{.enlighter-text}

</div>

</div>
:::

``` {.enlighter-raw}
$ workon cv
```
:::
:::
:::

``` {.EnlighterJSRAW .enlighter-origin enlighter-language="shell" enlighter-theme="" enlighter-highlight="" enlighter-linenumbers="true" enlighter-lineoffset="" enlighter-title="Install OpenCV 4 on your Raspberry Pi" enlighter-group="44"}
$ workon cv
```

![**Figure 3:** The **`workon`** command is part of the
**virtualenvwrapper** package and allows us to easily activate virtual
environments. Here I'm activating the `cv` environment which we'll
install OpenCV 4 into on our Raspberry
Pi.](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/install-opencv4-rpi-workoncv.jpg){.wp-image-8549
width="600" height="374" sizes="(max-width: 600px) 100vw, 600px"
srcset="https://www.pyimagesearch.com/wp-content/uploads/2018/08/install-opencv4-rpi-workoncv.jpg 1000w, https://www.pyimagesearch.com/wp-content/uploads/2018/08/install-opencv4-rpi-workoncv-300x187.jpg 300w, https://www.pyimagesearch.com/wp-content/uploads/2018/08/install-opencv4-rpi-workoncv-768x478.jpg 768w"}

#### Install NumPy

The first Python package and only OpenCV prerequisite we'll install is
NumPy:

::: {.enlighter-default .enlighter-v-codegroup .enlighter-t-pyis-enlighter-theme .enlighter-linenumbers}
::: {.enlighter-codegroup-switch}
::: {.enlighter-btn .enlighter-active}
Install OpenCV 4 on your Raspberry Pi
:::
:::

::: {.enlighter-codegroup-wrapper}
::: {.enlighter-toolbar}
::: {.enlighter-btn .enlighter-btn-raw}
:::

::: {.enlighter-btn .enlighter-btn-copy}
:::

::: {.enlighter-btn .enlighter-btn-window}
:::

::: {.enlighter-btn .enlighter-btn-website}
:::
:::

::: {style="display: block;"}
::: {.enlighter style=""}
<div>

<div>

[\$ pip install numpy]{.enlighter-text}

</div>

</div>
:::

``` {.enlighter-raw}
$ pip install numpy
```
:::
:::
:::

``` {.EnlighterJSRAW .enlighter-origin enlighter-language="shell" enlighter-theme="" enlighter-highlight="" enlighter-linenumbers="true" enlighter-lineoffset="" enlighter-title="Install OpenCV 4 on your Raspberry Pi" enlighter-group="45"}
$ pip install numpy
```

We can now prepare OpenCV 4 for compilation on our Raspberry Pi.

### Step \#5: CMake and compile OpenCV 4 for your Raspberry Pi

For this step, we're going to setup our compile with CMake followed by
running

::: {.enlighter-default .enlighter-v-inline .enlighter-t-pyis-enlighter-theme}
[[make]{.enlighter-text}]{.enlighter}
:::

`make`{.EnlighterJSRAW .enlighter-origin enlighter-language="python"} 
to actually compile OpenCV. This is the most time-consuming step of
today's blog post.

Navigate back to your OpenCV repo and create + enter a

::: {.enlighter-default .enlighter-v-inline .enlighter-t-pyis-enlighter-theme}
[[build]{.enlighter-text}]{.enlighter}
:::

`build`{.EnlighterJSRAW .enlighter-origin enlighter-language="shell"} 
directory:

::: {.enlighter-default .enlighter-v-codegroup .enlighter-t-pyis-enlighter-theme .enlighter-linenumbers}
::: {.enlighter-codegroup-switch}
::: {.enlighter-btn .enlighter-active}
Install OpenCV 4 on your Raspberry Pi
:::
:::

::: {.enlighter-codegroup-wrapper}
::: {.enlighter-toolbar}
::: {.enlighter-btn .enlighter-btn-raw}
:::

::: {.enlighter-btn .enlighter-btn-copy}
:::

::: {.enlighter-btn .enlighter-btn-window}
:::

::: {.enlighter-btn .enlighter-btn-website}
:::
:::

::: {style="display: block;"}
::: {.enlighter style=""}
<div>

<div>

[\$ cd \~/opencv]{.enlighter-text}

</div>

</div>

<div>

<div>

[\$ mkdir build]{.enlighter-text}

</div>

</div>

<div>

<div>

[\$ cd build]{.enlighter-text}

</div>

</div>
:::

``` {.enlighter-raw}
$ cd ~/opencv
$ mkdir build
$ cd build
```
:::
:::
:::

``` {.EnlighterJSRAW .enlighter-origin enlighter-language="shell" enlighter-theme="" enlighter-highlight="" enlighter-linenumbers="true" enlighter-lineoffset="" enlighter-title="Install OpenCV 4 on your Raspberry Pi" enlighter-group="48"}
$ cd ~/opencv
$ mkdir build
$ cd build
```

#### Run CMake for OpenCV 4

Now let's run CMake to configure the OpenCV 4 build:

::: {.enlighter-default .enlighter-v-codegroup .enlighter-t-pyis-enlighter-theme .enlighter-linenumbers}
::: {.enlighter-codegroup-switch}
::: {.enlighter-btn .enlighter-active}
Install OpenCV 4 on your Raspberry Pi
:::
:::

::: {.enlighter-codegroup-wrapper}
::: {.enlighter-toolbar}
::: {.enlighter-btn .enlighter-btn-raw}
:::

::: {.enlighter-btn .enlighter-btn-copy}
:::

::: {.enlighter-btn .enlighter-btn-window}
:::

::: {.enlighter-btn .enlighter-btn-website}
:::
:::

::: {style="display: block;"}
::: {.enlighter style=""}
<div>

<div>

[\$ cmake -D CMAKE\_BUILD\_TYPE=RELEASE \\]{.enlighter-text}

</div>

</div>

<div>

<div>

[ -D CMAKE\_INSTALL\_PREFIX=/usr/local \\]{.enlighter-text}

</div>

</div>

<div>

<div>

[ -D OPENCV\_EXTRA\_MODULES\_PATH=\~/opencv\_contrib/modules
\\]{.enlighter-text}

</div>

</div>

<div>

<div>

[ -D ENABLE\_NEON=ON \\]{.enlighter-text}

</div>

</div>

<div>

<div>

[ -D ENABLE\_VFPV3=ON \\]{.enlighter-text}

</div>

</div>

<div>

<div>

[ -D BUILD\_TESTS=OFF \\]{.enlighter-text}

</div>

</div>

<div>

<div>

[ -D OPENCV\_ENABLE\_NONFREE=ON \\]{.enlighter-text}

</div>

</div>

<div>

<div>

[ -D INSTALL\_PYTHON\_EXAMPLES=OFF \\]{.enlighter-text}

</div>

</div>

<div>

<div>

[ -D BUILD\_EXAMPLES=OFF ..]{.enlighter-text}

</div>

</div>
:::

``` {.enlighter-raw}
$ cmake -D CMAKE_BUILD_TYPE=RELEASE \
    -D CMAKE_INSTALL_PREFIX=/usr/local \
    -D OPENCV_EXTRA_MODULES_PATH=~/opencv_contrib/modules \
    -D ENABLE_NEON=ON \
    -D ENABLE_VFPV3=ON \
    -D BUILD_TESTS=OFF \
    -D OPENCV_ENABLE_NONFREE=ON \
    -D INSTALL_PYTHON_EXAMPLES=OFF \
    -D BUILD_EXAMPLES=OFF ..
```
:::
:::
:::

``` {.EnlighterJSRAW .enlighter-origin enlighter-language="shell" enlighter-theme="" enlighter-highlight="" enlighter-linenumbers="true" enlighter-lineoffset="" enlighter-title="Install OpenCV 4 on your Raspberry Pi" enlighter-group="49"}
$ cmake -D CMAKE_BUILD_TYPE=RELEASE \
    -D CMAKE_INSTALL_PREFIX=/usr/local \
    -D OPENCV_EXTRA_MODULES_PATH=~/opencv_contrib/modules \
    -D ENABLE_NEON=ON \
    -D ENABLE_VFPV3=ON \
    -D BUILD_TESTS=OFF \
    -D OPENCV_ENABLE_NONFREE=ON \
    -D INSTALL_PYTHON_EXAMPLES=OFF \
    -D BUILD_EXAMPLES=OFF ..
```

***Update 2018-11-27: **Notice the*

::: {.enlighter-default .enlighter-v-inline .enlighter-t-pyis-enlighter-theme}
[[-D OPENCV\_ENABLE\_NONFREE=ON]{.enlighter-text}]{.enlighter}
:::

`-D OPENCV_ENABLE_NONFREE=ON`{.EnlighterJSRAW .enlighter-origin
enlighter-language="shell"}  flag. Setting this flag with OpenCV 4
ensures that you'll have access to SIFT/SURF and other patented
algorithms.

**Be sure to update the above command to use the correct**

::: {.enlighter-default .enlighter-v-inline .enlighter-t-pyis-enlighter-theme}
[[OPENCV\_EXTRA\_MODULES\_PATH]{.enlighter-text}]{.enlighter}
:::

`OPENCV_EXTRA_MODULES_PATH`{.EnlighterJSRAW .enlighter-origin
enlighter-language="shell"}  path. If you're following along with this
tutorial *exactly* you should not need to update the path.

Once CMake is finished, it's important that you inspect the output. Your
output should look similar to mine below:

![**Figure 4:** Ensure that "Non-free algorithms" is set to "YES". This
will allow you to use patented algorithms such as SIFT/SURF for
educational
purposes.](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/install-opencv4-rpi-nonfree.jpg){.wp-image-9124
width="600" height="432" sizes="(max-width: 600px) 100vw, 600px"
srcset="https://www.pyimagesearch.com/wp-content/uploads/2018/09/install-opencv4-rpi-nonfree.jpg 1000w, https://www.pyimagesearch.com/wp-content/uploads/2018/09/install-opencv4-rpi-nonfree-300x216.jpg 300w, https://www.pyimagesearch.com/wp-content/uploads/2018/09/install-opencv4-rpi-nonfree-768x553.jpg 768w"}

![**Figure 5:** The CMake command allows us to generate build files for
compiling OpenCV 4 on the Raspberry Pi. Since we're using virtual
environments, you should inspect the output to make sure that the
compile will use the proper interpreter and
NumPy.](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/install-opencv4-rpi-cmake.jpg){.wp-image-8550
width="600" height="377" sizes="(max-width: 600px) 100vw, 600px"
srcset="https://www.pyimagesearch.com/wp-content/uploads/2018/08/install-opencv4-rpi-cmake.jpg 1000w, https://www.pyimagesearch.com/wp-content/uploads/2018/08/install-opencv4-rpi-cmake-300x188.jpg 300w, https://www.pyimagesearch.com/wp-content/uploads/2018/08/install-opencv4-rpi-cmake-768x482.jpg 768w"}

Take a second now to ensure that the

::: {.enlighter-default .enlighter-v-inline .enlighter-t-pyis-enlighter-theme}
[[Interpreter]{.enlighter-text}]{.enlighter}
:::

`Interpreter`{.EnlighterJSRAW .enlighter-origin
enlighter-language="python"}  points to the correct Python 3 binary.
Also check that

::: {.enlighter-default .enlighter-v-inline .enlighter-t-pyis-enlighter-theme}
[[numpy]{.enlighter-text}]{.enlighter}
:::

`numpy`{.EnlighterJSRAW .enlighter-origin enlighter-language="python"} 
points to our NumPy package which is installed *inside* the virtual
environment.

#### Increase the SWAP on the Raspberry Pi

Before you begin the compile I would suggest ***increasing your swap
space***. This will enable you to compile OpenCV with ***all four
cores*** of the Raspberry Pi without the compile hanging due to memory
exhausting.

Open up your

::: {.enlighter-default .enlighter-v-inline .enlighter-t-pyis-enlighter-theme}
[[/etc/dphys-swapfile]{.enlighter-text}]{.enlighter}
:::

`/etc/dphys-swapfile`{.EnlighterJSRAW .enlighter-origin
enlighter-language="shell"}  file:

::: {.enlighter-default .enlighter-v-codegroup .enlighter-t-pyis-enlighter-theme .enlighter-linenumbers}
::: {.enlighter-codegroup-switch}
::: {.enlighter-btn .enlighter-active}
Install OpenCV 4 on your Raspberry Pi
:::
:::

::: {.enlighter-codegroup-wrapper}
::: {.enlighter-toolbar}
::: {.enlighter-btn .enlighter-btn-raw}
:::

::: {.enlighter-btn .enlighter-btn-copy}
:::

::: {.enlighter-btn .enlighter-btn-window}
:::

::: {.enlighter-btn .enlighter-btn-website}
:::
:::

::: {style="display: block;"}
::: {.enlighter style=""}
<div>

<div>

[\$ sudo nano /etc/dphys-swapfile]{.enlighter-text}

</div>

</div>
:::

``` {.enlighter-raw}
$ sudo nano /etc/dphys-swapfile
```
:::
:::
:::

``` {.EnlighterJSRAW .enlighter-origin enlighter-language="shell" enlighter-theme="" enlighter-highlight="" enlighter-linenumbers="true" enlighter-lineoffset="" enlighter-title="Install OpenCV 4 on your Raspberry Pi" enlighter-group="55"}
$ sudo nano /etc/dphys-swapfile
```

...and then edit the

::: {.enlighter-default .enlighter-v-inline .enlighter-t-pyis-enlighter-theme}
[[CONF\_SWAPSIZE]{.enlighter-text}]{.enlighter}
:::

`CONF_SWAPSIZE`{.EnlighterJSRAW .enlighter-origin
enlighter-language="shell"}  variable:

::: {.enlighter-default .enlighter-v-codegroup .enlighter-t-pyis-enlighter-theme .enlighter-linenumbers}
::: {.enlighter-codegroup-switch}
::: {.enlighter-btn .enlighter-active}
Install OpenCV 4 on your Raspberry Pi
:::
:::

::: {.enlighter-codegroup-wrapper}
::: {.enlighter-toolbar}
::: {.enlighter-btn .enlighter-btn-raw}
:::

::: {.enlighter-btn .enlighter-btn-copy}
:::

::: {.enlighter-btn .enlighter-btn-window}
:::

::: {.enlighter-btn .enlighter-btn-website}
:::
:::

::: {style="display: block;"}
::: {.enlighter style=""}
<div>

<div>

[\# set size to absolute value, leaving empty (default) then uses
computed value]{.enlighter-c0}[]{.enlighter-c0}

</div>

</div>

<div>

<div>

[\# you most likely don\'t want this, unless you have an special disk
situation]{.enlighter-c0}[]{.enlighter-c0}

</div>

</div>

<div>

<div>

[\# CONF\_SWAPSIZE=100]{.enlighter-c0}[]{.enlighter-text}

</div>

</div>

<div>

<div>

[]{.enlighter-text}[CONF\_SWAPSIZE]{.enlighter-k7}[=]{.enlighter-text}[2048]{.enlighter-n1}

</div>

</div>
:::

``` {.enlighter-raw}
# set size to absolute value, leaving empty (default) then uses computed value
#   you most likely don't want this, unless you have an special disk situation
# CONF_SWAPSIZE=100
CONF_SWAPSIZE=2048
```
:::
:::
:::

``` {.EnlighterJSRAW .enlighter-origin enlighter-language="shell" enlighter-theme="" enlighter-highlight="" enlighter-linenumbers="true" enlighter-lineoffset="" enlighter-title="Install OpenCV 4 on your Raspberry Pi" enlighter-group="57"}
# set size to absolute value, leaving empty (default) then uses computed value
#   you most likely don't want this, unless you have an special disk situation
# CONF_SWAPSIZE=100
CONF_SWAPSIZE=2048
```

Notice that I'm **increasing the swap from 100MB to 2048MB.**

***If you do not perform this step it's very likely that your Pi will
hang.***

From there, restart the swap service:

::: {.enlighter-default .enlighter-v-codegroup .enlighter-t-pyis-enlighter-theme .enlighter-linenumbers}
::: {.enlighter-codegroup-switch}
::: {.enlighter-btn .enlighter-active}
Install OpenCV 4 on your Raspberry Pi
:::
:::

::: {.enlighter-codegroup-wrapper}
::: {.enlighter-toolbar}
::: {.enlighter-btn .enlighter-btn-raw}
:::

::: {.enlighter-btn .enlighter-btn-copy}
:::

::: {.enlighter-btn .enlighter-btn-window}
:::

::: {.enlighter-btn .enlighter-btn-website}
:::
:::

::: {style="display: block;"}
::: {.enlighter style=""}
<div>

<div>

[\$ sudo /etc/init.d/dphys-swapfile stop]{.enlighter-text}

</div>

</div>

<div>

<div>

[\$ sudo /etc/init.d/dphys-swapfile start]{.enlighter-text}

</div>

</div>
:::

``` {.enlighter-raw}
$ sudo /etc/init.d/dphys-swapfile stop
$ sudo /etc/init.d/dphys-swapfile start
```
:::
:::
:::

``` {.EnlighterJSRAW .enlighter-origin enlighter-language="shell" enlighter-theme="" enlighter-highlight="" enlighter-linenumbers="true" enlighter-lineoffset="" enlighter-title="Install OpenCV 4 on your Raspberry Pi" enlighter-group="58"}
$ sudo /etc/init.d/dphys-swapfile stop
$ sudo /etc/init.d/dphys-swapfile start
```

***Note:** Increasing swap size is a great way to burn out your
Raspberry Pi microSD card. Flash-based storage have limited number of
writes you can perform until the card is essentially unable to hold the
1's and 0's anymore. We'll only be enabling large swap for a short
period of time, so it's not a big deal. Regardless, be sure to backup
your *

::: {.enlighter-default .enlighter-v-inline .enlighter-t-pyis-enlighter-theme}
[[.img]{.enlighter-text}]{.enlighter}
:::

`.img`{.EnlighterJSRAW .enlighter-origin enlighter-language="shell"} 
file after installing OpenCV + Python just in case your card dies
unexpectedly early. You can read more about large swap sizes corrupting
memory cards on [this
page](https://www.bitpi.co/2015/02/11/how-to-change-raspberry-pis-swapfile-size-on-rasbian/).

#### Compile OpenCV 4

Now we're ready to compile OpenCV 4:

::: {.enlighter-default .enlighter-v-codegroup .enlighter-t-pyis-enlighter-theme .enlighter-linenumbers}
::: {.enlighter-codegroup-switch}
::: {.enlighter-btn .enlighter-active}
Install OpenCV 4 on your Raspberry Pi
:::
:::

::: {.enlighter-codegroup-wrapper}
::: {.enlighter-toolbar}
::: {.enlighter-btn .enlighter-btn-raw}
:::

::: {.enlighter-btn .enlighter-btn-copy}
:::

::: {.enlighter-btn .enlighter-btn-window}
:::

::: {.enlighter-btn .enlighter-btn-website}
:::
:::

::: {style="display: block;"}
::: {.enlighter style=""}
<div>

<div>

[\$ make -j4]{.enlighter-text}

</div>

</div>
:::

``` {.enlighter-raw}
$ make -j4
```
:::
:::
:::

``` {.EnlighterJSRAW .enlighter-origin enlighter-language="shell" enlighter-theme="" enlighter-highlight="" enlighter-linenumbers="true" enlighter-lineoffset="" enlighter-title="Install OpenCV 4 on your Raspberry Pi" enlighter-group="60"}
$ make -j4
```

***Note:** In the*

::: {.enlighter-default .enlighter-v-inline .enlighter-t-pyis-enlighter-theme}
[[make]{.enlighter-text}]{.enlighter}
:::

`make`{.EnlighterJSRAW .enlighter-origin enlighter-language="shell"} 
command above, the

::: {.enlighter-default .enlighter-v-inline .enlighter-t-pyis-enlighter-theme}
[[-j4]{.enlighter-text}]{.enlighter}
:::

`-j4`{.EnlighterJSRAW .enlighter-origin enlighter-language="shell"} 
argument specifies that I have 4 cores for compilation. **If you have
compile errors or your Raspberry Pi hangs/freezes** you can try without
the

::: {.enlighter-default .enlighter-v-inline .enlighter-t-pyis-enlighter-theme}
[[-j4]{.enlighter-text}]{.enlighter}
:::

`-j4`{.EnlighterJSRAW .enlighter-origin enlighter-language="shell"} 
switch which can eliminate race conditions.

Here you can see OpenCV 4 has compiled without any errors:

![**Figure 6:** I've compiled OpenCV 4 on my Raspberry Pi successfully
(the `make` command has reached 100%). So now I'll issue the
`sudo make install`
command.](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/install-opencv4-rpi-makeinstall.jpg){.wp-image-8853
width="600" height="402" sizes="(max-width: 600px) 100vw, 600px"
srcset="https://www.pyimagesearch.com/wp-content/uploads/2018/09/install-opencv4-rpi-makeinstall.jpg 1000w, https://www.pyimagesearch.com/wp-content/uploads/2018/09/install-opencv4-rpi-makeinstall-300x201.jpg 300w, https://www.pyimagesearch.com/wp-content/uploads/2018/09/install-opencv4-rpi-makeinstall-768x515.jpg 768w"}

And from there, let's install OpenCV 4 with two additional commands:

::: {.enlighter-default .enlighter-v-codegroup .enlighter-t-pyis-enlighter-theme .enlighter-linenumbers}
::: {.enlighter-codegroup-switch}
::: {.enlighter-btn .enlighter-active}
Install OpenCV 4 on your Raspberry Pi
:::
:::

::: {.enlighter-codegroup-wrapper}
::: {.enlighter-toolbar}
::: {.enlighter-btn .enlighter-btn-raw}
:::

::: {.enlighter-btn .enlighter-btn-copy}
:::

::: {.enlighter-btn .enlighter-btn-window}
:::

::: {.enlighter-btn .enlighter-btn-website}
:::
:::

::: {style="display: block;"}
::: {.enlighter style=""}
<div>

<div>

[\$ sudo make install]{.enlighter-text}

</div>

</div>

<div>

<div>

[\$ sudo ldconfig]{.enlighter-text}

</div>

</div>
:::

``` {.enlighter-raw}
$ sudo make install
$ sudo ldconfig
```
:::
:::
:::

``` {.EnlighterJSRAW .enlighter-origin enlighter-language="shell" enlighter-theme="" enlighter-highlight="" enlighter-linenumbers="true" enlighter-lineoffset="" enlighter-title="Install OpenCV 4 on your Raspberry Pi" enlighter-group="64"}
$ sudo make install
$ sudo ldconfig
```

***Don't forget to go back*** to your

::: {.enlighter-default .enlighter-v-inline .enlighter-t-pyis-enlighter-theme}
[[/etc/dphys-swapfile]{.enlighter-text}]{.enlighter}
:::

`/etc/dphys-swapfile`{.EnlighterJSRAW .enlighter-origin
enlighter-language="shell"}  file and:

1.  Reset
    ::: {.enlighter-default .enlighter-v-inline .enlighter-t-pyis-enlighter-theme}
    [[CONF\_SWAPSIZE]{.enlighter-text}]{.enlighter}
    :::

    `CONF_SWAPSIZE`{.EnlighterJSRAW .enlighter-origin
    enlighter-language="shell"}  to 100MB.
2.  Restart the swap service.

### Step \#6: Link OpenCV 4 into your Python 3 virtual environment

Let's create a symbolic link from the OpenCV install in the system

::: {.enlighter-default .enlighter-v-inline .enlighter-t-pyis-enlighter-theme}
[[site-packages]{.enlighter-text}]{.enlighter}
:::

`site-packages`{.EnlighterJSRAW .enlighter-origin
enlighter-language="python"}  directory to our virtual environment:

::: {.enlighter-default .enlighter-v-codegroup .enlighter-t-pyis-enlighter-theme .enlighter-linenumbers}
::: {.enlighter-codegroup-switch}
::: {.enlighter-btn .enlighter-active}
Install OpenCV 4 on your Raspberry Pi
:::
:::

::: {.enlighter-codegroup-wrapper}
::: {.enlighter-toolbar}
::: {.enlighter-btn .enlighter-btn-raw}
:::

::: {.enlighter-btn .enlighter-btn-copy}
:::

::: {.enlighter-btn .enlighter-btn-window}
:::

::: {.enlighter-btn .enlighter-btn-website}
:::
:::

::: {style="display: block;"}
::: {.enlighter style=""}
<div>

<div>

[\$ cd
\~/.virtualenvs/cv/lib/python3.]{.enlighter-text}[5]{.enlighter-n1}[/site-packages/]{.enlighter-text}

</div>

</div>

<div>

<div>

[\$ ln -s
/usr/local/python/cv2/python-]{.enlighter-text}[3.5]{.enlighter-n0}[/cv2.cpython-35m-arm-linux-gnueabihf.so
cv2.so]{.enlighter-text}

</div>

</div>

<div>

<div>

[\$ cd \~]{.enlighter-text}

</div>

</div>
:::

``` {.enlighter-raw}
$ cd ~/.virtualenvs/cv/lib/python3.5/site-packages/
$ ln -s /usr/local/python/cv2/python-3.5/cv2.cpython-35m-arm-linux-gnueabihf.so cv2.so
$ cd ~
```
:::
:::
:::

``` {.EnlighterJSRAW .enlighter-origin enlighter-language="python" enlighter-theme="" enlighter-highlight="" enlighter-linenumbers="true" enlighter-lineoffset="" enlighter-title="Install OpenCV 4 on your Raspberry Pi" enlighter-group="68"}
$ cd ~/.virtualenvs/cv/lib/python3.5/site-packages/
$ ln -s /usr/local/python/cv2/python-3.5/cv2.cpython-35m-arm-linux-gnueabihf.so cv2.so
$ cd ~
```

I cannot stress this step enough --- **this step is *critical.*** If you
don't create a symbolic link, you won't be able to import OpenCV in your
scripts. Also, ensure that the paths and filenames in the above commands
are correct for your Raspberry Pi.  **I suggest tab-completion.**

### Step \#7: Test your OpenCV 4 install on your Raspberry Pi

Let's do a quick sanity test to see if OpenCV 4 is ready to go.

Open a terminal and perform the following:

::: {.enlighter-default .enlighter-v-codegroup .enlighter-t-pyis-enlighter-theme .enlighter-linenumbers}
::: {.enlighter-codegroup-switch}
::: {.enlighter-btn .enlighter-active}
Install OpenCV 4 on your Raspberry Pi
:::
:::

::: {.enlighter-codegroup-wrapper}
::: {.enlighter-toolbar}
::: {.enlighter-btn .enlighter-btn-raw}
:::

::: {.enlighter-btn .enlighter-btn-copy}
:::

::: {.enlighter-btn .enlighter-btn-window}
:::

::: {.enlighter-btn .enlighter-btn-website}
:::
:::

::: {style="display: block;"}
::: {.enlighter style=""}
<div>

<div>

[\$ workon cv]{.enlighter-text}

</div>

</div>

<div>

<div>

[\$ python]{.enlighter-text}

</div>

</div>

<div>

<div>

[]{.enlighter-text}[\>\>\>]{.enlighter-g1}[
]{.enlighter-text}[import]{.enlighter-k0}[ cv2]{.enlighter-text}

</div>

</div>

<div>

<div>

[]{.enlighter-text}[\>\>\>]{.enlighter-g1}[
cv2.]{.enlighter-text}[\_\_version\_\_]{.enlighter-e3}[]{.enlighter-text}

</div>

</div>

<div>

<div>

[]{.enlighter-text}[\'4.0.0\']{.enlighter-s0}[]{.enlighter-text}

</div>

</div>

<div>

<div>

[]{.enlighter-text}[\>\>\>]{.enlighter-g1}[
]{.enlighter-text}[exit]{.enlighter-m0}[()]{.enlighter-g1}

</div>

</div>
:::

``` {.enlighter-raw}
$ workon cv
$ python
>>> import cv2
>>> cv2.__version__
'4.0.0'
>>> exit()
```
:::
:::
:::

``` {.EnlighterJSRAW .enlighter-origin enlighter-language="python" enlighter-theme="" enlighter-highlight="" enlighter-linenumbers="true" enlighter-lineoffset="" enlighter-title="Install OpenCV 4 on your Raspberry Pi" enlighter-group="69"}
$ workon cv
$ python
>>> import cv2
>>> cv2.__version__
'4.0.0'
>>> exit()
```

The first command activates our virtual environment. Then we run the
Python interpreter associated with the environment.

If you see that you have version 4.0.0 installed, then you're now fully
armed and dangerous + ready to perform computer vision and image
processing.

### A Raspberry Pi + OpenCV 4 project to get your feet wet

A while back, I was working hard on responding to PyImageSearch readers
via comments, emails, and Twitter/Facebook/LinkedIn. I make a point of
responding to as many incoming questions and comments as I can.

It was 4:30 in the afternoon and I was cranking away at the keyboard in
a "flow" state.

But while I was typing away, something triggered in my brain that I was
thirsty. Very thirsty.

So I took a quick break from the keyboard and went to the fridge to grab
a tasty beer ?.

**WTF?**

All my beers were gone!

Who stole my beer?!

I grabbed some water instead and went back to the computer. I closed all
correspondence windows and fired up a code editor/IDE ([I like
PyCharm](https://pyimagesearch.com/2015/08/17/the-perfect-computer-vision-environment-pycharm-opencv-and-python-virtual-environments/)).

I started tapping away at the keyboard again and sipping some water.

**What was I building?**

I was building a **security cam with my Raspberry Pi** which will catch
people leaving/entering my apartment and opening/closing my fridge. I'll
catch that SOB stealing my beer next time!

![**Figure 7:** Examples of the Raspberry Pi home surveillance system
detecting motion in video frames and uploading them to my personal
Dropbox
account.](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/pi_home_surveillance_animated.gif){.size-full
.wp-image-2398 width="500" height="375"}

If you want to learn how to build a security camera with your Raspberry
Pi and OpenCV 4, then I suggest you read the **[original blog
post](https://pyimagesearch.com/2015/06/01/home-surveillance-and-motion-detection-with-the-raspberry-pi-python-and-opencv/)**.

This project is relatively simple and will accomplish the following:

-   Detects motion via background subtraction.
-   Uploads images of intruders and other motion to Dropbox so you can
    review events later. All images are timestamped so you'll know when
    someone was in view of your Raspberry Pi security camera.

Or if you're savvy and want to grab the code right now, you can be up
and running in a few moments after you paste your Dropbox API key in the
config file.

To download this project, scroll to the ***"Downloads"*** section of
this blog post and fill out the form.

You can download the zip to your

::: {.enlighter-default .enlighter-v-inline .enlighter-t-pyis-enlighter-theme}
[[\~/Downloads]{.enlighter-text}]{.enlighter}
:::

`~/Downloads`{.EnlighterJSRAW .enlighter-origin
enlighter-language="shell"}  folder and then fire up a terminal:

::: {.enlighter-default .enlighter-v-codegroup .enlighter-t-pyis-enlighter-theme .enlighter-linenumbers}
::: {.enlighter-codegroup-switch}
::: {.enlighter-btn .enlighter-active}
Install OpenCV 4 on your Raspberry Pi
:::
:::

::: {.enlighter-codegroup-wrapper}
::: {.enlighter-toolbar}
::: {.enlighter-btn .enlighter-btn-raw}
:::

::: {.enlighter-btn .enlighter-btn-copy}
:::

::: {.enlighter-btn .enlighter-btn-window}
:::

::: {.enlighter-btn .enlighter-btn-website}
:::
:::

::: {style="display: block;"}
::: {.enlighter style=""}
<div>

<div>

[\$ cd \~/Downloads]{.enlighter-text}

</div>

</div>

<div>

<div>

[\$ scp pi-home-surveillance.zip
pi\@192.168.1.]{.enlighter-text}[119]{.enlighter-n1}[:\~]{.enlighter-text}[
\# replace IP with your Pi\'s IP]{.enlighter-c0}[]{.enlighter-text}

</div>

</div>

<div>

<div>

[\$ ssh pi\@192.168.1.]{.enlighter-text}[119]{.enlighter-n1}[ \# replace
with your Pi\'s IP]{.enlighter-c0}

</div>

</div>
:::

``` {.enlighter-raw}
$ cd ~/Downloads
$ scp pi-home-surveillance.zip pi@192.168.1.119:~ # replace IP with your Pi's IP
$ ssh pi@192.168.1.119 # replace with your Pi's IP
```
:::
:::
:::

``` {.EnlighterJSRAW .enlighter-origin enlighter-language="shell" enlighter-theme="" enlighter-highlight="" enlighter-linenumbers="true" enlighter-lineoffset="" enlighter-title="Install OpenCV 4 on your Raspberry Pi" enlighter-group="71"}
$ cd ~/Downloads
$ scp pi-home-surveillance.zip pi@192.168.1.119:~ # replace IP with your Pi's IP
$ ssh pi@192.168.1.119 # replace with your Pi's IP
```

Once your SSH connection is established let's install a couple packages,
namely the Dropbox API:

::: {.enlighter-default .enlighter-v-codegroup .enlighter-t-pyis-enlighter-theme .enlighter-linenumbers}
::: {.enlighter-codegroup-switch}
::: {.enlighter-btn .enlighter-active}
Install OpenCV 4 on your Raspberry Pi
:::
:::

::: {.enlighter-codegroup-wrapper}
::: {.enlighter-toolbar}
::: {.enlighter-btn .enlighter-btn-raw}
:::

::: {.enlighter-btn .enlighter-btn-copy}
:::

::: {.enlighter-btn .enlighter-btn-window}
:::

::: {.enlighter-btn .enlighter-btn-website}
:::
:::

::: {style="display: block;"}
::: {.enlighter style=""}
<div>

<div>

[\$ workon cv]{.enlighter-text}

</div>

</div>

<div>

<div>

[\$ pip install dropbox]{.enlighter-text}

</div>

</div>

<div>

<div>

[\$ pip install imutils]{.enlighter-text}

</div>

</div>

<div>

<div>

[\$ pip install ]{.enlighter-text}[\"picamera\[array\]\"]{.enlighter-s0}

</div>

</div>
:::

``` {.enlighter-raw}
$ workon cv
$ pip install dropbox
$ pip install imutils
$ pip install "picamera[array]"
```
:::
:::
:::

``` {.EnlighterJSRAW .enlighter-origin enlighter-language="shell" enlighter-theme="" enlighter-highlight="" enlighter-linenumbers="true" enlighter-lineoffset="" enlighter-title="Install OpenCV 4 on your Raspberry Pi" enlighter-group="72"}
$ workon cv
$ pip install dropbox
$ pip install imutils
$ pip install "picamera[array]"
```

From there, unzip the files and change working directory:

::: {.enlighter-default .enlighter-v-codegroup .enlighter-t-pyis-enlighter-theme .enlighter-linenumbers}
::: {.enlighter-codegroup-switch}
::: {.enlighter-btn .enlighter-active}
Install OpenCV 4 on your Raspberry Pi
:::
:::

::: {.enlighter-codegroup-wrapper}
::: {.enlighter-toolbar}
::: {.enlighter-btn .enlighter-btn-raw}
:::

::: {.enlighter-btn .enlighter-btn-copy}
:::

::: {.enlighter-btn .enlighter-btn-window}
:::

::: {.enlighter-btn .enlighter-btn-website}
:::
:::

::: {style="display: block;"}
::: {.enlighter style=""}
<div>

<div>

[\$ cd \~]{.enlighter-text}

</div>

</div>

<div>

<div>

[\$ unzip pi-home-surveillance.zip]{.enlighter-text}

</div>

</div>

<div>

<div>

[\$ cd pi-home-surveillance]{.enlighter-text}

</div>

</div>
:::

``` {.enlighter-raw}
$ cd ~
$ unzip pi-home-surveillance.zip
$ cd pi-home-surveillance
```
:::
:::
:::

``` {.EnlighterJSRAW .enlighter-origin enlighter-language="shell" enlighter-theme="" enlighter-highlight="" enlighter-linenumbers="true" enlighter-lineoffset="" enlighter-title="Install OpenCV 4 on your Raspberry Pi" enlighter-group="73"}
$ cd ~
$ unzip pi-home-surveillance.zip
$ cd pi-home-surveillance
```

You'll be presented with a directory structure that looks like this:

::: {.enlighter-default .enlighter-v-codegroup .enlighter-t-pyis-enlighter-theme .enlighter-linenumbers}
::: {.enlighter-codegroup-switch}
::: {.enlighter-btn .enlighter-active}
Install OpenCV 4 on your Raspberry Pi
:::
:::

::: {.enlighter-codegroup-wrapper}
::: {.enlighter-toolbar}
::: {.enlighter-btn .enlighter-btn-raw}
:::

::: {.enlighter-btn .enlighter-btn-copy}
:::

::: {.enlighter-btn .enlighter-btn-window}
:::

::: {.enlighter-btn .enlighter-btn-website}
:::
:::

::: {style="display: block;"}
::: {.enlighter style=""}
<div>

<div>

[\$ tree \--dirsfirst]{.enlighter-text}

</div>

</div>

<div>

<div>

[.]{.enlighter-text}

</div>

</div>

<div>

<div>

[├── pyimagesearch]{.enlighter-text}

</div>

</div>

<div>

<div>

[│ ├──
]{.enlighter-text}[\_\_init\_\_]{.enlighter-e3}[.py]{.enlighter-text}

</div>

</div>

<div>

<div>

[│ └── tempimage.py]{.enlighter-text}

</div>

</div>

<div>

<div>

[├── conf.json]{.enlighter-text}

</div>

</div>

<div>

<div>

[└── pi\_surveillance.py]{.enlighter-text}

</div>

</div>

<div>

<div>

[]{.enlighter-text}

</div>

</div>

<div>

<div>

[]{.enlighter-text}[1]{.enlighter-n1}[ directory,
]{.enlighter-text}[6]{.enlighter-n1}[ files]{.enlighter-text}

</div>

</div>
:::

``` {.enlighter-raw}
$ tree --dirsfirst
.
├── pyimagesearch
│   ├── __init__.py
│   └── tempimage.py
├── conf.json
└── pi_surveillance.py

1 directory, 6 files
```
:::
:::
:::

``` {.EnlighterJSRAW .enlighter-origin enlighter-language="python" enlighter-theme="" enlighter-highlight="" enlighter-linenumbers="true" enlighter-lineoffset="" enlighter-title="Install OpenCV 4 on your Raspberry Pi" enlighter-group="74"}
$ tree --dirsfirst
.
├── pyimagesearch
│   ├── __init__.py
│   └── tempimage.py
├── conf.json
└── pi_surveillance.py

1 directory, 6 files
```

Before you'll be able to deploy the project, you need to edit the config
file,

::: {.enlighter-default .enlighter-v-inline .enlighter-t-pyis-enlighter-theme}
[[conf.json]{.enlighter-text}]{.enlighter}
:::

`conf.json`{.EnlighterJSRAW .enlighter-origin
enlighter-language="shell"} . Let's quickly inspect it in our terminal
using the

::: {.enlighter-default .enlighter-v-inline .enlighter-t-pyis-enlighter-theme}
[[nano]{.enlighter-text}]{.enlighter}
:::

`nano`{.EnlighterJSRAW .enlighter-origin enlighter-language="shell"} 
text editor (or

::: {.enlighter-default .enlighter-v-inline .enlighter-t-pyis-enlighter-theme}
[[vim]{.enlighter-text}]{.enlighter}
:::

`vim`{.EnlighterJSRAW .enlighter-origin enlighter-language="shell"} /

::: {.enlighter-default .enlighter-v-inline .enlighter-t-pyis-enlighter-theme}
[[emacs]{.enlighter-text}]{.enlighter}
:::

`emacs`{.EnlighterJSRAW .enlighter-origin enlighter-language="shell"} 
if you prefer):

::: {.enlighter-default .enlighter-v-codegroup .enlighter-t-pyis-enlighter-theme .enlighter-linenumbers}
::: {.enlighter-codegroup-switch}
::: {.enlighter-btn .enlighter-active}
Install OpenCV 4 on your Raspberry Pi
:::
:::

::: {.enlighter-codegroup-wrapper}
::: {.enlighter-toolbar}
::: {.enlighter-btn .enlighter-btn-raw}
:::

::: {.enlighter-btn .enlighter-btn-copy}
:::

::: {.enlighter-btn .enlighter-btn-window}
:::

::: {.enlighter-btn .enlighter-btn-website}
:::
:::

::: {style="display: block;"}
::: {.enlighter style=""}
<div>

<div>

[\$ nano conf.json]{.enlighter-text}

</div>

</div>
:::

``` {.enlighter-raw}
$ nano conf.json
```
:::
:::
:::

``` {.EnlighterJSRAW .enlighter-origin enlighter-language="python" enlighter-theme="" enlighter-highlight="" enlighter-linenumbers="true" enlighter-lineoffset="" enlighter-title="Install OpenCV 4 on your Raspberry Pi" enlighter-group="79"}
$ nano conf.json
```

You'll be presented with a JSON dictionary that looks like this:

![**Figure 8:** The Raspberry Pi security camera configuration file. An
API key must be pasted in, and a base path must be configured. For
headless mode, "show\_video" should be set to
"false".](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/install-opencv4-rpi-seccam-conf.jpg){.wp-image-8557
width="600" height="453" sizes="(max-width: 600px) 100vw, 600px"
srcset="https://www.pyimagesearch.com/wp-content/uploads/2018/08/install-opencv4-rpi-seccam-conf.jpg 1000w, https://www.pyimagesearch.com/wp-content/uploads/2018/08/install-opencv4-rpi-seccam-conf-300x227.jpg 300w, https://www.pyimagesearch.com/wp-content/uploads/2018/08/install-opencv4-rpi-seccam-conf-768x580.jpg 768w"}

**At this point it is important to edit the configuration file with your
API key and Path**. To find your API key, you can create an app on
the [app creation page](https://www.dropbox.com/developers/apps/create).
Once you have an app created, the API key may be generated under the
OAuth section of the app's page on the [App
Console](https://www.dropbox.com/developers/apps) (simply click the
"Generate" button and copy/paste the key into the configuration file).
The Path needs to be a valid path in your Dropbox file structure.

***Note:*** *Don't share your API key with anyone unless you trust
them!*

For testing, you can leave

::: {.enlighter-default .enlighter-v-inline .enlighter-t-pyis-enlighter-theme}
[[\"show\_video\"]{.enlighter-s0}[:
]{.enlighter-text}[true]{.enlighter-e0}]{.enlighter}
:::

`"show_video": true`{.EnlighterJSRAW .enlighter-origin
enlighter-language="java"}  and connect an HDMI screen + keyboard/mouse
to your Pi. Eventually you'll want to set the value to

::: {.enlighter-default .enlighter-v-inline .enlighter-t-pyis-enlighter-theme}
[[false]{.enlighter-e0}]{.enlighter}
:::

`false`{.EnlighterJSRAW .enlighter-origin enlighter-language="java"} 
and have your Pi run headless with few cables connected to it so you can
hide it in the inconspicuously.

Once you get your project working, you can monitor the Dropbox folder in
your web browser (you might need to refresh to check for images), or if
you are syncing the folder to your laptop/desktop, you can monitor the
folder there.

**I *highly recommend* that you read the [entire blog
post](https://pyimagesearch.com/2015/06/01/home-surveillance-and-motion-detection-with-the-raspberry-pi-python-and-opencv/)
as well.**

Happy hacking with your Raspberry Pi and OpenCV 4!

### Troubleshooting and Frequently Asked Questions (FAQ)

Did you encounter an error installing OpenCV 4 on your Raspberry Pi?

**Don't throw the little gadget across the room yet.** The first time
you install OpenCV on your Raspberry Pi, it can be very frustrating and
the last thing I want for you to do is to end the learning process here.

If you really get stuck, *don't forget* that the ***QuickStart Bundle***
of **[*Practical Python and OpenCV + Case
Studies*](https://pyimagesearch.com/practical-python-opencv/)** comes
with Raspberry Pi images which are pre-configured and ready to go.
Images for RPi 3B/3B+ and RPi Zero W are included. These images can save
you hours and days (yes it took me about *6 days* to set up the RPi Zero
W) of frustration.

If you have your heart set on figuring this out on your own, I've put
together a short list of frequently asked questions (FAQs) and I suggest
that you familiarize yourself with them.

***Q.*** How do I flash an operating system on to my Raspberry Pi memory
card?

***A.*** I recommend that you:

-   Grab a 16GB or 32GB memory card.
-   Flash Raspbian Stretch with Etcher to the card. Etcher is supported
    by all 3 major OSes.
-   Insert the card into your Raspberry Pi and begin
    with *"Assumptions"* and *"Step 1"* in this blog post.

***Q.*** Can I use Python 2.7?

***A.*** I don't recommend using Python 2.7 as it's rapidly approaching
its end of life. Python 3 is the standard now. But if you insist...

Here's how to get up and running with Python 2.7:

::: {.enlighter-default .enlighter-v-codegroup .enlighter-t-pyis-enlighter-theme .enlighter-linenumbers}
::: {.enlighter-codegroup-switch}
::: {.enlighter-btn .enlighter-active}
How to install OpenCV 4 on Ubuntu
:::
:::

::: {.enlighter-codegroup-wrapper}
::: {.enlighter-toolbar}
::: {.enlighter-btn .enlighter-btn-raw}
:::

::: {.enlighter-btn .enlighter-btn-copy}
:::

::: {.enlighter-btn .enlighter-btn-window}
:::

::: {.enlighter-btn .enlighter-btn-website}
:::
:::

::: {style="display: block;"}
::: {.enlighter style=""}
<div>

<div>

[\$ sudo apt-get install python2.]{.enlighter-text}[7]{.enlighter-n1}[
python2.]{.enlighter-text}[7]{.enlighter-n1}[-dev]{.enlighter-text}

</div>

</div>
:::

``` {.enlighter-raw}
$ sudo apt-get install python2.7 python2.7-dev
```
:::
:::
:::

``` {.EnlighterJSRAW .enlighter-origin enlighter-language="shell" enlighter-theme="" enlighter-highlight="" enlighter-linenumbers="true" enlighter-lineoffset="" enlighter-title="How to install OpenCV 4 on Ubuntu" enlighter-group="82"}
$ sudo apt-get install python2.7 python2.7-dev
```

Then, before you create your virtual environment in **Step \#4**, first
install pip for Python 2.7:

::: {.enlighter-default .enlighter-v-codegroup .enlighter-t-pyis-enlighter-theme .enlighter-linenumbers}
::: {.enlighter-codegroup-switch}
::: {.enlighter-btn .enlighter-active}
How to install OpenCV 4 on Ubuntu
:::
:::

::: {.enlighter-codegroup-wrapper}
::: {.enlighter-toolbar}
::: {.enlighter-btn .enlighter-btn-raw}
:::

::: {.enlighter-btn .enlighter-btn-copy}
:::

::: {.enlighter-btn .enlighter-btn-window}
:::

::: {.enlighter-btn .enlighter-btn-website}
:::
:::

::: {style="display: block;"}
::: {.enlighter style=""}
<div>

<div>

[\$ sudo python2.]{.enlighter-text}[7]{.enlighter-n1}[
get-pip.py]{.enlighter-text}

</div>

</div>
:::

``` {.enlighter-raw}
$ sudo python2.7 get-pip.py
```
:::
:::
:::

``` {.EnlighterJSRAW .enlighter-origin enlighter-language="shell" enlighter-theme="" enlighter-highlight="" enlighter-linenumbers="true" enlighter-lineoffset="" enlighter-title="How to install OpenCV 4 on Ubuntu" enlighter-group="83"}
$ sudo python2.7 get-pip.py
```

Also in **Step \#4**: when you create your virtual environment, simply
use the relevant Python version flag:

::: {.enlighter-default .enlighter-v-codegroup .enlighter-t-pyis-enlighter-theme .enlighter-linenumbers}
::: {.enlighter-codegroup-switch}
::: {.enlighter-btn .enlighter-active}
How to install OpenCV 4 on Ubuntu
:::
:::

::: {.enlighter-codegroup-wrapper}
::: {.enlighter-toolbar}
::: {.enlighter-btn .enlighter-btn-raw}
:::

::: {.enlighter-btn .enlighter-btn-copy}
:::

::: {.enlighter-btn .enlighter-btn-window}
:::

::: {.enlighter-btn .enlighter-btn-website}
:::
:::

::: {style="display: block;"}
::: {.enlighter style=""}
<div>

<div>

[\$ mkvirtualenv cv -p python2.]{.enlighter-text}[7]{.enlighter-n1}

</div>

</div>
:::

``` {.enlighter-raw}
$ mkvirtualenv cv -p python2.7
```
:::
:::
:::

``` {.EnlighterJSRAW .enlighter-origin enlighter-language="python" enlighter-theme="" enlighter-highlight="" enlighter-linenumbers="true" enlighter-lineoffset="" enlighter-title="How to install OpenCV 4 on Ubuntu" enlighter-group="84"}
$ mkvirtualenv cv -p python2.7
```

From there everything should be the same.

***Q.*** Can I just [pip to install OpenCV
4?](https://pyimagesearch.com/2018/09/19/pip-install-opencv/)

***A.*** In the future, yes. Currently you'll need to compile from
source until piwheels has an OpenCV 4 binary available.

***Q.*** Why can't I just apt-get install OpenCV?

***A.*** Avoid this "solution" *at all costs* even though it *might*
work. First, this method likely won't install OpenCV 4 for a while.
Secondly, apt-get doesn't play nice with virtual environments and you
won't have control over your compile and build.

***Q.*** The  

::: {.enlighter-default .enlighter-v-inline .enlighter-t-pyis-enlighter-theme}
[[mkvirtualenv]{.enlighter-text}]{.enlighter}
:::

`mkvirtualenv`{.EnlighterJSRAW .enlighter-origin
enlighter-language="generic"}  and 

::: {.enlighter-default .enlighter-v-inline .enlighter-t-pyis-enlighter-theme}
[[workon]{.enlighter-text}]{.enlighter}
:::

`workon`{.EnlighterJSRAW .enlighter-origin
enlighter-language="generic"} commands yield a "command not found
error". I'm not sure what to do next.

***A.*** There a number of reasons why you would be seeing this error
message, all of come from to **Step \#4:**

1.  First, ensure you have installed
    ::: {.enlighter-default .enlighter-v-inline .enlighter-t-pyis-enlighter-theme}
    [[virtualenv]{.enlighter-text}]{.enlighter}
    :::

    `virtualenv`{.EnlighterJSRAW .enlighter-origin
    enlighter-language="generic"}  and
    ::: {.enlighter-default .enlighter-v-inline .enlighter-t-pyis-enlighter-theme}
    [[virtualenvwrapper]{.enlighter-text}]{.enlighter}
    :::

    `virtualenvwrapper`{.EnlighterJSRAW .enlighter-origin
    enlighter-language="generic"}  properly using the
    ::: {.enlighter-default .enlighter-v-inline .enlighter-t-pyis-enlighter-theme}
    [[pip]{.enlighter-text}]{.enlighter}
    :::

    `pip`{.EnlighterJSRAW .enlighter-origin
    enlighter-language="generic"}  package manager. Verify by running
    ::: {.enlighter-default .enlighter-v-inline .enlighter-t-pyis-enlighter-theme}
    [[pip freeze]{.enlighter-text}]{.enlighter}
    :::

    `pip freeze`{.EnlighterJSRAW .enlighter-origin
    enlighter-language="generic"} , and ensure that you see both
    ::: {.enlighter-default .enlighter-v-inline .enlighter-t-pyis-enlighter-theme}
    [[virtualenv]{.enlighter-text}]{.enlighter}
    :::

    `virtualenv`{.EnlighterJSRAW .enlighter-origin
    enlighter-language="generic"}  and
    ::: {.enlighter-default .enlighter-v-inline .enlighter-t-pyis-enlighter-theme}
    [[virtualenvwrapper]{.enlighter-text}]{.enlighter}
    :::

    `virtualenvwrapper`{.EnlighterJSRAW .enlighter-origin
    enlighter-language="generic"}  in the list of installed packages.
2.  Your
    ::: {.enlighter-default .enlighter-v-inline .enlighter-t-pyis-enlighter-theme}
    [[\~/.profile]{.enlighter-text}]{.enlighter}
    :::

    `~/.profile`{.EnlighterJSRAW .enlighter-origin
    enlighter-language="generic"}  file may have mistakes. View the
    contents of your
    ::: {.enlighter-default .enlighter-v-inline .enlighter-t-pyis-enlighter-theme}
    [[\~/.profile]{.enlighter-text}]{.enlighter}
    :::

    `~/.profile`{.EnlighterJSRAW .enlighter-origin
    enlighter-language="generic"}  file to see the proper
    ::: {.enlighter-default .enlighter-v-inline .enlighter-t-pyis-enlighter-theme}
    [[export]{.enlighter-text}]{.enlighter}
    :::

    `export`{.EnlighterJSRAW .enlighter-origin
    enlighter-language="generic"}  and
    ::: {.enlighter-default .enlighter-v-inline .enlighter-t-pyis-enlighter-theme}
    [[source]{.enlighter-text}]{.enlighter}
    :::

    `source`{.EnlighterJSRAW .enlighter-origin
    enlighter-language="generic"}  commands are present (check **Step
    \#4** for the commands that should be appended to
    ::: {.enlighter-default .enlighter-v-inline .enlighter-t-pyis-enlighter-theme}
    [[\~/.profile]{.enlighter-text}]{.enlighter}
    :::

    `~/.profile`{.EnlighterJSRAW .enlighter-origin
    enlighter-language="generic"} ).
3.  You might have forgotten to
    ::: {.enlighter-default .enlighter-v-inline .enlighter-t-pyis-enlighter-theme}
    [[source]{.enlighter-text}]{.enlighter}
    :::

    `source`{.EnlighterJSRAW .enlighter-origin
    enlighter-language="generic"}  your
    ::: {.enlighter-default .enlighter-v-inline .enlighter-t-pyis-enlighter-theme}
    [[\~/.profile]{.enlighter-text}]{.enlighter}
    :::

    `~/.profile`{.EnlighterJSRAW .enlighter-origin
    enlighter-language="shell"} . Make sure you run 
    ::: {.enlighter-default .enlighter-v-inline .enlighter-t-pyis-enlighter-theme}
    [[source \~/.profile]{.enlighter-text}]{.enlighter}
    :::

    `source ~/.profile`{.EnlighterJSRAW .enlighter-origin
    enlighter-language="generic"}  after editing it to ensure you have
    access to the
    ::: {.enlighter-default .enlighter-v-inline .enlighter-t-pyis-enlighter-theme}
    [[mkvirtualenv]{.enlighter-text}]{.enlighter}
    :::

    `mkvirtualenv`{.EnlighterJSRAW .enlighter-origin
    enlighter-language="generic"}  and
    ::: {.enlighter-default .enlighter-v-inline .enlighter-t-pyis-enlighter-theme}
    [[workon]{.enlighter-text}]{.enlighter}
    :::

    `workon`{.EnlighterJSRAW .enlighter-origin
    enlighter-language="generic"}  commands.

***Q.*** When I open a new terminal, logout, or reboot my Raspberry Pi,
I cannot execute the

::: {.enlighter-default .enlighter-v-inline .enlighter-t-pyis-enlighter-theme}
[[mkvirtualenv]{.enlighter-text}]{.enlighter}
:::

`mkvirtualenv`{.EnlighterJSRAW .enlighter-origin
enlighter-language="generic"}  or

::: {.enlighter-default .enlighter-v-inline .enlighter-t-pyis-enlighter-theme}
[[workon]{.enlighter-text}]{.enlighter}
:::

`workon`{.EnlighterJSRAW .enlighter-origin
enlighter-language="generic"}  commands.

***A.*** If you're on the Raspbian desktop, this will likely occur. The
default profile that is loaded when you launch a terminal, for some
reason, doesn't source the

::: {.enlighter-default .enlighter-v-inline .enlighter-t-pyis-enlighter-theme}
[[\~/.profile]{.enlighter-text}]{.enlighter}
:::

`~/.profile`{.EnlighterJSRAW .enlighter-origin
enlighter-language="python"}  file. Please refer to **\#2** from the
previous question. Over SSH, you probably won't run into this.

***Q.** *When I try to import OpenCV, I encounter this message: 

::: {.enlighter-default .enlighter-v-inline .enlighter-t-pyis-enlighter-theme}
[[Import Error: No module named cv2]{.enlighter-text}]{.enlighter}
:::

`Import Error: No module named cv2`{.EnlighterJSRAW .enlighter-origin
enlighter-language="generic"} .

***A.*** There are *several* reasons this could be happening and
unfortunately, it is hard to diagnose. I recommend the following
suggestions to help diagnose and resolve the error:

1.  Ensure your 
    ::: {.enlighter-default .enlighter-v-inline .enlighter-t-pyis-enlighter-theme}
    [[cv]{.enlighter-text}]{.enlighter}
    :::

    `cv`{.EnlighterJSRAW .enlighter-origin
    enlighter-language="generic"}  virtual environment is active by
    using the
    ::: {.enlighter-default .enlighter-v-inline .enlighter-t-pyis-enlighter-theme}
    [[workon cv]{.enlighter-text}]{.enlighter}
    :::

    `workon cv`{.EnlighterJSRAW .enlighter-origin
    enlighter-language="generic"}  command. If this command gives you an
    error, then verify that
    ::: {.enlighter-default .enlighter-v-inline .enlighter-t-pyis-enlighter-theme}
    [[virtualenv]{.enlighter-text}]{.enlighter}
    :::

    `virtualenv`{.EnlighterJSRAW .enlighter-origin
    enlighter-language="shell"}  and
    ::: {.enlighter-default .enlighter-v-inline .enlighter-t-pyis-enlighter-theme}
    [[virtualenvwrapper]{.enlighter-text}]{.enlighter}
    :::

    `virtualenvwrapper`{.EnlighterJSRAW .enlighter-origin
    enlighter-language="shell"}  are properly installed.
2.  Try investigating the contents of the
    ::: {.enlighter-default .enlighter-v-inline .enlighter-t-pyis-enlighter-theme}
    [[site-packages]{.enlighter-text}]{.enlighter}
    :::

    `site-packages`{.EnlighterJSRAW .enlighter-origin
    enlighter-language="generic"}  directory in your
    ::: {.enlighter-default .enlighter-v-inline .enlighter-t-pyis-enlighter-theme}
    [[cv]{.enlighter-text}]{.enlighter}
    :::

    `cv`{.EnlighterJSRAW .enlighter-origin
    enlighter-language="generic"}  virtual environment. You can find the
    ::: {.enlighter-default .enlighter-v-inline .enlighter-t-pyis-enlighter-theme}
    [[site-packages]{.enlighter-text}]{.enlighter}
    :::

    `site-packages`{.EnlighterJSRAW .enlighter-origin
    enlighter-language="generic"}  directory in
    ::: {.enlighter-default .enlighter-v-inline .enlighter-t-pyis-enlighter-theme}
    [[\~/.virtualenvs/cv/lib/python3.]{.enlighter-text}[5]{.enlighter-m3}[/site-packages/]{.enlighter-text}]{.enlighter}
    :::

    `~/.virtualenvs/cv/lib/python3.5/site-packages/`{.EnlighterJSRAW
    .enlighter-origin enlighter-language="generic"}  depending on your
    Python version. Make sure (1) there is a
    ::: {.enlighter-default .enlighter-v-inline .enlighter-t-pyis-enlighter-theme}
    [[cv2]{.enlighter-text}]{.enlighter}
    :::

    `cv2`{.EnlighterJSRAW .enlighter-origin
    enlighter-language="generic"}  sym-link directory in the 
    ::: {.enlighter-default .enlighter-v-inline .enlighter-t-pyis-enlighter-theme}
    [[site-packages]{.enlighter-text}]{.enlighter}
    :::

    `site-packages`{.EnlighterJSRAW .enlighter-origin
    enlighter-language="generic"}  directory and (2) it's properly
    sym-linked.
3.  Be sure to check the
    ::: {.enlighter-default .enlighter-v-inline .enlighter-t-pyis-enlighter-theme}
    [[site-packages]{.enlighter-text}]{.enlighter}
    :::

    `site-packages`{.EnlighterJSRAW .enlighter-origin
    enlighter-language="generic"}  (and even
    ::: {.enlighter-default .enlighter-v-inline .enlighter-t-pyis-enlighter-theme}
    [[dist-packages]{.enlighter-text}]{.enlighter}
    :::

    `dist-packages`{.EnlighterJSRAW .enlighter-origin
    enlighter-language="generic"} ) directory for the system install of
    Python located in
    ::: {.enlighter-default .enlighter-v-inline .enlighter-t-pyis-enlighter-theme}
    [[/usr/local/python/]{.enlighter-text}]{.enlighter}
    :::

    `/usr/local/python/`{.EnlighterJSRAW .enlighter-origin
    enlighter-language="generic"} , respectively. Ideally, you should
    have a
    ::: {.enlighter-default .enlighter-v-inline .enlighter-t-pyis-enlighter-theme}
    [[cv2]{.enlighter-text}]{.enlighter}
    :::

    `cv2`{.EnlighterJSRAW .enlighter-origin
    enlighter-language="generic"}  directory there.
4.  As a last resort, check in your
    ::: {.enlighter-default .enlighter-v-inline .enlighter-t-pyis-enlighter-theme}
    [[build/lib]{.enlighter-text}]{.enlighter}
    :::

    `build/lib`{.EnlighterJSRAW .enlighter-origin
    enlighter-language="generic"}  directory of your OpenCV build.
    There *should* be a
    ::: {.enlighter-default .enlighter-v-inline .enlighter-t-pyis-enlighter-theme}
    [[cv2]{.enlighter-text}]{.enlighter}
    :::

    `cv2`{.EnlighterJSRAW .enlighter-origin
    enlighter-language="generic"}  directory there (if both
    ::: {.enlighter-default .enlighter-v-inline .enlighter-t-pyis-enlighter-theme}
    [[cmake]{.enlighter-text}]{.enlighter}
    :::

    `cmake`{.EnlighterJSRAW .enlighter-origin
    enlighter-language="generic"}  and
    ::: {.enlighter-default .enlighter-v-inline .enlighter-t-pyis-enlighter-theme}
    [[make]{.enlighter-text}]{.enlighter}
    :::

    `make`{.EnlighterJSRAW .enlighter-origin
    enlighter-language="generic"}  executed without error). If the
    ::: {.enlighter-default .enlighter-v-inline .enlighter-t-pyis-enlighter-theme}
    [[cv2]{.enlighter-text}]{.enlighter}
    :::

    `cv2`{.EnlighterJSRAW .enlighter-origin
    enlighter-language="generic"}  directory is present, *manually copy
    it* into
    ::: {.enlighter-default .enlighter-v-inline .enlighter-t-pyis-enlighter-theme}
    [[/usr/local/python]{.enlighter-text}]{.enlighter}
    :::

    `/usr/local/python`{.EnlighterJSRAW .enlighter-origin
    enlighter-language="shell"}  and then link the .so file to the
    ::: {.enlighter-default .enlighter-v-inline .enlighter-t-pyis-enlighter-theme}
    [[site-packages]{.enlighter-text}]{.enlighter}
    :::

    `site-packages`{.EnlighterJSRAW .enlighter-origin
    enlighter-language="generic"}  directory for the
    ::: {.enlighter-default .enlighter-v-inline .enlighter-t-pyis-enlighter-theme}
    [[cv]{.enlighter-text}]{.enlighter}
    :::

    `cv`{.EnlighterJSRAW .enlighter-origin
    enlighter-language="generic"}  virtual environment.

***Q:** *Why do I encounter a message about "Non-free modules" not being
installed? How can I get the OpenCV non-free modules?

***A: ***New in OpenCV 4, a special CMake flag must be set to obtain the
non-free modules.  Refer to **Step \#5** above and pay attention to the
flag in the CMake command.

***Q.***** **What if my question isn't listed here?

***A. ***Please leave a comment below or [send me an
email](https://pyimagesearch.com/contact/). If you post a comment below,
just be aware that code doesn't format well in the comment form and I
may have to respond to you via email instead.

Summary
-------

Today we installed OpenCV 4 on our Raspberry Pi.

Compiling from source was paramount so that we could obtain OpenCV 4
since it isn't possible yet to install OpenCV 4 via pip.

We then tested our install and deployed a Raspberry Pi as a security
camera. This security camera will detect motion via background
subtraction and upload pictures of intruders to Dropbox. [You can read
the full Raspberry Pi + home surveillance post
here.](https://pyimagesearch.com/2015/06/01/home-surveillance-and-motion-detection-with-the-raspberry-pi-python-and-opencv/)

**To stay up to date with PyImageSearch, *be sure to drop your email in
the form below!***

::: {#download-the-code .post-cta-wrap}
::: {.gpd-post-cta}
::: {.gpd-post-cta-content}
::: {.gpd-post-cta-top}
::: {.gpd-post-cta-top-image}
![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/cta-source-guide-1.png)
:::

::: {.gpd-post-cta-top-title}
#### Download the Source Code and FREE 17-page Resource Guide
:::

::: {.gpd-post-cta-top-desc}
Enter your email address below to get a .zip of the code and a **FREE
17-page Resource Guide on Computer Vision, OpenCV, and Deep Learning.**
Inside you'll find my hand-picked tutorials, books, courses, and
libraries to help you master CV and DL!
:::
:::

::: {.gpd-post-cta-bottom}
Download the code!

::: {style="display: none;" aria-hidden="true"}
Website\
:::
:::
:::
:::
:::
:::

::: {.section .author-box}
![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/02743529311d3b8babbaf6935670ec9c.jpeg){.avatar
.avatar-240 .photo width="240" height="240"
srcset="https://secure.gravatar.com/avatar/02743529311d3b8babbaf6935670ec9c?s=480&d=mm&r=g 2x"}

#### **About the Author** {#about-the-author .author-box-title}

::: {.author-box-content itemprop="description"}
Hi there, I'm Adrian Rosebrock, PhD. All too often I see developers,
students, and researchers wasting their time, studying the wrong things,
and generally struggling to get started with Computer Vision, Deep
Learning, and OpenCV. I created this website to show you what I believe
is the best possible way to get your start.
:::
:::

Reader Interactions {#reader-interactions .screen-reader-text}
-------------------

::: {.single-post-nav}
[](https://www.pyimagesearch.com/2018/09/24/opencv-face-recognition/)

::: {.single-post-nav__previous}
Previous Article:

### OpenCV Face Recognition
:::

[](https://www.pyimagesearch.com/2018/10/15/deep-learning-hydroponics-and-medical-marijuana/)

::: {.single-post-nav__next}
Next Article:

### Deep learning, hydroponics, and medical marijuana
:::
:::

::: {#comments .entry-comments}
### 336 responses to: Install OpenCV 4 on your Raspberry Pi

1.  ::: {#comment-479858}
    ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/537ab0f61d5f6d7c2fb7b64c14db7752.jpeg){.avatar
    .avatar-48 .photo width="48" height="48"
    srcset="https://secure.gravatar.com/avatar/537ab0f61d5f6d7c2fb7b64c14db7752?s=96&d=mm&r=g 2x"}[Sudeep]{.comment-author-name}

    [September 26, 2018 at 11:09
    am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-479858){.comment-time-link}

    ::: {.comment-content}
    Hey Adrian, How come we dis not need to change the Swap size from
    the default 100 to the 1024 like we did in the other OpenCV installs
    on the Rpi
    :::

    ::: {.comment-reply}
    [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-479858){.comment-reply-link}
    :::

    -   ::: {#comment-479868}
        ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/ce88ea36c4a0d4be49719fc288741c7f.jpeg){.avatar
        .avatar-48 .photo width="48" height="48"
        srcset="https://secure.gravatar.com/avatar/ce88ea36c4a0d4be49719fc288741c7f?s=96&d=mm&r=g 2x"}[[David
        Hoffman](http://twitter.com/drhoffma){.comment-author-link}]{.comment-author-name}

        [September 26, 2018 at 12:49
        pm](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-479868){.comment-time-link}

        ::: {.comment-content}
        Hi Sudeep, good catch. It is very important to change the SWAP
        to 1024 before starting the compile. I made this change for
        Adrian while he is on vacation.
        :::

        ::: {.comment-reply}
        [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-479868){.comment-reply-link}
        :::

        -   ::: {#comment-548156}
            ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/1853d85fc93b63b9e8881f223b63c948.png){.avatar
            .avatar-48 .photo width="48" height="48"
            srcset="https://secure.gravatar.com/avatar/1853d85fc93b63b9e8881f223b63c948?s=96&d=mm&r=g 2x"}[Ted]{.comment-author-name}

            [September 7, 2019 at 2:17
            pm](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-548156){.comment-time-link}

            ::: {.comment-content}
            Hi David.\
            I did everything like this post and got no errors. But in
            the end it does not know workon cv.should I enter workon cv
            in a new terminal or the same I did installation. I examined
            in both.\
            Please help me.\
            Thank u
            :::

            ::: {.comment-reply}
            [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-548156){.comment-reply-link}
            :::
            :::

        -   ::: {#comment-548157}
            ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/1853d85fc93b63b9e8881f223b63c948.png){.avatar
            .avatar-48 .photo width="48" height="48"
            srcset="https://secure.gravatar.com/avatar/1853d85fc93b63b9e8881f223b63c948?s=96&d=mm&r=g 2x"}[Ted]{.comment-author-name}

            [September 7, 2019 at 2:20
            pm](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-548157){.comment-time-link}

            ::: {.comment-content}
            Raspberrypi downloded python 3.7 so should I change \#step6
            :::

            ::: {.comment-reply}
            [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-548157){.comment-reply-link}
            :::
            :::
        :::
    :::

2.  ::: {#comment-479867}
    ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/7b17b48b0349271354a16a4453bb798e.png){.avatar
    .avatar-48 .photo width="48" height="48"
    srcset="https://secure.gravatar.com/avatar/7b17b48b0349271354a16a4453bb798e?s=96&d=mm&r=g 2x"}[marco]{.comment-author-name}

    [September 26, 2018 at 12:47
    pm](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-479867){.comment-time-link}

    ::: {.comment-content}
    Hello Adrian, I followed step by step your beautiful post and
    everything went smoothly up to the Cmake -D where in the end I
    received an error, thinking it was not very important I continued
    the installation but when I typed Make -j4 not the He found ...
    where did I go wrong?

    `(cv) pi@raspberrypi: ~/opencv-4.0.0-alpha/build $ make -j4 make: *** No specified target and no makefiles found. Stop."`
    :::

    ::: {.comment-reply}
    [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-479867){.comment-reply-link}
    :::

    -   ::: {#comment-479869}
        ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/ce88ea36c4a0d4be49719fc288741c7f.jpeg){.avatar
        .avatar-48 .photo width="48" height="48"
        srcset="https://secure.gravatar.com/avatar/ce88ea36c4a0d4be49719fc288741c7f?s=96&d=mm&r=g 2x"}[[David
        Hoffman](http://twitter.com/drhoffma){.comment-author-link}]{.comment-author-name}

        [September 26, 2018 at 1:10
        pm](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-479869){.comment-time-link}

        ::: {.comment-content}
        Hi Marco, this is because you did not rename your directories as
        specified in **Step \#3**. It isn't your fault --- due to
        [OpenCV 4 Alpha releasing on September
        20th](https://opencv.org/opencv-4-0-0-alpha.html) while Adrian
        was on vacation, and considering Adrian wrote this post about 3
        weeks ago, this post needed a last minute update (from cloning
        the Git repo to downloading the zip archives). I updated the
        post to show the need for renaming the directories. Simply
        rename your `opencv-4.0.0-alpha` directory to `opencv` and
        `opencv_contrib-4.0.0-alpha` to `opencv_contrib`. Then delete
        the build directory and re-run CMake and continue to follow the
        instructions. Sorry for the mixup and thanks for bringing it to
        our attention!
        :::

        ::: {.comment-reply}
        [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-479869){.comment-reply-link}
        :::

        -   ::: {#comment-490172}
            ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/856af8b4e9f0ef035df7f5acbb53d862.jpeg){.avatar
            .avatar-48 .photo width="48" height="48"
            srcset="https://secure.gravatar.com/avatar/856af8b4e9f0ef035df7f5acbb53d862?s=96&d=mm&r=g 2x"}[[Filippo
            Pesavento](https://pesaventofilippo.tk/){.comment-author-link}]{.comment-author-name}

            [December 1, 2018 at 8:24
            am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-490172){.comment-time-link}

            ::: {.comment-content}
            Hi 🙂 I got the same error, though I renamed correctly all
            folders. Seems to be an error from the previous step, using
            cmake.\
            Cmake does not say "Configuring done" and "Generating done",
            but it throws an error log file and I cannot figure out why.
            Any suggestion?\
            PS. I followed the tutorial step by step, even if I am very
            familiar with Linux and bash. I'm running the latest version
            of Raspbian Lite, if that can help.
            :::

            ::: {.comment-reply}
            [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-490172){.comment-reply-link}
            :::

            -   ::: {#comment-532047}
                ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/58d55ab7b3e82e512f467d08b2a87b14.png){.avatar
                .avatar-48 .photo width="48" height="48"
                srcset="https://secure.gravatar.com/avatar/58d55ab7b3e82e512f467d08b2a87b14?s=96&d=mm&r=g 2x"}[pag]{.comment-author-name}

                [August 6, 2019 at 12:26
                pm](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-532047){.comment-time-link}

                ::: {.comment-content}
                I have the same problem. Did anyone find a solution to
                this or can name the issue?
                :::

                ::: {.comment-reply}
                [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-532047){.comment-reply-link}
                :::

                -   ::: {#comment-545140}
                    ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/5d3fa8c8e2f3b08316d939f4c5e5f4e8.png){.avatar
                    .avatar-48 .photo width="48" height="48"
                    srcset="https://secure.gravatar.com/avatar/5d3fa8c8e2f3b08316d939f4c5e5f4e8?s=96&d=mm&r=g 2x"}[peru]{.comment-author-name}

                    [August 25, 2019 at 3:56
                    pm](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-545140){.comment-time-link}

                    ::: {.comment-content}
                    Hi! as i faced this problem also, i found a solution
                    that worked for me.\
                    i changed the -D
                    OPENCV\_EXTRA\_MODULES\_PATH=../../opencv\_contrib/modules
                    \\ with relative paths instead of the "\~". then the
                    cmake process finishes with out any errors

                    hope this helps
                    :::
                    :::
                :::
            :::
        :::
    :::

3.  ::: {#comment-479875}
    ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/44718a8c865949fdf3b86937f70750ba.png){.avatar
    .avatar-48 .photo width="48" height="48"
    srcset="https://secure.gravatar.com/avatar/44718a8c865949fdf3b86937f70750ba?s=96&d=mm&r=g 2x"}[[Linus
    Goh](https://linusgroh.de/){.comment-author-link}]{.comment-author-name}

    [September 26, 2018 at 3:25
    pm](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-479875){.comment-time-link}

    ::: {.comment-content}
    Hi Adrian, David,

    I'm an active member of the Raspberry Pi community so I think I can
    say a word or two about that 🙂

    1\. Step \#1 should NOT be necessary, as Raspbian will do this step
    \*automatically\* on the first boot and reboot afterwards, which is
    since a long time BTW. Even though it might not yield any errors
    doing it a second time, I see no improvement in it, whatsoever.

    2\. Even though recommended by the foundation itself, in the German
    Raspberry Pi forum we have commonly reports of strange issues caused
    by NOOBS installs of Raspbian which DO NOT OCCUR when doing a direct
    flashing of Raspbian onto the SD card, with the same Pi, PSU etc.\
    It's not entirely clear what causes this, but IMO NOOBS is to be
    recommended with caution, especially to completely new users. They
    should be able to use Raspbian installed directly as it's the next
    step after NOOBS for most people anyway.

    Cheers!
    :::

    ::: {.comment-reply}
    [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-479875){.comment-reply-link}
    :::

    -   ::: {#comment-479968}
        ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/15651d7b8e171af94e5bd71bce549cab.jpeg){.avatar
        .avatar-48 .photo width="48" height="48"
        srcset="https://secure.gravatar.com/avatar/15651d7b8e171af94e5bd71bce549cab?s=96&d=mm&r=g 2x"}[Abhishek
        Thanki]{.comment-author-name}

        [September 27, 2018 at 10:17
        am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-479968){.comment-time-link}

        ::: {.comment-content}
        Hi Linus,

        Interesting on Raspbian automatically expanding the filesystem.
        I recently did an install and had to do it manually.

        Also, I think the only reason why Adrian recommends NOOBS for
        beginners is since it's recommended by the foundation itself.
        But thanks for your input on it!
        :::

        ::: {.comment-reply}
        [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-479968){.comment-reply-link}
        :::

        -   ::: {#comment-480095}
            ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/45b1baaee2b7f7447449eca865edf60e.jpeg){.avatar
            .avatar-48 .photo width="48" height="48"
            srcset="https://secure.gravatar.com/avatar/45b1baaee2b7f7447449eca865edf60e?s=96&d=mm&r=g 2x"}[Alexander
            Holsgrove]{.comment-author-name}

            [September 28, 2018 at 1:06
            pm](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-480095){.comment-time-link}

            ::: {.comment-content}
            I think if you're interested in learning about OpenCV and
            other articles by Adrian, then you're probably more likely
            to be comfortable working on Raspbian rather than NOOBS!
            :::

            ::: {.comment-reply}
            [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-480095){.comment-reply-link}
            :::
            :::
        :::
    :::

4.  ::: {#comment-479916}
    ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/3abba51d28bf30cfc006e9377cacde9b.png){.avatar
    .avatar-48 .photo width="48" height="48"
    srcset="https://secure.gravatar.com/avatar/3abba51d28bf30cfc006e9377cacde9b?s=96&d=mm&r=g 2x"}[Johan
    Smit]{.comment-author-name}

    [September 27, 2018 at 12:46
    am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-479916){.comment-time-link}

    ::: {.comment-content}
    Hi,\
    I have done embedded work on Arm processors (STM32F1 and F4) in C
    without operating system, but no Raspberry Pi.\
    Please help me with information.\
    I would like to use the unit as a type of trail camera, with animal
    recognition and discarding some photos but saving others according
    to type of animal.\
    This means that the processor must mostly sleep, and be woken up by
    passive infrared detector.\
    The question is: Will the Raspbian operating system be able to
    handle this wakeup to take photos in a short time, eg.,
    milliseconds?\
    I have seen Raspberry Pis boot up, and that is totally useless,
    minutes rather than milliseconds.\
    Any information will be greatly appreciated, thank you\
    Johan Smit
    :::

    ::: {.comment-reply}
    [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-479916){.comment-reply-link}
    :::

    -   ::: {#comment-480047}
        ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/e8d1261c0405a861e5bb5916b11a53e8.png){.avatar
        .avatar-48 .photo width="48" height="48"
        srcset="https://secure.gravatar.com/avatar/e8d1261c0405a861e5bb5916b11a53e8?s=96&d=mm&r=g 2x"}[Denis
        Brion]{.comment-author-name}

        [September 28, 2018 at 5:55
        am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-480047){.comment-time-link}

        ::: {.comment-content}
        w/r to RPi starting in minutes : consider a RPi as ... a PC
        (libreoffice, wolfram are x86 ports to ARMs) and notice it boots
        about 10 100 times faster than Windows (part of Windows booting
        is hidden : there is a desktop for marketing "reasons", but
        difficult to use).\
        There is a thing RPi is very bad: it is what PC have, named ACPI
        (ask wikipedia). RPi has no -or very lousy and buggy- sleep
        options. Do not worry : nanoPi (chinese "clones", with better HW
        design, octo cores -- are worse in this domain,... I am af
        asking a raid you asking a feature where RPis are at their
        worst.
        :::

        ::: {.comment-reply}
        [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-480047){.comment-reply-link}
        :::
        :::
    :::

5.  ::: {#comment-479932}
    ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/e8d1261c0405a861e5bb5916b11a53e8.png){.avatar
    .avatar-48 .photo width="48" height="48"
    srcset="https://secure.gravatar.com/avatar/e8d1261c0405a861e5bb5916b11a53e8?s=96&d=mm&r=g 2x"}[Denis
    Brion]{.comment-author-name}

    [September 27, 2018 at 3:51
    am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-479932){.comment-time-link}

    ::: {.comment-content}
    Three things worry me :

    a\) make -j' is unnecessary; make (without j) will compile 4 times
    slower... and keep RPi somewhat cool (BTW, at least in hot
    countries... or in summer, an heatsink+ fan are useful/necessary
    when compiling for hours)

    b\) one can remove the tiny swap partition and add an external swap
    file on a USB disk.\
    Drawbacks :it is slightly slower; one needs to compile linux-utils
    (IIRC) for a classical manipulation)\
    Advantages : repeated writes on a flash device ruins it.... and swap
    is made to allow repeated writes. No need to remove libreoffice
    (suppose one needs it) or wolfram. One can get rid of the 100M
    nanoflash (eats a little disk swap).\
    AFAIK (from reading last year dphys git) , dphys is a warpper around
    sawpon and swapoff... (parts of linux-utils: I prefer using century
    old commands to 1) make a swap file (not partition); 2) desctivate
    the 100 M builtin partition; 3) actvate the new swap file)

    c\) alpha versions seem ... very new. What is the advantage over a
    ocv3-x version (btw: pip installing a 3.x version worked very fast
    and comfortably, as you showed it last week)
    :::

    ::: {.comment-reply}
    [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-479932){.comment-reply-link}
    :::

    -   ::: {#comment-479967}
        ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/15651d7b8e171af94e5bd71bce549cab.jpeg){.avatar
        .avatar-48 .photo width="48" height="48"
        srcset="https://secure.gravatar.com/avatar/15651d7b8e171af94e5bd71bce549cab?s=96&d=mm&r=g 2x"}[Abhishek
        Thanki]{.comment-author-name}

        [September 27, 2018 at 10:08
        am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-479967){.comment-time-link}

        ::: {.comment-content}
        Hi Denis,

        a\) I think using make -j\`x\` is a personal choice and I don't
        really see any issues with it, most people would go for speed on
        any given day. (Also, having lived in a country where
        temperatures go upto 50C in summer, we use A/Cs, and it's pretty
        cool inside. 🙂 )

        b\) Interesting and theoretically speaking it makes sense.
        Definitely something worth a try.

        c\) Advantages: optimizations, C++11 support, more compact
        modules, and many improvements to the Deep Neural Network (DNN)
        module.
        :::

        ::: {.comment-reply}
        [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-479967){.comment-reply-link}
        :::

        -   ::: {#comment-480204}
            ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/e8d1261c0405a861e5bb5916b11a53e8.png){.avatar
            .avatar-48 .photo width="48" height="48"
            srcset="https://secure.gravatar.com/avatar/e8d1261c0405a861e5bb5916b11a53e8?s=96&d=mm&r=g 2x"}[Denis
            Brion]{.comment-author-name}

            [September 29, 2018 at 8:56
            am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-480204){.comment-time-link}

            ::: {.comment-content}
            Hi Abishek:\
            heat issues are not a worry for computers between Syria and
            North India: as people know one can reach 50C, one has an
            air conditioner. OTOH, in West Europe, heath spells are rare
            enough, thus most people do not have air conditioners.\
            I have a nanoPi m3 (octocore) and just an airshield -no fan
            : is noisy- and tried with 8 cores (compiling xtensa-gcc :
            does not need swap extension: it lasted 15 minuts with
            heatsink before crushing: using 3 cores was OK).

            nanoPi m3 are very much like RPi (less support; use debian
            stable instead of debian unstable ; software compiled on a
            nanoPi is likely to work -ocv does- once newer (but
            compatible) libraries are installed. same RAM -1G-: worse
            temperature scaling, IMO).\
            I managed to have ocv4 alpha installed (had to remove
            \_xfeatures2d and stiching, to avoid issues) using your
            script the following way:

            a\) I made a huge (1G) file in \~/ext/catalogue/gros using
            dd.\
            597 sudo mount /dev/sdb2 ext \# \~ext is mount point
            /directory\
            598 ls ext\
            599 ls ext/catalogue

            609 dd if=/dev/zero of=ext/catalogue/gros bs=1k count=1024k\
            610 sync\
            611 ls -lh ext/catalogue/gros

            b\) as "gros" cannot be used as a swap file as it is, it
            must be preapaired. single issue is that some parts of
            util-linux (ask wikipedia for util-linux)are not packaged ,
            as, among them, the one I neded, mkswap, was not packaged
            -according to Murphys laws- and I had to compile them from
            sources (got from
            <https://mirrors.edge.kernel.org/pub/linux/utils/util-linux/v2.15/>)
            the following way:

            619 tar xvf cle/utilLinux.tar.gz\
            620 cd util-linux-2.26-rc1/\
            621 ./configure\
            622 make -j4 \# is short to compile... wonot heat that much\
            623 ls \# what did I do?\
            624 ./mkswap \~/ext/catalogue/gros \# no need to install, it
            is just to prepare a swap file

            Then, it is straight forwards (on a RPi, one should remove
            existing wap partition with suso swapoff -a )

            625 sudo swapon \~/ext/catalogue/gros\
            626 history \>\~/swapstoria \# to remember ... for next time
            or pyimagesearch...

            Then, compilation (with one core enabled) was comfortable
            (almost no library needed swap : makes a difference with
            ocv3 IIRC and seems a nice side of ocv4; only one was python
            bindings which needed about 400 M swap + exiting RAM -but
            desktop remains usable for reading docs)
            :::

            ::: {.comment-reply}
            [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-480204){.comment-reply-link}
            :::
            :::
        :::
    :::

6.  ::: {#comment-480093}
    ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/45b1baaee2b7f7447449eca865edf60e.jpeg){.avatar
    .avatar-48 .photo width="48" height="48"
    srcset="https://secure.gravatar.com/avatar/45b1baaee2b7f7447449eca865edf60e?s=96&d=mm&r=g 2x"}[Alexander
    Holsgrove]{.comment-author-name}

    [September 28, 2018 at 1:03
    pm](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-480093){.comment-time-link}

    ::: {.comment-content}
    After running the build and then the make on a Raspberry Pi 3, I
    can't link the .so file as it's not there. I do have
    /usr/local/lib/python3.5/dist-packages/cv2.cpython-35m-arm-linux-gnueabihf.so
    and also
    /usr/local/lib/python3.5/dist-packages/cv2.cpython-35m-arm-linux-gnueabihf.so

    What have I done wrong please?
    :::

    ::: {.comment-reply}
    [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-480093){.comment-reply-link}
    :::

    -   ::: {#comment-481286}
        ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/02743529311d3b8babbaf6935670ec9c(1).jpeg){.avatar
        .avatar-48 .photo width="48" height="48"
        srcset="https://secure.gravatar.com/avatar/02743529311d3b8babbaf6935670ec9c?s=96&d=mm&r=g 2x"}[Adrian
        Rosebrock]{.comment-author-name}

        [October 8, 2018 at 12:21
        pm](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-481286){.comment-time-link}

        ::: {.comment-content}
        You have not done anything wrong. Use the filename that you have
        found.
        :::

        ::: {.comment-reply}
        [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-481286){.comment-reply-link}
        :::
        :::
    :::

7.  ::: {#comment-480165}
    ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/603f23a34a60a861bc77d95d0b5add59.png){.avatar
    .avatar-48 .photo width="48" height="48"
    srcset="https://secure.gravatar.com/avatar/603f23a34a60a861bc77d95d0b5add59?s=96&d=mm&r=g 2x"}[Matteo]{.comment-author-name}

    [September 29, 2018 at 1:45
    am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-480165){.comment-time-link}

    ::: {.comment-content}
    Hello to all,\
    I am a beginner and I have some problems with the translations, I
    tried to document before writing but probably it did not happen to
    anyone that after making make -j4 without errors and verified the
    correct directories of the python and Numpy interpreter launching
    the python command then gave "importError: no module named CV2"\
    I think it's a path problem, but I do not know how to get it back,
    can you help me?
    :::

    ::: {.comment-reply}
    [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-480165){.comment-reply-link}
    :::

    -   ::: {#comment-481280}
        ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/02743529311d3b8babbaf6935670ec9c(1).jpeg){.avatar
        .avatar-48 .photo width="48" height="48"
        srcset="https://secure.gravatar.com/avatar/02743529311d3b8babbaf6935670ec9c?s=96&d=mm&r=g 2x"}[Adrian
        Rosebrock]{.comment-author-name}

        [October 8, 2018 at 12:18
        pm](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-481280){.comment-time-link}

        ::: {.comment-content}
        Hey Matteo, I would recommend you read the "Troubleshooting and
        Frequently Asked Questions (FAQ)" section of this tutorial as I
        provide answers to the most common reasons why you may not be
        able to import the OPenCV bindings.
        :::

        ::: {.comment-reply}
        [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-481280){.comment-reply-link}
        :::
        :::
    :::

8.  ::: {#comment-480217}
    ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/45b1baaee2b7f7447449eca865edf60e.jpeg){.avatar
    .avatar-48 .photo width="48" height="48"
    srcset="https://secure.gravatar.com/avatar/45b1baaee2b7f7447449eca865edf60e?s=96&d=mm&r=g 2x"}[Alexander
    Holsgrove]{.comment-author-name}

    [September 29, 2018 at 12:18
    pm](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-480217){.comment-time-link}

    ::: {.comment-content}
    The symlink was wrong for me. The file is
    "cv2.cpython-35m-arm-linux-gnueabihf.so" and not
    "cv2.cpython-35m-x86\_64-linux-gnu.so". The whole command therefor
    "ln -s
    /usr/local/lib/python3.5/site-packages/cv2.cpython-35m-arm-linux-gnueabihf.so
    cv2.so\
    "
    :::

    ::: {.comment-reply}
    [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-480217){.comment-reply-link}
    :::
    :::

9.  ::: {#comment-480254}
    ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/db15e18793a09a11c8b4e5433f60e3e3.png){.avatar
    .avatar-48 .photo width="48" height="48"
    srcset="https://secure.gravatar.com/avatar/db15e18793a09a11c8b4e5433f60e3e3?s=96&d=mm&r=g 2x"}[[Pranav
    Lal](https://techesoterica.com/){.comment-author-link}]{.comment-author-name}

    [September 30, 2018 at 12:42
    am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-480254){.comment-time-link}

    ::: {.comment-content}
    Hi,\
    I completed the installation. I had to interrupt make -j4 once when
    it was stuck at 99%. I ran make again without any parameters. I have
    followed the rest of the guide including creating the symbolic link.
    However, when I import cv2 python 3.5 is unable to find the file. I
    have created a virtual environment named cv4 and have followed the
    rest of your instructions without problems. What data should I share
    to help us diagnose the problem?
    :::

    ::: {.comment-reply}
    [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-480254){.comment-reply-link}
    :::

    -   ::: {#comment-481275}
        ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/02743529311d3b8babbaf6935670ec9c(1).jpeg){.avatar
        .avatar-48 .photo width="48" height="48"
        srcset="https://secure.gravatar.com/avatar/02743529311d3b8babbaf6935670ec9c?s=96&d=mm&r=g 2x"}[Adrian
        Rosebrock]{.comment-author-name}

        [October 8, 2018 at 12:11
        pm](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-481275){.comment-time-link}

        ::: {.comment-content}
        Take a look at the "Troubleshooting and Frequently Asked
        Questions (FAQ)" section of this tutorial as I discuss the most
        common reasons why the import will fail.
        :::

        ::: {.comment-reply}
        [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-481275){.comment-reply-link}
        :::

        -   ::: {#comment-509134}
            ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/525dbfc5594ad7a066ced689d11f9fd1.png){.avatar
            .avatar-48 .photo width="48" height="48"
            srcset="https://secure.gravatar.com/avatar/525dbfc5594ad7a066ced689d11f9fd1?s=96&d=mm&r=g 2x"}[carlo
            santos]{.comment-author-name}

            [March 25, 2019 at 8:44
            pm](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-509134){.comment-time-link}

            ::: {.comment-content}
            hi adrian how can i fix the error name module cv2, when i
            write the code \$python, and type import cv2 the system will
            not determine the module name cv2 thanks alot
            :::

            ::: {.comment-reply}
            [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-509134){.comment-reply-link}
            :::

            -   ::: {#comment-509418}
                ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/02743529311d3b8babbaf6935670ec9c(1).jpeg){.avatar
                .avatar-48 .photo width="48" height="48"
                srcset="https://secure.gravatar.com/avatar/02743529311d3b8babbaf6935670ec9c?s=96&d=mm&r=g 2x"}[Adrian
                Rosebrock]{.comment-author-name}

                [March 27, 2019 at 8:47
                am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-509418){.comment-time-link}

                ::: {.comment-content}
                There are many reasons why that could happen. I have
                documented the most common reasons in the
                "Troubleshooting and Frequently Asked Questions (FAQ)"
                section of this post.
                :::

                ::: {.comment-reply}
                [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-509418){.comment-reply-link}
                :::
                :::
            :::
        :::
    :::

10. ::: {#comment-480506}
    ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/e9f97a6db160737477496b0fb26297ab.png){.avatar
    .avatar-48 .photo width="48" height="48"
    srcset="https://secure.gravatar.com/avatar/e9f97a6db160737477496b0fb26297ab?s=96&d=mm&r=g 2x"}[Cameron]{.comment-author-name}

    [October 2, 2018 at 2:42
    am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-480506){.comment-time-link}

    ::: {.comment-content}
    Hi,

    I have tried following this tutorial to compile opencv 4 for the
    orangepi zero board, however when I run the cmake command it does
    not complete due to errors. Looking in the error log it says:\
    Regex: 'command line option .\* is valid for .\* but not for
    C\\+\\+'

    Any ideas why this may be happening?
    :::

    ::: {.comment-reply}
    [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-480506){.comment-reply-link}
    :::
    :::

11. ::: {#comment-480507}
    ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/7b17b48b0349271354a16a4453bb798e.png){.avatar
    .avatar-48 .photo width="48" height="48"
    srcset="https://secure.gravatar.com/avatar/7b17b48b0349271354a16a4453bb798e?s=96&d=mm&r=g 2x"}[marco]{.comment-author-name}

    [October 2, 2018 at 2:44
    am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-480507){.comment-time-link}

    ::: {.comment-content}
    hello Adrian, I would like to understand one thing, why on the
    Raspberry even if you follow the post to the letter then OpenCv does
    not install as it should, even repeating the installation several
    times then you always find yourself with the same problem! You know
    I thought maybe if you put a video with all the steps of the
    installation maybe it could help beginners like me to understand
    where have wrong or at least see where there are differences in the
    installation.

    However, I thank you because you are doing a great jo
    :::

    ::: {.comment-reply}
    [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-480507){.comment-reply-link}
    :::

    -   ::: {#comment-481241}
        ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/02743529311d3b8babbaf6935670ec9c(1).jpeg){.avatar
        .avatar-48 .photo width="48" height="48"
        srcset="https://secure.gravatar.com/avatar/02743529311d3b8babbaf6935670ec9c?s=96&d=mm&r=g 2x"}[Adrian
        Rosebrock]{.comment-author-name}

        [October 8, 2018 at 10:40
        am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-481241){.comment-time-link}

        ::: {.comment-content}
        I've done a few Raspberry Pi + OpenCV install guide videos. I'm
        considering doing one for this post as well but I wanted to wait
        until OpenCV 4 is officially released.
        :::

        ::: {.comment-reply}
        [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-481241){.comment-reply-link}
        :::
        :::
    :::

12. ::: {#comment-480523}
    ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/82cf5c1905775bfbeb2ecb1e8c656969.png){.avatar
    .avatar-48 .photo width="48" height="48"
    srcset="https://secure.gravatar.com/avatar/82cf5c1905775bfbeb2ecb1e8c656969?s=96&d=mm&r=g 2x"}[Lee]{.comment-author-name}

    [October 2, 2018 at 6:27
    am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-480523){.comment-time-link}

    ::: {.comment-content}
    hi , have anyone of you here faced this problem?\
    the build of opencv hang/not responding when come to 98% progress.\
    any suggestion/comment?
    :::

    ::: {.comment-reply}
    [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-480523){.comment-reply-link}
    :::

    -   ::: {#comment-481233}
        ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/02743529311d3b8babbaf6935670ec9c(1).jpeg){.avatar
        .avatar-48 .photo width="48" height="48"
        srcset="https://secure.gravatar.com/avatar/02743529311d3b8babbaf6935670ec9c?s=96&d=mm&r=g 2x"}[Adrian
        Rosebrock]{.comment-author-name}

        [October 8, 2018 at 10:35
        am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-481233){.comment-time-link}

        ::: {.comment-content}
        Did you increase your swap size as recommended? If so, try:

        1\. Deleting your "build" directory\
        2. Re-creating your "build" directory\
        3. Re-run "cmake"\
        4. Start the compile but this time only compile with a single
        core via "make -j1"

        It sounds like your Pi is running into a threading/race
        condition which is causing the problem.
        :::

        ::: {.comment-reply}
        [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-481233){.comment-reply-link}
        :::
        :::

    -   ::: {#comment-484293}
        ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/091d0f8010544d7b11dcfde98f38849d.png){.avatar
        .avatar-48 .photo width="48" height="48"
        srcset="https://secure.gravatar.com/avatar/091d0f8010544d7b11dcfde98f38849d?s=96&d=mm&r=g 2x"}[Chris
        Pinkenburg]{.comment-author-name}

        [October 28, 2018 at 2:11
        pm](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-484293){.comment-time-link}

        ::: {.comment-content}
        Hi Lee,\
        at the end of the compilation using -j4 you run two linking
        processes -- each taking 80% of the available memory and the
        raspberry pi swaps itself to death achieving nothing (run "top"
        in a terminal window, hit M to sort by memory and you'll see two
        large compilation processes which do not get any significant
        cpu).\
        What worked for me is to ctrl-c the ongoing build and then run
        make without -j4. There is enough memory for running one
        process. You do not need to run a make clean, make will pick up
        where you left it. This way you still get the benefit of running
        -j4 which is a lot faster
        :::

        ::: {.comment-reply}
        [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-484293){.comment-reply-link}
        :::
        :::
    :::

13. ::: {#comment-480551}
    ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/2252592efc14e9e79f1998229a58bf18.jpeg){.avatar
    .avatar-48 .photo width="48" height="48"
    srcset="https://secure.gravatar.com/avatar/2252592efc14e9e79f1998229a58bf18?s=96&d=mm&r=g 2x"}[Andrew
    Baker]{.comment-author-name}

    [October 2, 2018 at 6:49
    pm](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-480551){.comment-time-link}

    ::: {.comment-content}
    I was able to successfully install OpenCV 4.4.0-alpha. However I had
    some initial issues.\
    1. The first attempt failed, RPI locked up. I had the swap space at
    1024MB and used the make -j4 command. While running the RPI was very
    hot (80 -- 85C).

    2\. I deleted my build folder and tried again. This time I was met
    with the error:\
    cmake fails to determine the bitness of the target platform.

    Solution:.\
    1. Within an old post I found a slightly different cmake command.
    This was the modified command I used:\
    cmake -D CMAKE\_BUILD\_TYPE=RELEASE \\\
    -D CMAKE\_INSTALL\_PREFIX=/usr/local \\\
    -D
    OPENCV\_EXTRA\_MODULES\_PATH=\~/opencv\_contrib-4.0.0-alpha/modules
    \\\
    -D ENABLE\_NEON=ON \\\
    -D ENABLE\_VFPV3=ON \\\
    -D BUILD\_TESTS=OFF \\\
    -D INSTALL\_PYTHON\_EXAMPLES=OFF\
    -D CMAKE\_SIZEOF\_VOID\_P=4 \\\
    -D BUILD\_opencv\_python3=TRUE \\\
    -D PYTHON3\_LIBRARY=/usr/lib/arm-linux-gnueabihf/libpython3.5m.so
    \\\
    -D BUILD\_EXAMPLES=OFF ..

    2\. I executed this with only cmake. I didn't use -j4.

    3\. It took approximately 4 hours, but the build complied and
    installed successfully.
    :::

    ::: {.comment-reply}
    [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-480551){.comment-reply-link}
    :::

    -   ::: {#comment-481224}
        ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/02743529311d3b8babbaf6935670ec9c(1).jpeg){.avatar
        .avatar-48 .photo width="48" height="48"
        srcset="https://secure.gravatar.com/avatar/02743529311d3b8babbaf6935670ec9c?s=96&d=mm&r=g 2x"}[Adrian
        Rosebrock]{.comment-author-name}

        [October 8, 2018 at 10:31
        am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-481224){.comment-time-link}

        ::: {.comment-content}
        Thanks for sharing Andrew! And congrats on getting OpenCV 4
        installed on your Pi.
        :::

        ::: {.comment-reply}
        [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-481224){.comment-reply-link}
        :::
        :::
    :::

14. ::: {#comment-480592}
    ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/f78b8ed62379f7432593b3fcf1c1ce83.png){.avatar
    .avatar-48 .photo width="48" height="48"
    srcset="https://secure.gravatar.com/avatar/f78b8ed62379f7432593b3fcf1c1ce83?s=96&d=mm&r=g 2x"}[[Gaurav
    Shirke](http://gmail/){.comment-author-link}]{.comment-author-name}

    [October 3, 2018 at 1:27
    am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-480592){.comment-time-link}

    ::: {.comment-content}
    \[ 95%\] Building CXX object
    modules/python2/CMakeFiles/opencv\_python2.dir/\_\_/src2/cv2.cpp.o

    stucked at 95%\
    tried with make -j4 which stuck at same line but with 98%\
    with makt -j1 at 95%\
    and with make at 95%
    :::

    ::: {.comment-reply}
    [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-480592){.comment-reply-link}
    :::

    -   ::: {#comment-480609}
        ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/f78b8ed62379f7432593b3fcf1c1ce83.png){.avatar
        .avatar-48 .photo width="48" height="48"
        srcset="https://secure.gravatar.com/avatar/f78b8ed62379f7432593b3fcf1c1ce83?s=96&d=mm&r=g 2x"}[Gaurav
        Shirke]{.comment-author-name}

        [October 3, 2018 at 4:31
        am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-480609){.comment-time-link}

        ::: {.comment-content}
        problem solved
        :::

        ::: {.comment-reply}
        [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-480609){.comment-reply-link}
        :::

        -   ::: {#comment-481150}
            ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/02743529311d3b8babbaf6935670ec9c(1).jpeg){.avatar
            .avatar-48 .photo width="48" height="48"
            srcset="https://secure.gravatar.com/avatar/02743529311d3b8babbaf6935670ec9c?s=96&d=mm&r=g 2x"}[Adrian
            Rosebrock]{.comment-author-name}

            [October 8, 2018 at 9:15
            am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-481150){.comment-time-link}

            ::: {.comment-content}
            Congrats on resolving the issue, Gaurav!
            :::

            ::: {.comment-reply}
            [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-481150){.comment-reply-link}
            :::
            :::

        -   ::: {#comment-484124}
            ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/dfac52ac8740892b1f56a2e2576274c3.jpeg){.avatar
            .avatar-48 .photo width="48" height="48"
            srcset="https://secure.gravatar.com/avatar/dfac52ac8740892b1f56a2e2576274c3?s=96&d=mm&r=g 2x"}[devashish]{.comment-author-name}

            [October 27, 2018 at 10:14
            am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-484124){.comment-time-link}

            ::: {.comment-content}
            same here . How did you do it?
            :::

            ::: {.comment-reply}
            [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-484124){.comment-reply-link}
            :::
            :::
        :::

    -   ::: {#comment-481216}
        ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/02743529311d3b8babbaf6935670ec9c(1).jpeg){.avatar
        .avatar-48 .photo width="48" height="48"
        srcset="https://secure.gravatar.com/avatar/02743529311d3b8babbaf6935670ec9c?s=96&d=mm&r=g 2x"}[Adrian
        Rosebrock]{.comment-author-name}

        [October 8, 2018 at 10:28
        am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-481216){.comment-time-link}

        ::: {.comment-content}
        Did you increase your swap size like I recommended in the
        tutorial? Make sure you do so. Alternatively, you can [pip
        install
        opencv.](https://www.pyimagesearch.com/2018/09/19/pip-install-opencv/)
        :::

        ::: {.comment-reply}
        [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-481216){.comment-reply-link}
        :::
        :::

    -   ::: {#comment-498979}
        ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/f26c6c3e7b7fe3bfbfce4492165ce234.png){.avatar
        .avatar-48 .photo width="48" height="48"
        srcset="https://secure.gravatar.com/avatar/f26c6c3e7b7fe3bfbfce4492165ce234?s=96&d=mm&r=g 2x"}[Maciej
        Bartoszek]{.comment-author-name}

        [February 1, 2019 at 10:06
        am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-498979){.comment-time-link}

        ::: {.comment-content}
        hello Gaurav,\
        got same problem here.\
        How did you solve it?
        :::

        ::: {.comment-reply}
        [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-498979){.comment-reply-link}
        :::

        -   ::: {#comment-499759}
            ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/02743529311d3b8babbaf6935670ec9c(1).jpeg){.avatar
            .avatar-48 .photo width="48" height="48"
            srcset="https://secure.gravatar.com/avatar/02743529311d3b8babbaf6935670ec9c?s=96&d=mm&r=g 2x"}[Adrian
            Rosebrock]{.comment-author-name}

            [February 5, 2019 at 9:46
            am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-499759){.comment-time-link}

            ::: {.comment-content}
            Increase your swap size to 2048MB. Then compile with just
            "make" instead of "make -j4"
            :::

            ::: {.comment-reply}
            [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-499759){.comment-reply-link}
            :::

            -   ::: {#comment-511599}
                ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/329ce8019f53ee32ffe9583fbbd58313.png){.avatar
                .avatar-48 .photo width="48" height="48"
                srcset="https://secure.gravatar.com/avatar/329ce8019f53ee32ffe9583fbbd58313?s=96&d=mm&r=g 2x"}[Sai]{.comment-author-name}

                [April 6, 2019 at 10:15
                pm](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-511599){.comment-time-link}

                ::: {.comment-content}
                Hi Adrian,

                I followed all your steps until make -j4. It was stuck
                at 99% for a long time. Restarted make and now currently
                keeps stopping at 98% how many ever times I try. I have
                already increased the swap size to 2048MB. Please let me
                know if there is any other step i am missing.
                :::

                ::: {.comment-reply}
                [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-511599){.comment-reply-link}
                :::

                -   ::: {#comment-512546}
                    ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/02743529311d3b8babbaf6935670ec9c(1).jpeg){.avatar
                    .avatar-48 .photo width="48" height="48"
                    srcset="https://secure.gravatar.com/avatar/02743529311d3b8babbaf6935670ec9c?s=96&d=mm&r=g 2x"}[Adrian
                    Rosebrock]{.comment-author-name}

                    [April 12, 2019 at 12:51
                    pm](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-512546){.comment-time-link}

                    ::: {.comment-content}
                    Try using only a single core for the compile via
                    just "make" (no "-j4").
                    :::
                    :::
                :::
            :::
        :::
    :::

15. ::: {#comment-480608}
    ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/f78b8ed62379f7432593b3fcf1c1ce83.png){.avatar
    .avatar-48 .photo width="48" height="48"
    srcset="https://secure.gravatar.com/avatar/f78b8ed62379f7432593b3fcf1c1ce83?s=96&d=mm&r=g 2x"}[Gaurav
    Shirke]{.comment-author-name}

    [October 3, 2018 at 4:30
    am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-480608){.comment-time-link}

    ::: {.comment-content}
    eveything is okay but then this error occured\
    ln: failed to create symbolic link 'cv2.so': File exists

    Followed all steps open cv2.so file is not there in
    "/usr/local/lib/python3.5/site-packages/"

    another file is present their which is named as
    "cv2.cpython-35m-arm-linux-gnueabihf.so"
    :::

    ::: {.comment-reply}
    [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-480608){.comment-reply-link}
    :::
    :::

16. ::: {#comment-480613}
    ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/d87b9d56d46a99c65a92920de234635b.png){.avatar
    .avatar-48 .photo width="48" height="48"
    srcset="https://secure.gravatar.com/avatar/d87b9d56d46a99c65a92920de234635b?s=96&d=mm&r=g 2x"}[Arul]{.comment-author-name}

    [October 3, 2018 at 7:36
    am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-480613){.comment-time-link}

    ::: {.comment-content}
    Step \# 6 references incorrect lib? I see only ARM version, not x86.
    I had to do this instead.

    ln -s
    /usr/local/lib/python3.5/site-packages/cv2.cpython-35m-arm-linux-gnueabihf.so
    cv2.so
    :::

    ::: {.comment-reply}
    [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-480613){.comment-reply-link}
    :::

    -   ::: {#comment-481213}
        ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/02743529311d3b8babbaf6935670ec9c(1).jpeg){.avatar
        .avatar-48 .photo width="48" height="48"
        srcset="https://secure.gravatar.com/avatar/02743529311d3b8babbaf6935670ec9c?s=96&d=mm&r=g 2x"}[Adrian
        Rosebrock]{.comment-author-name}

        [October 8, 2018 at 10:25
        am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-481213){.comment-time-link}

        ::: {.comment-content}
        Hey Arul, I've updated the tutorial with the path most readers
        are getting. I suggest other readers use tab completion to
        derive the correct file name.
        :::

        ::: {.comment-reply}
        [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-481213){.comment-reply-link}
        :::
        :::
    :::

17. ::: {#comment-480783}
    ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/d0b7d561393930144313bd5d5545fbc5.png){.avatar
    .avatar-48 .photo width="48" height="48"
    srcset="https://secure.gravatar.com/avatar/d0b7d561393930144313bd5d5545fbc5?s=96&d=mm&r=g 2x"}[murksiuke]{.comment-author-name}

    [October 5, 2018 at 3:25
    am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-480783){.comment-time-link}

    ::: {.comment-content}
    hello, after the cmake the output shows the interpreter as
    python2.7, even though i followed the commands on the guide. not
    sure what to do
    :::

    ::: {.comment-reply}
    [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-480783){.comment-reply-link}
    :::

    -   ::: {#comment-481188}
        ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/02743529311d3b8babbaf6935670ec9c(1).jpeg){.avatar
        .avatar-48 .photo width="48" height="48"
        srcset="https://secure.gravatar.com/avatar/02743529311d3b8babbaf6935670ec9c?s=96&d=mm&r=g 2x"}[Adrian
        Rosebrock]{.comment-author-name}

        [October 8, 2018 at 9:52
        am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-481188){.comment-time-link}

        ::: {.comment-content}
        Are you referring to the interpreter used for the compile? If
        so, ignore it --- that's a bug in the "cmake" output. As long as
        your "Python 3" section looks like mine you can proceed.
        :::

        ::: {.comment-reply}
        [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-481188){.comment-reply-link}
        :::

        -   ::: {#comment-482015}
            ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/cb5fbd8340914153257b39edf3a71ce1.png){.avatar
            .avatar-48 .photo width="48" height="48"
            srcset="https://secure.gravatar.com/avatar/cb5fbd8340914153257b39edf3a71ce1?s=96&d=mm&r=g 2x"}[murksiuke]{.comment-author-name}

            [October 11, 2018 at 2:27
            pm](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-482015){.comment-time-link}

            ::: {.comment-content}
            Thank you for the reply, i redid the whole thing (actually
            got a larger sd because of space problems) and everything
            went fine. Thanks for the guide!
            :::

            ::: {.comment-reply}
            [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-482015){.comment-reply-link}
            :::

            -   ::: {#comment-482155}
                ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/02743529311d3b8babbaf6935670ec9c(1).jpeg){.avatar
                .avatar-48 .photo width="48" height="48"
                srcset="https://secure.gravatar.com/avatar/02743529311d3b8babbaf6935670ec9c?s=96&d=mm&r=g 2x"}[Adrian
                Rosebrock]{.comment-author-name}

                [October 12, 2018 at 8:56
                am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-482155){.comment-time-link}

                ::: {.comment-content}
                Fantastic, I'm glad it worked for you! 🙂
                :::

                ::: {.comment-reply}
                [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-482155){.comment-reply-link}
                :::
                :::
            :::
        :::
    :::

18. ::: {#comment-480792}
    ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/9a918cedafc8b1c5efb96c69cfc0edca.png){.avatar
    .avatar-48 .photo width="48" height="48"
    srcset="https://secure.gravatar.com/avatar/9a918cedafc8b1c5efb96c69cfc0edca?s=96&d=mm&r=g 2x"}[Ahmed
    Raza]{.comment-author-name}

    [October 5, 2018 at 5:04
    am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-480792){.comment-time-link}

    ::: {.comment-content}
    having an error while cmake

    Run CMake for OpenCV 4

    configuration in complete, errors occured!
    :::

    ::: {.comment-reply}
    [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-480792){.comment-reply-link}
    :::

    -   ::: {#comment-481185}
        ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/02743529311d3b8babbaf6935670ec9c(1).jpeg){.avatar
        .avatar-48 .photo width="48" height="48"
        srcset="https://secure.gravatar.com/avatar/02743529311d3b8babbaf6935670ec9c?s=96&d=mm&r=g 2x"}[Adrian
        Rosebrock]{.comment-author-name}

        [October 8, 2018 at 9:51
        am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-481185){.comment-time-link}

        ::: {.comment-content}
        Take a look at your output of "cmake". It will tell you what the
        error is.
        :::

        ::: {.comment-reply}
        [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-481185){.comment-reply-link}
        :::
        :::
    :::

19. ::: {#comment-480826}
    ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/c7ccce114187ff71c5a31076f980faa0.png){.avatar
    .avatar-48 .photo width="48" height="48"
    srcset="https://secure.gravatar.com/avatar/c7ccce114187ff71c5a31076f980faa0?s=96&d=mm&r=g 2x"}[Francisco]{.comment-author-name}

    [October 5, 2018 at 8:07
    pm](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-480826){.comment-time-link}

    ::: {.comment-content}
    Hi, thanks for the detailed tutorial.

    I faced an issue when creating the link in step \#6, the output .so
    file had a different name "cv2.cpython-35m-arm-linux-gnueabihf.so"
    instead of "cv2.cpython-35m-x86\_64-linux-gnu.so", so I had to
    rename it (this was already pointed out in your previous tutorial
    for installing OpenCV 3).
    :::

    ::: {.comment-reply}
    [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-480826){.comment-reply-link}
    :::

    -   ::: {#comment-481180}
        ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/02743529311d3b8babbaf6935670ec9c(1).jpeg){.avatar
        .avatar-48 .photo width="48" height="48"
        srcset="https://secure.gravatar.com/avatar/02743529311d3b8babbaf6935670ec9c?s=96&d=mm&r=g 2x"}[Adrian
        Rosebrock]{.comment-author-name}

        [October 8, 2018 at 9:48
        am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-481180){.comment-time-link}

        ::: {.comment-content}
        Thanks Francisco. I've updated the post but I would encourage
        readers to use tab completion to correctly determine their
        output filename.
        :::

        ::: {.comment-reply}
        [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-481180){.comment-reply-link}
        :::
        :::
    :::

20. ::: {#comment-481151}
    ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/02743529311d3b8babbaf6935670ec9c(1).jpeg){.avatar
    .avatar-48 .photo width="48" height="48"
    srcset="https://secure.gravatar.com/avatar/02743529311d3b8babbaf6935670ec9c?s=96&d=mm&r=g 2x"}[Adrian
    Rosebrock]{.comment-author-name}

    [October 8, 2018 at 9:16
    am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-481151){.comment-time-link}

    ::: {.comment-content}
    Thanks for sharing, Victor. I've updated the blog post. I also
    recommend readers perform tab completion so correctly determine the
    filename.
    :::

    ::: {.comment-reply}
    [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-481151){.comment-reply-link}
    :::
    :::

21. ::: {#comment-481370}
    ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/d0e0ca16d0dd0a266ecc508b784c14b4.png){.avatar
    .avatar-48 .photo width="48" height="48"
    srcset="https://secure.gravatar.com/avatar/d0e0ca16d0dd0a266ecc508b784c14b4?s=96&d=mm&r=g 2x"}[Charlie]{.comment-author-name}

    [October 8, 2018 at 1:24
    pm](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-481370){.comment-time-link}

    ::: {.comment-content}
    Hi Dr. Adrian. As a beginner, I wonder if it's possible to have both
    versions of OpenCV (3.x and 4.x) installed on a Pi. Can I use a
    virtual environment (VE) for each version? If so, how can I do that?
    Is it covered in any blog post? Besides, how can I update an
    Environment with a more recently Python version when one becomes
    available? Can I do the same with a new OpenCV release in a VE?
    Thank you.
    :::

    ::: {.comment-reply}
    [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-481370){.comment-reply-link}
    :::

    -   ::: {#comment-481382}
        ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/02743529311d3b8babbaf6935670ec9c(1).jpeg){.avatar
        .avatar-48 .photo width="48" height="48"
        srcset="https://secure.gravatar.com/avatar/02743529311d3b8babbaf6935670ec9c?s=96&d=mm&r=g 2x"}[Adrian
        Rosebrock]{.comment-author-name}

        [October 8, 2018 at 1:40
        pm](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-481382){.comment-time-link}

        ::: {.comment-content}
        Yes, you can have multiple OpenCV versions on your system. I
        like to:

        1\. Create a new Python virtual environment for each version of
        OpenCV\
        2. Compile OpenCV but only sym-link in the OpenCV bindings from
        the "build/lib" directory (I keep a "build" directory for each
        version of OpenCV I compile)
        :::

        ::: {.comment-reply}
        [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-481382){.comment-reply-link}
        :::
        :::
    :::

22. ::: {#comment-481621}
    ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/2264cd393705574a83d758334203c873.png){.avatar
    .avatar-48 .photo width="48" height="48"
    srcset="https://secure.gravatar.com/avatar/2264cd393705574a83d758334203c873?s=96&d=mm&r=g 2x"}[Steven]{.comment-author-name}

    [October 9, 2018 at 7:31
    pm](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-481621){.comment-time-link}

    ::: {.comment-content}
    Adrian

    Thank you for the post really appreciate it. I built OpenCV 4.0 on
    new Pi3 Model B+ booting off mSATA drive with you can do with the
    new Model B+. I was monitoring the build with -J4 switch with free
    -h and the process actually used up the swap file and stalled in
    latter stages of the build, (99% stage). Increased the swap size and
    was able to make it through that late build stage and complete. Its
    possible that some of the others reading the comments hit the same
    situation. Quick question why does your version show 4.0 and mine
    show 4.0 alpha on the check version?

    import cv2\
    \>\>\> cv2.\_\_version\_\_\
    '4.0.0-alpha'\
    \>\>\> exit()
    :::

    ::: {.comment-reply}
    [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-481621){.comment-reply-link}
    :::

    -   ::: {#comment-482193}
        ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/02743529311d3b8babbaf6935670ec9c(1).jpeg){.avatar
        .avatar-48 .photo width="48" height="48"
        srcset="https://secure.gravatar.com/avatar/02743529311d3b8babbaf6935670ec9c?s=96&d=mm&r=g 2x"}[Adrian
        Rosebrock]{.comment-author-name}

        [October 12, 2018 at 9:22
        am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-482193){.comment-time-link}

        ::: {.comment-content}
        Hey Steven, thanks for the tip on increasing swap size further.
        Compiling only only a single core just should resolve the issue
        as well.

        Regarding your question, it looks like you compiled OpenCV using
        the official alpha version of the library. When I compiled
        OpenCV it was with the pre-release which did not have the
        "alpha" tag, hence the discrepancy.
        :::

        ::: {.comment-reply}
        [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-482193){.comment-reply-link}
        :::

        -   ::: {#comment-482935}
            ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/e8d1261c0405a861e5bb5916b11a53e8.png){.avatar
            .avatar-48 .photo width="48" height="48"
            srcset="https://secure.gravatar.com/avatar/e8d1261c0405a861e5bb5916b11a53e8?s=96&d=mm&r=g 2x"}[Denis
            Brion]{.comment-author-name}

            [October 17, 2018 at 7:03
            am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-482935){.comment-time-link}

            ::: {.comment-content}
            AFAIK :\
            a) "only" last stage needs swaps, if one uses a single core
            (else, one has to add memory consumptions of each process +
            some RAM to have parallel processes to communicate)\
            b) last stage is a single process build (makes a huge \*.so
            with a lot of libraries, ready to be called by python): it
            needs less than 1G swap (total less than 2G RAM+ virtual RAM
            : if RPi had 2 G RAM, ... no swap would be needed.

            Is it possible to ... cross compile for RPi (I sometimes use
            nanoPi -debian stable- to make binaries for RPi -debian
            unstable-: \*.so are compatible (the other way, it would
            not), though certain optimisations cannot be caught. Cross
            compiling goes further : one uses an x86 PC -some have tons
            of RAM, lets us say 4 G- to make \*.so -and executables;
            they are sent to a RPi (arduino cross compiles for ... avrs,
            say) : hertaville used it for \<=512 M RPis
            <http://www.hertaville.com/development-environment-raspberry-pi-cross-compiler.html>\
            It might be difficult to install on the first time, but much
            faster (and one often needs a PC ... to put on a SD disk the
            Rapsbian image : at least, once...). (processes using swap
            have unpredictable delays : depends on the nature and state
            of the swap partition/file ; a process can be seen as hanged
            and continue at a very slow pace.... leading people to kill
            it : cross compiling is likely, once setup -this is a
            difficult task- to avoid all of these troubles)
            :::

            ::: {.comment-reply}
            [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-482935){.comment-reply-link}
            :::

            -   ::: {#comment-483319}
                ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/02743529311d3b8babbaf6935670ec9c(1).jpeg){.avatar
                .avatar-48 .photo width="48" height="48"
                srcset="https://secure.gravatar.com/avatar/02743529311d3b8babbaf6935670ec9c?s=96&d=mm&r=g 2x"}[Adrian
                Rosebrock]{.comment-author-name}

                [October 20, 2018 at 7:56
                am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-483319){.comment-time-link}

                ::: {.comment-content}
                Cross-compiling OpenCV for the Pi has been a royal pain
                in my ass. It's not a nut I've been able to crack yet,
                unfortunately 🙁
                :::

                ::: {.comment-reply}
                [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-483319){.comment-reply-link}
                :::
                :::
            :::
        :::
    :::

23. ::: {#comment-482014}
    ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/cb5fbd8340914153257b39edf3a71ce1.png){.avatar
    .avatar-48 .photo width="48" height="48"
    srcset="https://secure.gravatar.com/avatar/cb5fbd8340914153257b39edf3a71ce1?s=96&d=mm&r=g 2x"}[m]{.comment-author-name}

    [October 11, 2018 at 2:24
    pm](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-482014){.comment-time-link}

    ::: {.comment-content}
    Hello! Is there a reason for installing inside the "cv" environment?
    I have seen guides that skip that step, and in the end you can call
    "import cv2" without a "workon cv" command beforehand.
    :::

    ::: {.comment-reply}
    [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-482014){.comment-reply-link}
    :::

    -   ::: {#comment-482156}
        ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/02743529311d3b8babbaf6935670ec9c(1).jpeg){.avatar
        .avatar-48 .photo width="48" height="48"
        srcset="https://secure.gravatar.com/avatar/02743529311d3b8babbaf6935670ec9c?s=96&d=mm&r=g 2x"}[Adrian
        Rosebrock]{.comment-author-name}

        [October 12, 2018 at 8:56
        am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-482156){.comment-time-link}

        ::: {.comment-content}
        Using Python virtual environments is a best practice in Python
        development. They are certainly optional but heavily
        recommended. If you're new to Python virtual environments or how
        they work be sure to [read this
        post.](https://realpython.com/blog/python/python-virtual-environments-a-primer/)
        :::

        ::: {.comment-reply}
        [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-482156){.comment-reply-link}
        :::

        -   ::: {#comment-551672}
            ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/2ded40c6636eab5d81fd1f5674f15507.jpeg){.avatar
            .avatar-48 .photo width="48" height="48"
            srcset="https://secure.gravatar.com/avatar/2ded40c6636eab5d81fd1f5674f15507?s=96&d=mm&r=g 2x"}[kr]{.comment-author-name}

            [September 15, 2019 at 11:57
            pm](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-551672){.comment-time-link}

            ::: {.comment-content}
            Hi, thanks for all the tutorials!

            I understand the reasons for a virtual env when working in
            python, but how does it impact this build? Does building in
            this venv mean it might not work in another? What if I plan
            to write C++ application with OpenCV and won't use Python,
            should I build outside the venv? I saw another blog say
            don't use a venv if you want to "make opencv installation
            public, to be accessible across all virtual environments."

            My best guess is that the build process needs a specific
            python install, and doing it in a venv assures that. But
            beyond that, it should have no effect on the OpenCV built
            output. Does that sound right?

            One more question: if I ran cmake in the venv, but then
            rebooted and forgot to \`workon cv\` before running make
            -j4, will that cause problems? Cause I just did that. Ops!

            Thanks!\
            Karl
            :::

            ::: {.comment-reply}
            [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-551672){.comment-reply-link}
            :::

            -   ::: {#comment-552808}
                ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/02743529311d3b8babbaf6935670ec9c(1).jpeg){.avatar
                .avatar-48 .photo width="48" height="48"
                srcset="https://secure.gravatar.com/avatar/02743529311d3b8babbaf6935670ec9c?s=96&d=mm&r=g 2x"}[Adrian
                Rosebrock]{.comment-author-name}

                [September 19, 2019 at 10:06
                am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-552808){.comment-time-link}

                ::: {.comment-content}
                If you want to use C++ that's fine --- this tutorial
                will give you the C++ headers installed. To answer your
                other question, provided you were *in* the "cv" virtual
                environment when running "cmake" it does not matter if
                you are in the "cv" environment when running "make". The
                "cmake" command builds the configuration while "make"
                does the actual compile. As long as "cmake" has been run
                in the "cv" environment you'll be fine.
                :::

                ::: {.comment-reply}
                [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-552808){.comment-reply-link}
                :::
                :::
            :::
        :::
    :::

24. ::: {#comment-482754}
    ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/bc76a40b04b037ab893d547ad40efd62.png){.avatar
    .avatar-48 .photo width="48" height="48"
    srcset="https://secure.gravatar.com/avatar/bc76a40b04b037ab893d547ad40efd62?s=96&d=mm&r=g 2x"}[Phil
    Desrosiers]{.comment-author-name}

    [October 16, 2018 at 1:25
    am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-482754){.comment-time-link}

    ::: {.comment-content}
    I'm getting "zsh: no matches found: libcanberra-gtk\*" when I try to
    apt-get libcanberra-gtk\* .

    As far as I know, my sources are up to date. Do I need to add
    another apt source somewhere?
    :::

    ::: {.comment-reply}
    [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-482754){.comment-reply-link}
    :::
    :::

25. ::: {#comment-482897}
    ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/bc76a40b04b037ab893d547ad40efd62.png){.avatar
    .avatar-48 .photo width="48" height="48"
    srcset="https://secure.gravatar.com/avatar/bc76a40b04b037ab893d547ad40efd62?s=96&d=mm&r=g 2x"}[Phil
    Desrosiers]{.comment-author-name}

    [October 16, 2018 at 10:02
    pm](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-482897){.comment-time-link}

    ::: {.comment-content}
    I'm getting an error while attempting to make. Do I need an EVEN
    LARGER swap file?:

    virtual memory exhausted: Cannot allocate memory
    :::

    ::: {.comment-reply}
    [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-482897){.comment-reply-link}
    :::

    -   ::: {#comment-483324}
        ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/02743529311d3b8babbaf6935670ec9c(1).jpeg){.avatar
        .avatar-48 .photo width="48" height="48"
        srcset="https://secure.gravatar.com/avatar/02743529311d3b8babbaf6935670ec9c?s=96&d=mm&r=g 2x"}[Adrian
        Rosebrock]{.comment-author-name}

        [October 20, 2018 at 8:00
        am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-483324){.comment-time-link}

        ::: {.comment-content}
        Unfortunately it seems like you may need a larger swap file.
        :::

        ::: {.comment-reply}
        [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-483324){.comment-reply-link}
        :::
        :::
    :::

26. ::: {#comment-483222}
    ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/cef025ab1d076d58364d60912dead8f0.png){.avatar
    .avatar-48 .photo width="48" height="48"
    srcset="https://secure.gravatar.com/avatar/cef025ab1d076d58364d60912dead8f0?s=96&d=mm&r=g 2x"}[Ahmed
    Raza]{.comment-author-name}

    [October 19, 2018 at 10:40
    am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-483222){.comment-time-link}

    ::: {.comment-content}
    Dear Adrian\
    kindly resolve my issue i am having an error "ImportError: No module
    named 'picamera' "\
    while running a python file.
    :::

    ::: {.comment-reply}
    [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-483222){.comment-reply-link}
    :::

    -   ::: {#comment-483294}
        ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/02743529311d3b8babbaf6935670ec9c(1).jpeg){.avatar
        .avatar-48 .photo width="48" height="48"
        srcset="https://secure.gravatar.com/avatar/02743529311d3b8babbaf6935670ec9c?s=96&d=mm&r=g 2x"}[Adrian
        Rosebrock]{.comment-author-name}

        [October 20, 2018 at 7:29
        am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-483294){.comment-time-link}

        ::: {.comment-content}
        You need to install the picamera Python library:

        `$ pip install "picamera[array]"`
        :::

        ::: {.comment-reply}
        [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-483294){.comment-reply-link}
        :::
        :::
    :::

27. ::: {#comment-483418}
    ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/88f6185ce451300dce48c2b17fdda698.png){.avatar
    .avatar-48 .photo width="48" height="48"
    srcset="https://secure.gravatar.com/avatar/88f6185ce451300dce48c2b17fdda698?s=96&d=mm&r=g 2x"}[Rion
    Ahl]{.comment-author-name}

    [October 21, 2018 at 4:31
    am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-483418){.comment-time-link}

    ::: {.comment-content}
    Adrian, I have a problem, with the import cv2 as described in FAQ,
    but as I am a beginner, I dont really understand what to do? Could
    you please help?
    :::

    ::: {.comment-reply}
    [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-483418){.comment-reply-link}
    :::

    -   ::: {#comment-483557}
        ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/02743529311d3b8babbaf6935670ec9c(1).jpeg){.avatar
        .avatar-48 .photo width="48" height="48"
        srcset="https://secure.gravatar.com/avatar/02743529311d3b8babbaf6935670ec9c?s=96&d=mm&r=g 2x"}[Adrian
        Rosebrock]{.comment-author-name}

        [October 22, 2018 at 8:05
        am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-483557){.comment-time-link}

        ::: {.comment-content}
        Hey Rion, unfortunately without physical access to your Pi it is
        hard to determine where you would have made a mistake. It's okay
        if you are a beginner, but you need to take the time to educate
        yourself on how the command line argument works, including file
        paths. Again, it's impossible for me to guess what step may have
        tripped you up without more information so I suggest you take it
        slow and work through the FAQ.
        :::

        ::: {.comment-reply}
        [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-483557){.comment-reply-link}
        :::
        :::
    :::

28. ::: {#comment-483523}
    ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/acafecf35fc61897dd695fdfdce32260.png){.avatar
    .avatar-48 .photo width="48" height="48"
    srcset="https://secure.gravatar.com/avatar/acafecf35fc61897dd695fdfdce32260?s=96&d=mm&r=g 2x"}[wenkang]{.comment-author-name}

    [October 22, 2018 at 5:31
    am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-483523){.comment-time-link}

    ::: {.comment-content}
    Hi Adrian,

    Can the OpenCV 3 and 4 coexist in Raspberry pi ? Or do I have to
    remove one if want to install the other?

    And if not, how to configure and specify the one that I want when
    running one python script ?

    Thanks.
    :::

    ::: {.comment-reply}
    [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-483523){.comment-reply-link}
    :::

    -   ::: {#comment-483540}
        ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/02743529311d3b8babbaf6935670ec9c(1).jpeg){.avatar
        .avatar-48 .photo width="48" height="48"
        srcset="https://secure.gravatar.com/avatar/02743529311d3b8babbaf6935670ec9c?s=96&d=mm&r=g 2x"}[Adrian
        Rosebrock]{.comment-author-name}

        [October 22, 2018 at 7:47
        am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-483540){.comment-time-link}

        ::: {.comment-content}
        Both can coexist on the same machine, just create a separate
        Python virtual environment for your OpenCV 4 install. Other than
        that, no other changes are required.
        :::

        ::: {.comment-reply}
        [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-483540){.comment-reply-link}
        :::
        :::
    :::

29. ::: {#comment-483863}
    ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/e6c354e69ded8864fce1768a52f0b988.jpeg){.avatar
    .avatar-48 .photo width="48" height="48"
    srcset="https://secure.gravatar.com/avatar/e6c354e69ded8864fce1768a52f0b988?s=96&d=mm&r=g 2x"}[Jim]{.comment-author-name}

    [October 24, 2018 at 7:26
    pm](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-483863){.comment-time-link}

    ::: {.comment-content}
    Hey Adrian, I made it most of the way through this tutorial...while
    compiling opencv, my Pi stops at \[ 98% \] Built target
    opencv\_perf\_tracking. I expanded the swapfile size to
    1024...there's no error message, just no more progress. Should I
    close the terminal and start from the compiling step again? Should I
    make the swapfile bigger?
    :::

    ::: {.comment-reply}
    [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-483863){.comment-reply-link}
    :::
    :::

30. ::: {#comment-483880}
    ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/00359c61f763d09ddbbdd003c5fb5008.png){.avatar
    .avatar-48 .photo width="48" height="48"
    srcset="https://secure.gravatar.com/avatar/00359c61f763d09ddbbdd003c5fb5008?s=96&d=mm&r=g 2x"}[elroy]{.comment-author-name}

    [October 24, 2018 at 10:53
    pm](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-483880){.comment-time-link}

    ::: {.comment-content}
    Did you ever find out who stole your beer?
    :::

    ::: {.comment-reply}
    [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-483880){.comment-reply-link}
    :::
    :::

31. ::: {#comment-483944}
    ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/e6c354e69ded8864fce1768a52f0b988.jpeg){.avatar
    .avatar-48 .photo width="48" height="48"
    srcset="https://secure.gravatar.com/avatar/e6c354e69ded8864fce1768a52f0b988?s=96&d=mm&r=g 2x"}[jim421616]{.comment-author-name}

    [October 25, 2018 at 6:59
    pm](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-483944){.comment-time-link}

    ::: {.comment-content}
    Hi, Adrian, I posted a comment yesterday about my Pi not responding
    during the compile. I left it running overnight and when I came back
    to it, it had run out of memory. I increased the swapfile size to
    2048 Mb, ran the compile again, and it works now. Thanks for your
    outstanding tutorials!
    :::

    ::: {.comment-reply}
    [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-483944){.comment-reply-link}
    :::

    -   ::: {#comment-484476}
        ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/02743529311d3b8babbaf6935670ec9c(1).jpeg){.avatar
        .avatar-48 .photo width="48" height="48"
        srcset="https://secure.gravatar.com/avatar/02743529311d3b8babbaf6935670ec9c?s=96&d=mm&r=g 2x"}[Adrian
        Rosebrock]{.comment-author-name}

        [October 29, 2018 at 1:48
        pm](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-484476){.comment-time-link}

        ::: {.comment-content}
        Awesome, congratulations on getting OpenCV installed on your Pi!
        :::

        ::: {.comment-reply}
        [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-484476){.comment-reply-link}
        :::
        :::
    :::

32. ::: {#comment-484060}
    ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/dfac52ac8740892b1f56a2e2576274c3.jpeg){.avatar
    .avatar-48 .photo width="48" height="48"
    srcset="https://secure.gravatar.com/avatar/dfac52ac8740892b1f56a2e2576274c3?s=96&d=mm&r=g 2x"}[devashish]{.comment-author-name}

    [October 26, 2018 at 8:36
    pm](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-484060){.comment-time-link}

    ::: {.comment-content}
    Hi adrian . i have been trying to install opencv from past 4 days. I
    have gone through all versions from 3.3.0 to the 4.0 . Currently in
    this tutorial the cmake compiled till 98% but has been like this
    since 1.5 hrs . This opencv thing has made be furious . Please
    suggest something x(.
    :::

    ::: {.comment-reply}
    [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-484060){.comment-reply-link}
    :::

    -   ::: {#comment-484463}
        ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/02743529311d3b8babbaf6935670ec9c(1).jpeg){.avatar
        .avatar-48 .photo width="48" height="48"
        srcset="https://secure.gravatar.com/avatar/02743529311d3b8babbaf6935670ec9c?s=96&d=mm&r=g 2x"}[Adrian
        Rosebrock]{.comment-author-name}

        [October 29, 2018 at 1:38
        pm](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-484463){.comment-time-link}

        ::: {.comment-content}
        Have you tried (1) increasing your swap size and (2) compiling
        using just a single core? What about doing a [pip install of
        opencv](https://www.pyimagesearch.com/2018/09/19/pip-install-opencv/)?
        :::

        ::: {.comment-reply}
        [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-484463){.comment-reply-link}
        :::
        :::
    :::

33. ::: {#comment-484140}
    ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/b5838653d33ee1030db0901251c5b8a0.png){.avatar
    .avatar-48 .photo width="48" height="48"
    srcset="https://secure.gravatar.com/avatar/b5838653d33ee1030db0901251c5b8a0?s=96&d=mm&r=g 2x"}[Emilio
    Meza]{.comment-author-name}

    [October 27, 2018 at 1:26
    pm](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-484140){.comment-time-link}

    ::: {.comment-content}
    Hi Adrian! I followed the steps and everything worked well on the
    virtual environment but, what if i want to use opencv 4 on python
    3(IDLE)? there's an easy way to do it without starting again with a
    different process?
    :::

    ::: {.comment-reply}
    [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-484140){.comment-reply-link}
    :::

    -   ::: {#comment-484457}
        ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/02743529311d3b8babbaf6935670ec9c(1).jpeg){.avatar
        .avatar-48 .photo width="48" height="48"
        srcset="https://secure.gravatar.com/avatar/02743529311d3b8babbaf6935670ec9c?s=96&d=mm&r=g 2x"}[Adrian
        Rosebrock]{.comment-author-name}

        [October 29, 2018 at 1:32
        pm](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-484457){.comment-time-link}

        ::: {.comment-content}
        If you are using the *same* Python version for a different
        environment you can simply copy your cv2.so bindings into the
        new site-packages directory for the environment. Otherwise you
        will need to recompile OpenCV for that specific Python version
        number. You may also be able to [pip install
        opencv.](https://www.pyimagesearch.com/2018/09/19/pip-install-opencv/)
        :::

        ::: {.comment-reply}
        [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-484457){.comment-reply-link}
        :::
        :::
    :::

34. ::: {#comment-485147}
    ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/765ae0923575add5eb31b6bbeedda84b.png){.avatar
    .avatar-48 .photo width="48" height="48"
    srcset="https://secure.gravatar.com/avatar/765ae0923575add5eb31b6bbeedda84b?s=96&d=mm&r=g 2x"}[Aly
    Rofie]{.comment-author-name}

    [November 3, 2018 at 12:45
    am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-485147){.comment-time-link}

    ::: {.comment-content}
    Hi Adrian, Thanks for your tutorial. But i got some problem when i'm
    on step 5, i can't do "make" it says (cannot find makefile. stop),
    and also i can't move into opencv directory, can you tell how to fix
    this?

    thank you
    :::

    ::: {.comment-reply}
    [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-485147){.comment-reply-link}
    :::

    -   ::: {#comment-485789}
        ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/02743529311d3b8babbaf6935670ec9c(1).jpeg){.avatar
        .avatar-48 .photo width="48" height="48"
        srcset="https://secure.gravatar.com/avatar/02743529311d3b8babbaf6935670ec9c?s=96&d=mm&r=g 2x"}[Adrian
        Rosebrock]{.comment-author-name}

        [November 6, 2018 at 1:32
        pm](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-485789){.comment-time-link}

        ::: {.comment-content}
        Your "cmake" directory likely excited with an error. Go back to
        the "cmake" step and investigate the output to find the error.
        Once "cmake" executes without error then you can run "make".
        :::

        ::: {.comment-reply}
        [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-485789){.comment-reply-link}
        :::
        :::
    :::

35. ::: {#comment-485333}
    ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/14965b84810a2c5334ce01e711a0b69e.png){.avatar
    .avatar-48 .photo width="48" height="48"
    srcset="https://secure.gravatar.com/avatar/14965b84810a2c5334ce01e711a0b69e?s=96&d=mm&r=g 2x"}[[David
    Monk](http://www.bluebox.io/){.comment-author-link}]{.comment-author-name}

    [November 4, 2018 at 11:51
    am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-485333){.comment-time-link}

    ::: {.comment-content}
    I installed opencv-4.0.0-beta last night; I noticed the beta version
    was available so I downloaded the source and compiled it instead of
    the alpha. Seems to have compiled successfully.
    :::

    ::: {.comment-reply}
    [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-485333){.comment-reply-link}
    :::

    -   ::: {#comment-485780}
        ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/02743529311d3b8babbaf6935670ec9c(1).jpeg){.avatar
        .avatar-48 .photo width="48" height="48"
        srcset="https://secure.gravatar.com/avatar/02743529311d3b8babbaf6935670ec9c?s=96&d=mm&r=g 2x"}[Adrian
        Rosebrock]{.comment-author-name}

        [November 6, 2018 at 1:24
        pm](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-485780){.comment-time-link}

        ::: {.comment-content}
        Awesome, congrats on getting OpenCV 4 installed on your Pi,
        David!
        :::

        ::: {.comment-reply}
        [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-485780){.comment-reply-link}
        :::
        :::
    :::

36. ::: {#comment-486470}
    ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/15529c3b2f26af65e741769a751577e2.png){.avatar
    .avatar-48 .photo width="48" height="48"
    srcset="https://secure.gravatar.com/avatar/15529c3b2f26af65e741769a751577e2?s=96&d=mm&r=g 2x"}[Darcy]{.comment-author-name}

    [November 10, 2018 at 10:57
    am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-486470){.comment-time-link}

    ::: {.comment-content}
    Hey Adrian,

    Love the tutorials. You are really the main resource for opencv on
    raspberry pi. I'm hoping you can help me with a problem I have. I've
    gone through the tutorial 3 times now, and no matter what I do
    during step 5, I cannot get the interpreter, or numpy to point
    inside the virtual environment. What am I doing wrong?
    :::

    ::: {.comment-reply}
    [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-486470){.comment-reply-link}
    :::

    -   ::: {#comment-487014}
        ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/02743529311d3b8babbaf6935670ec9c(1).jpeg){.avatar
        .avatar-48 .photo width="48" height="48"
        srcset="https://secure.gravatar.com/avatar/02743529311d3b8babbaf6935670ec9c?s=96&d=mm&r=g 2x"}[Adrian
        Rosebrock]{.comment-author-name}

        [November 13, 2018 at 5:00
        pm](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-487014){.comment-time-link}

        ::: {.comment-content}
        Hey Darcy, are you sure you are in the Python virtual
        environment when running "cmake"? Unfortunately without having
        physical access to your Pi I'm not sure what the issue may be.
        Don't worry though, OpenCV 4 will soon be released and then
        you'll be able to [use pip in install
        opencv.](https://www.pyimagesearch.com/2018/09/19/pip-install-opencv/)
        :::

        ::: {.comment-reply}
        [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-487014){.comment-reply-link}
        :::
        :::
    :::

37. ::: {#comment-486601}
    ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/e72b117a24577d186816ddf79eaf91cb.png){.avatar
    .avatar-48 .photo width="48" height="48"
    srcset="https://secure.gravatar.com/avatar/e72b117a24577d186816ddf79eaf91cb?s=96&d=mm&r=g 2x"}[[balaji](http://www.infoziant.com/){.comment-author-link}]{.comment-author-name}

    [November 11, 2018 at 11:11
    am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-486601){.comment-time-link}

    ::: {.comment-content}
    hi adrian,

    Thanks for your post,,,i follow your steps but when make -j4 command
    running my code gets hanged at 98% ,,i tried 3 times even it doesn't
    cross 98%,,,how to resolve this issues,,,,,
    :::

    ::: {.comment-reply}
    [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-486601){.comment-reply-link}
    :::

    -   ::: {#comment-487005}
        ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/02743529311d3b8babbaf6935670ec9c(1).jpeg){.avatar
        .avatar-48 .photo width="48" height="48"
        srcset="https://secure.gravatar.com/avatar/02743529311d3b8babbaf6935670ec9c?s=96&d=mm&r=g 2x"}[Adrian
        Rosebrock]{.comment-author-name}

        [November 13, 2018 at 4:53
        pm](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-487005){.comment-time-link}

        ::: {.comment-content}
        It sounds like your Raspberry Pi is frozen. Delete the "build"
        directory, re-create it, re-run "cmake", but this time run
        "make" without the "-j4" option. The compile will take longer
        but your Pi shouldn't lock up.
        :::

        ::: {.comment-reply}
        [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-487005){.comment-reply-link}
        :::
        :::
    :::

38. ::: {#comment-487710}
    ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/c22f0b80264558d5c7742080b543e750.png){.avatar
    .avatar-48 .photo width="48" height="48"
    srcset="https://secure.gravatar.com/avatar/c22f0b80264558d5c7742080b543e750?s=96&d=mm&r=g 2x"}[Mark]{.comment-author-name}

    [November 18, 2018 at 2:55
    pm](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-487710){.comment-time-link}

    ::: {.comment-content}
    This code does not run "as is" with the current Raspberian

    <https://www.raspberrypi.org/downloads/raspbian/>\
    Version:November 2018\
    Release date:2018-11-13\
    Kernel version:4.14

    and with OpenCV 4

    The problem seemed to be two fold: It installed for Python2.7 and
    never could find Python 3 (per the instructions) and was missing:\
    sudo apt-get install libatlas-base-dev\
    sudo pip install setuptools

    FYI
    :::

    ::: {.comment-reply}
    [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-487710){.comment-reply-link}
    :::

    -   ::: {#comment-487827}
        ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/02743529311d3b8babbaf6935670ec9c(1).jpeg){.avatar
        .avatar-48 .photo width="48" height="48"
        srcset="https://secure.gravatar.com/avatar/02743529311d3b8babbaf6935670ec9c?s=96&d=mm&r=g 2x"}[Adrian
        Rosebrock]{.comment-author-name}

        [November 19, 2018 at 12:28
        pm](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-487827){.comment-time-link}

        ::: {.comment-content}
        It sounds like you created a Python 2.7 virtual environment
        instead of a Python 3 virtual environment. Can you check your
        Python virtual environment version?
        :::

        ::: {.comment-reply}
        [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-487827){.comment-reply-link}
        :::
        :::
    :::

39. ::: {#comment-488689}
    ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/1829078fff9a2b14de3feef59646b192.png){.avatar
    .avatar-48 .photo width="48" height="48"
    srcset="https://secure.gravatar.com/avatar/1829078fff9a2b14de3feef59646b192?s=96&d=mm&r=g 2x"}[Austin
    B]{.comment-author-name}

    [November 23, 2018 at 8:30
    am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-488689){.comment-time-link}

    ::: {.comment-content}
    Thank you so much for this tutorial! I was able to get OpenCV 4.0.0
    (official release now, no longer at pre-release) built against
    Python 3.6.7 on the 3 B+ in about half a day (using only "make -j2",
    because I was afraid of overheating, and I was going to let it run
    overnight). Your instructions worked like a charm 🙂
    :::

    ::: {.comment-reply}
    [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-488689){.comment-reply-link}
    :::

    -   ::: {#comment-489006}
        ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/02743529311d3b8babbaf6935670ec9c(1).jpeg){.avatar
        .avatar-48 .photo width="48" height="48"
        srcset="https://secure.gravatar.com/avatar/02743529311d3b8babbaf6935670ec9c?s=96&d=mm&r=g 2x"}[Adrian
        Rosebrock]{.comment-author-name}

        [November 25, 2018 at 9:12
        am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-489006){.comment-time-link}

        ::: {.comment-content}
        Congrats on getting OpenCV 4 installed on your Pi, Austin!
        :::

        ::: {.comment-reply}
        [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-489006){.comment-reply-link}
        :::
        :::
    :::

40. ::: {#comment-489039}
    ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/091d0f8010544d7b11dcfde98f38849d.png){.avatar
    .avatar-48 .photo width="48" height="48"
    srcset="https://secure.gravatar.com/avatar/091d0f8010544d7b11dcfde98f38849d?s=96&d=mm&r=g 2x"}[Chris
    Pinkenburg]{.comment-author-name}

    [November 25, 2018 at 9:39
    am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-489039){.comment-time-link}

    ::: {.comment-content}
    Hi Adrian,

    great tutorial, made installing opencv a cut and paste operation.
    opencv 4.0.0 is now out and I just installed it. One thing which has
    changed compared to the alpha version is the location of the python
    cv2 library. I found it in
    /usr/local/python/cv2/python-3.5/cv2.cpython-35m-arm-linux-gnueabihf.so,
    not as your tutorial suggests in
    /usr/local/lib/python3.5/site-packages/cv2.cpython-35m-arm-linux-gnueabihf.so
    :::

    ::: {.comment-reply}
    [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-489039){.comment-reply-link}
    :::

    -   ::: {#comment-489046}
        ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/02743529311d3b8babbaf6935670ec9c(1).jpeg){.avatar
        .avatar-48 .photo width="48" height="48"
        srcset="https://secure.gravatar.com/avatar/02743529311d3b8babbaf6935670ec9c?s=96&d=mm&r=g 2x"}[Adrian
        Rosebrock]{.comment-author-name}

        [November 25, 2018 at 9:45
        am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-489046){.comment-time-link}

        ::: {.comment-content}
        Thanks Chris --- this guide was written before OpenCV 4 was
        officially released. OpenCV 4 was officially released last week
        so I'm testing out all the install instructions and updating as
        necessary 🙂
        :::

        ::: {.comment-reply}
        [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-489046){.comment-reply-link}
        :::

        -   ::: {#comment-567343}
            ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/6a52b14134c31d7c622528fdad3d5884.jpeg){.avatar
            .avatar-48 .photo width="48" height="48"
            srcset="https://secure.gravatar.com/avatar/6a52b14134c31d7c622528fdad3d5884?s=96&d=mm&r=g 2x"}[xiheng]{.comment-author-name}

            [October 26, 2019 at 10:24
            am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-567343){.comment-time-link}

            ::: {.comment-content}
            Great tutorial. I'm using Buster
            /usr/local/lib/python3.7/site-packages/cv2/python-3.7/cv2.cpython-37m-arm-linux-gnueabihf.so
            is the location.
            :::

            ::: {.comment-reply}
            [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-567343){.comment-reply-link}
            :::
            :::
        :::
    :::

41. ::: {#comment-489424}
    ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/e7426f896021efd0f2e392910060f858.png){.avatar
    .avatar-48 .photo width="48" height="48"
    srcset="https://secure.gravatar.com/avatar/e7426f896021efd0f2e392910060f858?s=96&d=mm&r=g 2x"}[[Tom
    Foltz](http://none/){.comment-author-link}]{.comment-author-name}

    [November 27, 2018 at 11:36
    am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-489424){.comment-time-link}

    ::: {.comment-content}
    When I get to this point, I'm confused on what to do. I'm a relative
    newbie

    Using a terminal text editor such as vi / vim or nano , add the
    following lines to your \~/.profile :

    When I enter the following: sudo nano \~/.profile\
    I seem to have a problem. Maybe I don't need sudo. I think the \~/
    takes me to home, so what is the file I'm editing, ".profile" is not
    valid.
    :::

    ::: {.comment-reply}
    [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-489424){.comment-reply-link}
    :::

    -   ::: {#comment-489433}
        ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/e7426f896021efd0f2e392910060f858.png){.avatar
        .avatar-48 .photo width="48" height="48"
        srcset="https://secure.gravatar.com/avatar/e7426f896021efd0f2e392910060f858?s=96&d=mm&r=g 2x"}[[Tom
        Foltz](http://none/){.comment-author-link}]{.comment-author-name}

        [November 27, 2018 at 12:21
        pm](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-489433){.comment-time-link}

        ::: {.comment-content}
        I'm in this section:

        Make use of virtual environments for Python development
        :::

        ::: {.comment-reply}
        [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-489433){.comment-reply-link}
        :::

        -   ::: {#comment-490034}
            ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/02743529311d3b8babbaf6935670ec9c(1).jpeg){.avatar
            .avatar-48 .photo width="48" height="48"
            srcset="https://secure.gravatar.com/avatar/02743529311d3b8babbaf6935670ec9c?s=96&d=mm&r=g 2x"}[Adrian
            Rosebrock]{.comment-author-name}

            [November 30, 2018 at 9:29
            am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-490034){.comment-time-link}

            ::: {.comment-content}
            No, you do not need "sudo". Use just "nano \~/.profile" so
            you are editing the .profile file of the "pi" user.
            :::

            ::: {.comment-reply}
            [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-490034){.comment-reply-link}
            :::
            :::
        :::
    :::

42. ::: {#comment-489448}
    ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/2fb13d6c05360f7fa32e8fdbcd30a2b1.jpeg){.avatar
    .avatar-48 .photo width="48" height="48"
    srcset="https://secure.gravatar.com/avatar/2fb13d6c05360f7fa32e8fdbcd30a2b1?s=96&d=mm&r=g 2x"}[[Ziad
    Alexander](http://github.com/rustyraptor){.comment-author-link}]{.comment-author-name}

    [November 27, 2018 at 1:36
    pm](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-489448){.comment-time-link}

    ::: {.comment-content}
    Awesome tutorial. I am building a drone with an IR camera using
    openCV. But PLEASE for the love of all things holy. REMOVE the
    dollar signs '\$' from your shell lines. They are beyond annoying
    and serve no purpose. I still have no idea why people still do that.
    :::

    ::: {.comment-reply}
    [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-489448){.comment-reply-link}
    :::

    -   ::: {#comment-490030}
        ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/02743529311d3b8babbaf6935670ec9c(1).jpeg){.avatar
        .avatar-48 .photo width="48" height="48"
        srcset="https://secure.gravatar.com/avatar/02743529311d3b8babbaf6935670ec9c?s=96&d=mm&r=g 2x"}[Adrian
        Rosebrock]{.comment-author-name}

        [November 30, 2018 at 9:26
        am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-490030){.comment-time-link}

        ::: {.comment-content}
        They do serve a purpose. The "\$" indicates that you are at the
        command line executing a command versus opened up a text file
        for editing, etc.
        :::

        ::: {.comment-reply}
        [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-490030){.comment-reply-link}
        :::
        :::
    :::

43. ::: {#comment-489834}
    ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/74160c1669166f6a474e8177a4e466c6.png){.avatar
    .avatar-48 .photo width="48" height="48"
    srcset="https://secure.gravatar.com/avatar/74160c1669166f6a474e8177a4e466c6?s=96&d=mm&r=g 2x"}[Roy
    Georgius]{.comment-author-name}

    [November 29, 2018 at 4:13
    pm](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-489834){.comment-time-link}

    ::: {.comment-content}
    hi, im stuck while in process make -j4 in the line 100% building CXX
    object
    module/python3/CMakeFiles/opencv\_python3.dir/\_\_/src2/cv2/cpp.o
    can you help me??
    :::

    ::: {.comment-reply}
    [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-489834){.comment-reply-link}
    :::

    -   ::: {#comment-489988}
        ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/02743529311d3b8babbaf6935670ec9c(1).jpeg){.avatar
        .avatar-48 .photo width="48" height="48"
        srcset="https://secure.gravatar.com/avatar/02743529311d3b8babbaf6935670ec9c?s=96&d=mm&r=g 2x"}[Adrian
        Rosebrock]{.comment-author-name}

        [November 30, 2018 at 8:51
        am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-489988){.comment-time-link}

        ::: {.comment-content}
        It sounds like your Raspberry Pi has hung. Stop the compile,
        delete your "build" directory, re-create it, and re-run "cmake"
        and "make", but this time increase your swap size to 2048MB.
        :::

        ::: {.comment-reply}
        [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-489988){.comment-reply-link}
        :::
        :::

    -   ::: {#comment-505631}
        ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/67a060d8fe94d1ad4c3a72c2bf1567bb.png){.avatar
        .avatar-48 .photo width="48" height="48"
        srcset="https://secure.gravatar.com/avatar/67a060d8fe94d1ad4c3a72c2bf1567bb?s=96&d=mm&r=g 2x"}[Kurt
        Hoffmann]{.comment-author-name}

        [March 8, 2019 at 10:02
        am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-505631){.comment-time-link}

        ::: {.comment-content}
        Hi,

        i just had the same problem during the last two days.\
        Please check the effect of changing the "CONF SWAPSIZE=2048" in
        the dphys-swapfile using the "free -m" command before and after
        stopping and restarting the process.\
        Does anything change?

        Forcing a swapfile of defined size (blocksize and blocks copied)
        might do the job:

        dd if=/dev/zero of=/var/swap.img bs=1024k count=1000\
        mkswap /var/swap.img\
        swapon /var/swap.img
        :::

        ::: {.comment-reply}
        [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-505631){.comment-reply-link}
        :::

        -   ::: {#comment-506581}
            ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/02743529311d3b8babbaf6935670ec9c(1).jpeg){.avatar
            .avatar-48 .photo width="48" height="48"
            srcset="https://secure.gravatar.com/avatar/02743529311d3b8babbaf6935670ec9c?s=96&d=mm&r=g 2x"}[Adrian
            Rosebrock]{.comment-author-name}

            [March 13, 2019 at 4:03
            pm](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-506581){.comment-time-link}

            ::: {.comment-content}
            Thanks for sharing, Kurt!
            :::

            ::: {.comment-reply}
            [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-506581){.comment-reply-link}
            :::
            :::
        :::
    :::

44. ::: {#comment-490398}
    ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/1ff35372a87715afe22aaa67c9343e20.png){.avatar
    .avatar-48 .photo width="48" height="48"
    srcset="https://secure.gravatar.com/avatar/1ff35372a87715afe22aaa67c9343e20?s=96&d=mm&r=g 2x"}[Chris
    Foley]{.comment-author-name}

    [December 2, 2018 at 8:18
    pm](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-490398){.comment-time-link}

    ::: {.comment-content}
    I think my pi has stalled. I am at mostly 100% but the command
    prompt won't come back. This is a B 3+ with swap file expanded to
    2048 as specified. The compile was done with the -j4 switch. This is
    a BRAND NEW Pi and a brand new install. I got a bunch of warnings
    about clock skew and some about parameter passing being changed in
    GCC 7.1.

    After a lot of retries, I found that I was having some intermittant
    network issues. So I went bakc to a physical connection. I had some
    trouble figuring out why I could not switch to my cv environment
    locally. After editing my .bashrc file, I was up and recompiling.

    I would like to ask about the GCC 7.1 warnings. Will this be updated
    soon? GCC is now at 8.5?
    :::

    ::: {.comment-reply}
    [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-490398){.comment-reply-link}
    :::

    -   ::: {#comment-490678}
        ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/02743529311d3b8babbaf6935670ec9c(1).jpeg){.avatar
        .avatar-48 .photo width="48" height="48"
        srcset="https://secure.gravatar.com/avatar/02743529311d3b8babbaf6935670ec9c?s=96&d=mm&r=g 2x"}[Adrian
        Rosebrock]{.comment-author-name}

        [December 4, 2018 at 10:06
        am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-490678){.comment-time-link}

        ::: {.comment-content}
        I can't comment on the GCC warnings without seeing what they
        were but regarding the Pi looking up, try using only a single
        core when compiling:

        `$ make -j1`

        That should, ideally prevent the Pi from locking up.
        :::

        ::: {.comment-reply}
        [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-490678){.comment-reply-link}
        :::
        :::
    :::

45. ::: {#comment-490485}
    ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/1ff35372a87715afe22aaa67c9343e20.png){.avatar
    .avatar-48 .photo width="48" height="48"
    srcset="https://secure.gravatar.com/avatar/1ff35372a87715afe22aaa67c9343e20?s=96&d=mm&r=g 2x"}[Chris
    Foley]{.comment-author-name}

    [December 3, 2018 at 7:00
    am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-490485){.comment-time-link}

    ::: {.comment-content}
    Clearly I am having issues. I keep missing steps. Forgetting to
    change to CV and so forth. I have removed the build directory
    several times now and finally have a new compilation running under
    CV directly and not limited by my sporadic network issues. I will
    let this run this morning and hope that I can come home to a new
    compile. I still worry about "failed" errors in the build cycle.
    Several items were marked this way. Do I need to post those are is
    it normal to see a few items marked this way? Seems fishy to me but
    I do not know any of details of this build.
    :::

    ::: {.comment-reply}
    [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-490485){.comment-reply-link}
    :::

    -   ::: {#comment-490668}
        ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/02743529311d3b8babbaf6935670ec9c(1).jpeg){.avatar
        .avatar-48 .photo width="48" height="48"
        srcset="https://secure.gravatar.com/avatar/02743529311d3b8babbaf6935670ec9c?s=96&d=mm&r=g 2x"}[Adrian
        Rosebrock]{.comment-author-name}

        [December 4, 2018 at 9:51
        am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-490668){.comment-time-link}

        ::: {.comment-content}
        It's totally normal to see the "failed" message in the "cmake"
        output. OpenCV has A LOT of different configurations. The
        "cmake" script is just checking for various configurations and
        reporting "failed" if it cannot find a given configuration ---
        it's nothing to worry about.
        :::

        ::: {.comment-reply}
        [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-490668){.comment-reply-link}
        :::
        :::
    :::

46. ::: {#comment-490572}
    ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/636e728735f22ce8304392bfebfbdb4c.png){.avatar
    .avatar-48 .photo width="48" height="48"
    srcset="https://secure.gravatar.com/avatar/636e728735f22ce8304392bfebfbdb4c?s=96&d=mm&r=g 2x"}[Naveen]{.comment-author-name}

    [December 3, 2018 at 11:30
    pm](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-490572){.comment-time-link}

    ::: {.comment-content}
    Hi Adrian,\
    First of all a pretty comprehensive and well compiled tutorial.\
    OpenCv Intsalltion on my pi3 B+ has been a nightmare for me. First
    try it got hung up , Then i had to restore my pi from backup . The
    Second time i tried from some other method .This time it went thru'
    successful but my cv2.so got listed under /home/pi and i could't do
    the sym-link . I am now going to try it for the 3rd time from this
    link . Hopefully it works out fine . Any tips that could help me out
    .
    :::

    ::: {.comment-reply}
    [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-490572){.comment-reply-link}
    :::

    -   ::: {#comment-490660}
        ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/02743529311d3b8babbaf6935670ec9c(1).jpeg){.avatar
        .avatar-48 .photo width="48" height="48"
        srcset="https://secure.gravatar.com/avatar/02743529311d3b8babbaf6935670ec9c?s=96&d=mm&r=g 2x"}[Adrian
        Rosebrock]{.comment-author-name}

        [December 4, 2018 at 9:41
        am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-490660){.comment-time-link}

        ::: {.comment-content}
        Here are my suggestions:

        1\. Increase your swap size from 1024MB to 2048MB\
        2. Compile with only a single core (`make -j1`)

        Both of those will help the Pi from locking up.

        As for your sym-link issue that just sounds like you were in the
        incorrect directory when creating the sym-link. Try again but
        this time make sure you're in the "site-packages" directory.
        :::

        ::: {.comment-reply}
        [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-490660){.comment-reply-link}
        :::
        :::
    :::

47. ::: {#comment-491185}
    ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/6654c9d5a73056011104402706d0c7a5.jpeg){.avatar
    .avatar-48 .photo width="48" height="48"
    srcset="https://secure.gravatar.com/avatar/6654c9d5a73056011104402706d0c7a5?s=96&d=mm&r=g 2x"}[Leandro
    Boari]{.comment-author-name}

    [December 7, 2018 at 12:14
    pm](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-491185){.comment-time-link}

    ::: {.comment-content}
    I followed the steps and on my Raspberry Pi 3B is stopped here:

    \[100%\] Built target opencv\_perf\_stitching

    Can someone help me?
    :::

    ::: {.comment-reply}
    [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-491185){.comment-reply-link}
    :::

    -   ::: {#comment-491730}
        ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/02743529311d3b8babbaf6935670ec9c(1).jpeg){.avatar
        .avatar-48 .photo width="48" height="48"
        srcset="https://secure.gravatar.com/avatar/02743529311d3b8babbaf6935670ec9c?s=96&d=mm&r=g 2x"}[Adrian
        Rosebrock]{.comment-author-name}

        [December 11, 2018 at 1:01
        pm](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-491730){.comment-time-link}

        ::: {.comment-content}
        It sounds like you Pi has locked up. Try increasing your swap
        size to 2048MB and compiling with only a single core (i.e.,
        "make -j1"). The compile will take longer but it should prevent
        the Pi from locking up.
        :::

        ::: {.comment-reply}
        [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-491730){.comment-reply-link}
        :::
        :::

    -   ::: {#comment-508821}
        ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/b5aafb3294b5f600e4eb2da079fb8c64.png){.avatar
        .avatar-48 .photo width="48" height="48"
        srcset="https://secure.gravatar.com/avatar/b5aafb3294b5f600e4eb2da079fb8c64?s=96&d=mm&r=g 2x"}[taufikmas]{.comment-author-name}

        [March 24, 2019 at 1:47
        am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-508821){.comment-time-link}

        ::: {.comment-content}
        same with me..i will try make -j1.
        :::

        ::: {.comment-reply}
        [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-508821){.comment-reply-link}
        :::
        :::
    :::

48. ::: {#comment-491385}
    ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/0ca5a47477fd33cc437dc0179e7d54c8.png){.avatar
    .avatar-48 .photo width="48" height="48"
    srcset="https://secure.gravatar.com/avatar/0ca5a47477fd33cc437dc0179e7d54c8?s=96&d=mm&r=g 2x"}[galile]{.comment-author-name}

    [December 9, 2018 at 6:20
    am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-491385){.comment-time-link}

    ::: {.comment-content}
    Hi Adrian,

    When I compile opencv, it's being 100 percent and I got no error,
    but the command line doesn't come to console,its not understood it
    compiled or not. I mean I can't enter new command. How can I figure
    out?
    :::

    ::: {.comment-reply}
    [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-491385){.comment-reply-link}
    :::

    -   ::: {#comment-491717}
        ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/02743529311d3b8babbaf6935670ec9c(1).jpeg){.avatar
        .avatar-48 .photo width="48" height="48"
        srcset="https://secure.gravatar.com/avatar/02743529311d3b8babbaf6935670ec9c?s=96&d=mm&r=g 2x"}[Adrian
        Rosebrock]{.comment-author-name}

        [December 11, 2018 at 12:53
        pm](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-491717){.comment-time-link}

        ::: {.comment-content}
        Can you still type via your keyboard or use your mouse? Is your
        Pi locked up?
        :::

        ::: {.comment-reply}
        [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-491717){.comment-reply-link}
        :::
        :::
    :::

49. ::: {#comment-491498}
    ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/b8b625594820ed21111614464c990675.png){.avatar
    .avatar-48 .photo width="48" height="48"
    srcset="https://secure.gravatar.com/avatar/b8b625594820ed21111614464c990675?s=96&d=mm&r=g 2x"}[Florin]{.comment-author-name}

    [December 10, 2018 at 6:24
    am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-491498){.comment-time-link}

    ::: {.comment-content}
    Hi Adrian, I have a probelm with this error

    ln: failed to create symbolic link 'cv2/cv2': Permission denied
    :::

    ::: {.comment-reply}
    [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-491498){.comment-reply-link}
    :::

    -   ::: {#comment-491708}
        ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/02743529311d3b8babbaf6935670ec9c(1).jpeg){.avatar
        .avatar-48 .photo width="48" height="48"
        srcset="https://secure.gravatar.com/avatar/02743529311d3b8babbaf6935670ec9c?s=96&d=mm&r=g 2x"}[Adrian
        Rosebrock]{.comment-author-name}

        [December 11, 2018 at 12:45
        pm](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-491708){.comment-time-link}

        ::: {.comment-content}
        What directory are you when you try to create the sym-link?
        :::

        ::: {.comment-reply}
        [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-491708){.comment-reply-link}
        :::
        :::
    :::

50. ::: {#comment-491537}
    ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/d393c1755500c90e31a60d1103ef3bf6.png){.avatar
    .avatar-48 .photo width="48" height="48"
    srcset="https://secure.gravatar.com/avatar/d393c1755500c90e31a60d1103ef3bf6?s=96&d=mm&r=g 2x"}[paul]{.comment-author-name}

    [December 10, 2018 at 11:54
    am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-491537){.comment-time-link}

    ::: {.comment-content}
    In "Run CMake for OpenCV 4" run those commands 1-at-a-time. THey do
    not work in one big copy/paste.
    :::

    ::: {.comment-reply}
    [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-491537){.comment-reply-link}
    :::
    :::

51. ::: {#comment-491599}
    ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/a217b4c3f462e779f73e535d87a9bd17.png){.avatar
    .avatar-48 .photo width="48" height="48"
    srcset="https://secure.gravatar.com/avatar/a217b4c3f462e779f73e535d87a9bd17?s=96&d=mm&r=g 2x"}[Shashank]{.comment-author-name}

    [December 10, 2018 at 11:22
    pm](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-491599){.comment-time-link}

    ::: {.comment-content}
    How do I install matplotlib, scikit, imutils etc after doing this
    procedure? Can anyone please help. And after installing this there
    is only 300MB left , I have uninstalled libre office , Wolfram
    engine etc
    :::

    ::: {.comment-reply}
    [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-491599){.comment-reply-link}
    :::

    -   ::: {#comment-491695}
        ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/02743529311d3b8babbaf6935670ec9c(1).jpeg){.avatar
        .avatar-48 .photo width="48" height="48"
        srcset="https://secure.gravatar.com/avatar/02743529311d3b8babbaf6935670ec9c?s=96&d=mm&r=g 2x"}[Adrian
        Rosebrock]{.comment-author-name}

        [December 11, 2018 at 12:38
        pm](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-491695){.comment-time-link}

        ::: {.comment-content}
        You can use pip to install them:

        `$ pip install imutils matplotlib scikit-learn`
        :::

        ::: {.comment-reply}
        [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-491695){.comment-reply-link}
        :::
        :::
    :::

52. ::: {#comment-491672}
    ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/2819688e01ed7796a3202ced3d8a5699.png){.avatar
    .avatar-48 .photo width="48" height="48"
    srcset="https://secure.gravatar.com/avatar/2819688e01ed7796a3202ced3d8a5699?s=96&d=mm&r=g 2x"}[Calum]{.comment-author-name}

    [December 11, 2018 at 11:56
    am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-491672){.comment-time-link}

    ::: {.comment-content}
    Hi Adrian,

    I am trying to install openCV without a virtual environment and for
    python 2.7. This is due to some additional equipment that I'm using
    that requires installation outside of a virtual environment and is
    only compatible with python 2.7. I have previously installed openCV
    with python 2.7 following your tutorial, but this was done in a
    virtual environment.\
    Now that I am trying both python 2.7 and no virtual environment, I
    am struggling to successfully install openCV. I am able to complete
    the build and install steps successfully, but when I try to import
    cv2 i get the error 'ImportError: No module named cv2'.\
    Is there anything different I must do to install openCV in this way?
    How do I go about successfully importing cv2?

    Thanks
    :::

    ::: {.comment-reply}
    [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-491672){.comment-reply-link}
    :::

    -   ::: {#comment-491680}
        ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/02743529311d3b8babbaf6935670ec9c(1).jpeg){.avatar
        .avatar-48 .photo width="48" height="48"
        srcset="https://secure.gravatar.com/avatar/02743529311d3b8babbaf6935670ec9c?s=96&d=mm&r=g 2x"}[Adrian
        Rosebrock]{.comment-author-name}

        [December 11, 2018 at 12:29
        pm](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-491680){.comment-time-link}

        ::: {.comment-content}
        If you can skip the Python virtual environment, that's not a
        problem. The same goes for the "Troubleshooting and Frequently
        Asked Questions (FAQ)" section of the guide, just be sure to
        check the "site-packages" directory of your system install of
        Python 2.7. Please keep in mind that the PyImageSearch blog is
        now officially Python 3+ so my Python 2.7 support moving forward
        will be fairly limited.
        :::

        ::: {.comment-reply}
        [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-491680){.comment-reply-link}
        :::
        :::
    :::

53. ::: {#comment-492156}
    ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/25e80d1891b052e9786b71ffa9f3882b.png){.avatar
    .avatar-48 .photo width="48" height="48"
    srcset="https://secure.gravatar.com/avatar/25e80d1891b052e9786b71ffa9f3882b?s=96&d=mm&r=g 2x"}[Geoff]{.comment-author-name}

    [December 13, 2018 at 10:59
    pm](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-492156){.comment-time-link}

    ::: {.comment-content}
    Thanks for the tutorial. I was able to install OpenCV4 on my
    RaspPi 3. I tried -j4 which got mo to 100%...then it seemed to hand.
    I started over with -j1, left it for 2 hrs, and it finished.

    Now that that works, I am trying to import this into Python 3, but
    am having trouble. When I enter "import cv2 as cv2" into Python 3, I
    get this error:

    "ImportError: No module named 'cv2'

    Am I missing something?
    :::

    ::: {.comment-reply}
    [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-492156){.comment-reply-link}
    :::

    -   ::: {#comment-492850}
        ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/02743529311d3b8babbaf6935670ec9c(1).jpeg){.avatar
        .avatar-48 .photo width="48" height="48"
        srcset="https://secure.gravatar.com/avatar/02743529311d3b8babbaf6935670ec9c?s=96&d=mm&r=g 2x"}[Adrian
        Rosebrock]{.comment-author-name}

        [December 18, 2018 at 9:29
        am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-492850){.comment-time-link}

        ::: {.comment-content}
        Make sure you refer to the "Troubleshooting and Frequently Asked
        Questions (FAQ)" section where I discuss most of the reasons why
        that may happen.
        :::

        ::: {.comment-reply}
        [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-492850){.comment-reply-link}
        :::
        :::

    -   ::: {#comment-526029}
        ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/fa0043c5257770317db4afd7ba8207c7.png){.avatar
        .avatar-48 .photo width="48" height="48"
        srcset="https://secure.gravatar.com/avatar/fa0043c5257770317db4afd7ba8207c7?s=96&d=mm&r=g 2x"}[Hayat]{.comment-author-name}

        [July 17, 2019 at 2:06
        am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-526029){.comment-time-link}

        ::: {.comment-content}
        hi i think that i solve this issue by using python3 instead of
        just python before you import cv2\
        i got it to work that way. hope this help you out
        :::

        ::: {.comment-reply}
        [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-526029){.comment-reply-link}
        :::
        :::
    :::

54. ::: {#comment-492496}
    ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/bd9b11a207b08ccb2ce5c975744235bb.png){.avatar
    .avatar-48 .photo width="48" height="48"
    srcset="https://secure.gravatar.com/avatar/bd9b11a207b08ccb2ce5c975744235bb?s=96&d=mm&r=g 2x"}[LeninGF]{.comment-author-name}

    [December 15, 2018 at 10:45
    pm](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-492496){.comment-time-link}

    ::: {.comment-content}
    Hello everyone .... Thanks to author for guiding in installation. It
    worked. However I am wondering if conda could be used, since I am
    kind of more comfortable with that.

    I have a question. I followed the instructions but when I start up
    the Raspberry Pi I cant enable the virtual env cv from command line.
    I always have to run the command source \~/.profiles and then I can
    do workon cv..... Is there a way to fix this? Did I do something
    wrong?
    :::

    ::: {.comment-reply}
    [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-492496){.comment-reply-link}
    :::

    -   ::: {#comment-492824}
        ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/02743529311d3b8babbaf6935670ec9c(1).jpeg){.avatar
        .avatar-48 .photo width="48" height="48"
        srcset="https://secure.gravatar.com/avatar/02743529311d3b8babbaf6935670ec9c?s=96&d=mm&r=g 2x"}[Adrian
        Rosebrock]{.comment-author-name}

        [December 18, 2018 at 9:09
        am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-492824){.comment-time-link}

        ::: {.comment-content}
        You could use the conda environment if you wanted but it gets
        tricky to correctly supply the conda Python paths if you've
        never done it before. I only recommend doing it if you have good
        experience debugging Python paths.

        As far as your question goes, the `source ~/.profile` command
        only needs to be executed once per terminal session. That is
        normal.
        :::

        ::: {.comment-reply}
        [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-492824){.comment-reply-link}
        :::
        :::
    :::

55. ::: {#comment-492770}
    ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/3ec42caa773f01430f773c9f94efa2b1.png){.avatar
    .avatar-48 .photo width="48" height="48"
    srcset="https://secure.gravatar.com/avatar/3ec42caa773f01430f773c9f94efa2b1?s=96&d=mm&r=g 2x"}[Montel
    Hudson]{.comment-author-name}

    [December 18, 2018 at 2:40
    am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-492770){.comment-time-link}

    ::: {.comment-content}
    When I open a new terminal to check if If my cv is working and I
    enter workon I get.bash: workon: command not found, why is that
    happening I followed everything step by step
    :::

    ::: {.comment-reply}
    [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-492770){.comment-reply-link}
    :::

    -   ::: {#comment-492794}
        ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/02743529311d3b8babbaf6935670ec9c(1).jpeg){.avatar
        .avatar-48 .photo width="48" height="48"
        srcset="https://secure.gravatar.com/avatar/02743529311d3b8babbaf6935670ec9c?s=96&d=mm&r=g 2x"}[Adrian
        Rosebrock]{.comment-author-name}

        [December 18, 2018 at 8:47
        am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-492794){.comment-time-link}

        ::: {.comment-content}
        It sounds like you have not installed virtualenv and
        virtualenvwrapper properly OR you have not updated your .profile
        correctly. Double-check those steps.
        :::

        ::: {.comment-reply}
        [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-492794){.comment-reply-link}
        :::
        :::
    :::

56. ::: {#comment-493034}
    ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/91d58b58c038ebf09b93fd147d948fbf.png){.avatar
    .avatar-48 .photo width="48" height="48"
    srcset="https://secure.gravatar.com/avatar/91d58b58c038ebf09b93fd147d948fbf?s=96&d=mm&r=g 2x"}[Jaydip
    Bari]{.comment-author-name}

    [December 20, 2018 at 2:41
    am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-493034){.comment-time-link}

    ::: {.comment-content}
    Hey there ,\
    I have successfully installed opencv4. But now the problem is that I
    want to start my python script on raspberry pi on startup and it
    seems that I cannot enable virtual environment at startup. Please
    guide me how should I enable virtual environment and start my
    script. Please reply me with my email id.
    :::

    ::: {.comment-reply}
    [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-493034){.comment-reply-link}
    :::

    -   ::: {#comment-493048}
        ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/02743529311d3b8babbaf6935670ec9c(1).jpeg){.avatar
        .avatar-48 .photo width="48" height="48"
        srcset="https://secure.gravatar.com/avatar/02743529311d3b8babbaf6935670ec9c?s=96&d=mm&r=g 2x"}[Adrian
        Rosebrock]{.comment-author-name}

        [December 20, 2018 at 5:10
        am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-493048){.comment-time-link}

        ::: {.comment-content}
        Make sure you refer to the "Troubleshooting and Frequently Asked
        Questions (FAQ)" section where I include detailed instructions
        on how to debug not being able to find your Python virtual
        environment. My guess is you're forgetting to use the
        `source ~/.profile` command before `workon cv`
        :::

        ::: {.comment-reply}
        [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-493048){.comment-reply-link}
        :::
        :::
    :::

57. ::: {#comment-493155}
    ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/8007369bf3471d5cf6392883a5fed71a.png){.avatar
    .avatar-48 .photo width="48" height="48"
    srcset="https://secure.gravatar.com/avatar/8007369bf3471d5cf6392883a5fed71a?s=96&d=mm&r=g 2x"}[djef]{.comment-author-name}

    [December 21, 2018 at 5:20
    am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-493155){.comment-time-link}

    ::: {.comment-content}
    hello , i am using raspberry pi b+ and i had succefully install open
    cv like this blog but when i tried the sample below and in the scp
    pi-home-surveillance.zip pi\@192168 1 1 athey aask me a password
    plzzzzzzzzzzzz any help
    :::

    ::: {.comment-reply}
    [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-493155){.comment-reply-link}
    :::

    -   ::: {#comment-493871}
        ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/02743529311d3b8babbaf6935670ec9c(1).jpeg){.avatar
        .avatar-48 .photo width="48" height="48"
        srcset="https://secure.gravatar.com/avatar/02743529311d3b8babbaf6935670ec9c?s=96&d=mm&r=g 2x"}[Adrian
        Rosebrock]{.comment-author-name}

        [December 27, 2018 at 11:01
        am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-493871){.comment-time-link}

        ::: {.comment-content}
        The password to your Raspberry Pi is likely the default
        password, "raspberry"
        :::

        ::: {.comment-reply}
        [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-493871){.comment-reply-link}
        :::
        :::
    :::

58. ::: {#comment-493222}
    ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/a6e5dbeb81c4fc528b7f30f6081dfbe1.png){.avatar
    .avatar-48 .photo width="48" height="48"
    srcset="https://secure.gravatar.com/avatar/a6e5dbeb81c4fc528b7f30f6081dfbe1?s=96&d=mm&r=g 2x"}[Tjaart]{.comment-author-name}

    [December 21, 2018 at 11:27
    pm](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-493222){.comment-time-link}

    ::: {.comment-content}
    Hi there

    I am a complete noob... but have managed to install Opencv4 and
    Tensorflow in two different virtual machines. Thanks for a great
    tutorial on CV4 install.

    How ever I cant import tensorflow when working in the Opencv 4
    environment, so I am trying to follow your tutorial but installing
    it outside a virtual environment.\
    The cmake errors out and I am a noob so the error file makes no
    sense to me.

    1 Could you please consider a short vid or tutorial to setup opencv
    4 outside virtual environment.

    I would love to enter your "The PyImageSearch Gurus course" but I
    will get lost in the first lesson.\
    2 Have you ever considered a classroom setup where the enrolled
    people can ask Q? as you go?
    :::

    ::: {.comment-reply}
    [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-493222){.comment-reply-link}
    :::

    -   ::: {#comment-493864}
        ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/02743529311d3b8babbaf6935670ec9c(1).jpeg){.avatar
        .avatar-48 .photo width="48" height="48"
        srcset="https://secure.gravatar.com/avatar/02743529311d3b8babbaf6935670ec9c?s=96&d=mm&r=g 2x"}[Adrian
        Rosebrock]{.comment-author-name}

        [December 27, 2018 at 10:56
        am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-493864){.comment-time-link}

        ::: {.comment-content}
        Do you already have OpenCV 4 installed into your Python virtual
        environment? If so, you should be able to install TensorFlow
        via:

            $ workon your_env_name
            $ pip install tensorflow

        As far as the [PyImageSearch Gurus
        course](https://www.pyimagesearch.com/pyimagesearch-gurus/)
        goes, I have designed the course to help you study computer
        vision even if you are totally new to computer vision. I also
        have provided pre-configured development environments you can
        use (no need to configure your system). You just download the
        virtual machine, install it with a few clicks, and you're ready
        to go! I would suggest you give the course a try, I think it
        will really help you.
        :::

        ::: {.comment-reply}
        [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-493864){.comment-reply-link}
        :::
        :::
    :::

59. ::: {#comment-493229}
    ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/ea5b84ab92f39a9f08ee32559c28bae4.png){.avatar
    .avatar-48 .photo width="48" height="48"
    srcset="https://secure.gravatar.com/avatar/ea5b84ab92f39a9f08ee32559c28bae4?s=96&d=mm&r=g 2x"}[[Hanno](http://unleashlive.com/){.comment-author-link}]{.comment-author-name}

    [December 22, 2018 at 1:14
    am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-493229){.comment-time-link}

    ::: {.comment-content}
    This was the only tutorial that worked flawlessly to install and run
    CV 4. Thanks Adrian.
    :::

    ::: {.comment-reply}
    [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-493229){.comment-reply-link}
    :::

    -   ::: {#comment-493862}
        ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/02743529311d3b8babbaf6935670ec9c(1).jpeg){.avatar
        .avatar-48 .photo width="48" height="48"
        srcset="https://secure.gravatar.com/avatar/02743529311d3b8babbaf6935670ec9c?s=96&d=mm&r=g 2x"}[Adrian
        Rosebrock]{.comment-author-name}

        [December 27, 2018 at 10:54
        am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-493862){.comment-time-link}

        ::: {.comment-content}
        Thanks Hanno! And congratulations on getting OpenCV 4 installed
        on your Pi!
        :::

        ::: {.comment-reply}
        [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-493862){.comment-reply-link}
        :::
        :::
    :::

60. ::: {#comment-493579}
    ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/ca367e9a30412de89ced138bae4ec93c.png){.avatar
    .avatar-48 .photo width="48" height="48"
    srcset="https://secure.gravatar.com/avatar/ca367e9a30412de89ced138bae4ec93c?s=96&d=mm&r=g 2x"}[Saami]{.comment-author-name}

    [December 25, 2018 at 1:29
    pm](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-493579){.comment-time-link}

    ::: {.comment-content}
    Hey i came across a problem when i was making an ocr program using
    your method with tesseract and open cv it says no module named
    pytesseract i am using a raspberry pi 3
    :::

    ::: {.comment-reply}
    [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-493579){.comment-reply-link}
    :::

    -   ::: {#comment-493821}
        ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/02743529311d3b8babbaf6935670ec9c(1).jpeg){.avatar
        .avatar-48 .photo width="48" height="48"
        srcset="https://secure.gravatar.com/avatar/02743529311d3b8babbaf6935670ec9c?s=96&d=mm&r=g 2x"}[Adrian
        Rosebrock]{.comment-author-name}

        [December 27, 2018 at 10:24
        am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-493821){.comment-time-link}

        ::: {.comment-content}
        You need to install the pytesseract lbirary:

        `$ pip install pytesseract`
        :::

        ::: {.comment-reply}
        [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-493821){.comment-reply-link}
        :::
        :::
    :::

61. ::: {#comment-494228}
    ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/2fe26fcee17e28f29badf8abeb572ba3.png){.avatar
    .avatar-48 .photo width="48" height="48"
    srcset="https://secure.gravatar.com/avatar/2fe26fcee17e28f29badf8abeb572ba3?s=96&d=mm&r=g 2x"}[Pandora]{.comment-author-name}

    [December 30, 2018 at 4:57
    pm](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-494228){.comment-time-link}

    ::: {.comment-content}
    Is it really okay to ignore the mismatch between the compiletime and
    runtime versions along with the runtime errors?﻿
    :::

    ::: {.comment-reply}
    [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-494228){.comment-reply-link}
    :::

    -   ::: {#comment-494494}
        ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/02743529311d3b8babbaf6935670ec9c(1).jpeg){.avatar
        .avatar-48 .photo width="48" height="48"
        srcset="https://secure.gravatar.com/avatar/02743529311d3b8babbaf6935670ec9c?s=96&d=mm&r=g 2x"}[Adrian
        Rosebrock]{.comment-author-name}

        [January 2, 2019 at 9:20
        am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-494494){.comment-time-link}

        ::: {.comment-content}
        What runtime errors are you referring to?
        :::

        ::: {.comment-reply}
        [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-494494){.comment-reply-link}
        :::
        :::
    :::

62. ::: {#comment-494297}
    ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/739695042295d1311674abb3bbfb024e.png){.avatar
    .avatar-48 .photo width="48" height="48"
    srcset="https://secure.gravatar.com/avatar/739695042295d1311674abb3bbfb024e?s=96&d=mm&r=g 2x"}[Ethan]{.comment-author-name}

    [December 31, 2018 at 12:17
    pm](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-494297){.comment-time-link}

    ::: {.comment-content}
    Hi Adrian!

    Thanks for the walk through. I have a question concerning doing this
    on a Raspberry Pi Zero W. I followed through all of your
    instructions and when it came time to try and import cv2 in the
    python environment, it threw an error. "FATAL ERROR: This OpenCV
    build doesn't support current CPU/HW configuration". Under that it
    says "Required baseline features: NEON -- NOT AVAILABLE". I did some
    research and found that the raspberry pi zero doesn't support NEON?
    Can you confirm this? Also, what would be my steps to backtrack and
    fix this. Do I need to go back and run cmake with the neon flag
    turned off? What should I delete or do before I do this so I don't
    have two sets of opencv libraries? Thanks for all of your help!
    :::

    ::: {.comment-reply}
    [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-494297){.comment-reply-link}
    :::
    :::

63. ::: {#comment-494994}
    ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/6a97682179c0cd9dda2ac66e6d5e115d.png){.avatar
    .avatar-48 .photo width="48" height="48"
    srcset="https://secure.gravatar.com/avatar/6a97682179c0cd9dda2ac66e6d5e115d?s=96&d=mm&r=g 2x"}[Steffen]{.comment-author-name}

    [January 7, 2019 at 8:01
    am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-494994){.comment-time-link}

    ::: {.comment-content}
    Hey Adrian,

    thank you very much for everything! Just a short question: Can the
    folders opencv and opencv\_contrib be deleted after successful
    installation? Or they still necessary for opencv to work?
    :::

    ::: {.comment-reply}
    [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-494994){.comment-reply-link}
    :::

    -   ::: {#comment-495123}
        ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/02743529311d3b8babbaf6935670ec9c(1).jpeg){.avatar
        .avatar-48 .photo width="48" height="48"
        srcset="https://secure.gravatar.com/avatar/02743529311d3b8babbaf6935670ec9c?s=96&d=mm&r=g 2x"}[Adrian
        Rosebrock]{.comment-author-name}

        [January 8, 2019 at 6:51
        am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-495123){.comment-time-link}

        ::: {.comment-content}
        Once OpenCV has been successfully installed you can delete the
        "opencv" and "opencv\_contrib" directories.
        :::

        ::: {.comment-reply}
        [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-495123){.comment-reply-link}
        :::
        :::
    :::

64. ::: {#comment-495742}
    ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/520eb12341657471588cd8349fddf32a.png){.avatar
    .avatar-48 .photo width="48" height="48"
    srcset="https://secure.gravatar.com/avatar/520eb12341657471588cd8349fddf32a?s=96&d=mm&r=g 2x"}[Brad]{.comment-author-name}

    [January 10, 2019 at 9:49
    pm](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-495742){.comment-time-link}

    ::: {.comment-content}
    It looked like I successfully completed each step, and on step 7
    (test) it still says version 3.4.2

    Is this somehow related to the virtual environment from the older
    OpenCV? Each time I enter workon cv I need to enter source
    \~/.profile, or I get a bash error.
    :::

    ::: {.comment-reply}
    [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-495742){.comment-reply-link}
    :::

    -   ::: {#comment-495911}
        ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/02743529311d3b8babbaf6935670ec9c(1).jpeg){.avatar
        .avatar-48 .photo width="48" height="48"
        srcset="https://secure.gravatar.com/avatar/02743529311d3b8babbaf6935670ec9c?s=96&d=mm&r=g 2x"}[Adrian
        Rosebrock]{.comment-author-name}

        [January 11, 2019 at 9:30
        am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-495911){.comment-time-link}

        ::: {.comment-content}
        Did you create a new Python virtual environment for your OpenCV
        4 install? If so, you definitely need to.
        :::

        ::: {.comment-reply}
        [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-495911){.comment-reply-link}
        :::

        -   ::: {#comment-495956}
            ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/520eb12341657471588cd8349fddf32a.png){.avatar
            .avatar-48 .photo width="48" height="48"
            srcset="https://secure.gravatar.com/avatar/520eb12341657471588cd8349fddf32a?s=96&d=mm&r=g 2x"}[Brad]{.comment-author-name}

            [January 11, 2019 at 10:56
            am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-495956){.comment-time-link}

            ::: {.comment-content}
            Hi, thanks for the quick response, I did the virtual
            environment as per step 4 above. I've been over the tutorial
            on virtual environments, but can I redo step 4 without
            re-installing OpenCV 4?
            :::

            ::: {.comment-reply}
            [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-495956){.comment-reply-link}
            :::

            -   ::: {#comment-495973}
                ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/02743529311d3b8babbaf6935670ec9c(1).jpeg){.avatar
                .avatar-48 .photo width="48" height="48"
                srcset="https://secure.gravatar.com/avatar/02743529311d3b8babbaf6935670ec9c?s=96&d=mm&r=g 2x"}[Adrian
                Rosebrock]{.comment-author-name}

                [January 11, 2019 at 1:24
                pm](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-495973){.comment-time-link}

                ::: {.comment-content}
                Yes, you can do it over, just make sure your sym-link is
                correct. I get the impression that you may have
                installed a previous version of OpenCV on your Pi
                *before* you followed this tutorial though.
                :::

                ::: {.comment-reply}
                [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-495973){.comment-reply-link}
                :::

                -   ::: {#comment-496045}
                    ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/520eb12341657471588cd8349fddf32a.png){.avatar
                    .avatar-48 .photo width="48" height="48"
                    srcset="https://secure.gravatar.com/avatar/520eb12341657471588cd8349fddf32a?s=96&d=mm&r=g 2x"}[Brad]{.comment-author-name}

                    [January 12, 2019 at 10:57
                    am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-496045){.comment-time-link}

                    ::: {.comment-content}
                    Thanks, that did it. I just repeated steps 4 and 7,
                    and named the new virtual environment cv4.

                    Yes, I have opencv 3.4.1, 3.4.2, and now 4
                    installed.
                    :::
                    :::

                -   ::: {#comment-496682}
                    ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/02743529311d3b8babbaf6935670ec9c(1).jpeg){.avatar
                    .avatar-48 .photo width="48" height="48"
                    srcset="https://secure.gravatar.com/avatar/02743529311d3b8babbaf6935670ec9c?s=96&d=mm&r=g 2x"}[Adrian
                    Rosebrock]{.comment-author-name}

                    [January 16, 2019 at 10:12
                    am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-496682){.comment-time-link}

                    ::: {.comment-content}
                    Awesome, I'm glad that worked!
                    :::
                    :::
                :::
            :::
        :::
    :::

65. ::: {#comment-495985}
    ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/2ddaeca5ba30341f8defa57ad3c54b84.png){.avatar
    .avatar-48 .photo width="48" height="48"
    srcset="https://secure.gravatar.com/avatar/2ddaeca5ba30341f8defa57ad3c54b84?s=96&d=mm&r=g 2x"}[Peter]{.comment-author-name}

    [January 11, 2019 at 4:19
    pm](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-495985){.comment-time-link}

    ::: {.comment-content}
    I would just like to say that this is one of the most useful and
    comprehensive 'How-to' articles I have ever followed. Not only did
    each step work, but each step both taught me and explained things
    along the way.

    A brilliant, well thought out practical article.

    You should be proud of this.

    Thank you for all your hard work.

    Peter.
    :::

    ::: {.comment-reply}
    [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-495985){.comment-reply-link}
    :::

    -   ::: {#comment-496687}
        ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/02743529311d3b8babbaf6935670ec9c(1).jpeg){.avatar
        .avatar-48 .photo width="48" height="48"
        srcset="https://secure.gravatar.com/avatar/02743529311d3b8babbaf6935670ec9c?s=96&d=mm&r=g 2x"}[Adrian
        Rosebrock]{.comment-author-name}

        [January 16, 2019 at 10:19
        am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-496687){.comment-time-link}

        ::: {.comment-content}
        Thank you Peter, I really appreciate your kind words. Your
        comment really made my day 🙂
        :::

        ::: {.comment-reply}
        [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-496687){.comment-reply-link}
        :::
        :::
    :::

66. ::: {#comment-496037}
    ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/943f9a18a64eb5fd586a101653adf188.png){.avatar
    .avatar-48 .photo width="48" height="48"
    srcset="https://secure.gravatar.com/avatar/943f9a18a64eb5fd586a101653adf188?s=96&d=mm&r=g 2x"}[Dalil
    Maadour]{.comment-author-name}

    [January 12, 2019 at 8:44
    am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-496037){.comment-time-link}

    ::: {.comment-content}
    Hi, when I do the "make -j4" command, the raspberry freeze at 100%
    of the loading.. help me pleaase
    :::

    ::: {.comment-reply}
    [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-496037){.comment-reply-link}
    :::

    -   ::: {#comment-496681}
        ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/02743529311d3b8babbaf6935670ec9c(1).jpeg){.avatar
        .avatar-48 .photo width="48" height="48"
        srcset="https://secure.gravatar.com/avatar/02743529311d3b8babbaf6935670ec9c?s=96&d=mm&r=g 2x"}[Adrian
        Rosebrock]{.comment-author-name}

        [January 16, 2019 at 10:12
        am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-496681){.comment-time-link}

        ::: {.comment-content}
        See the sentence in the post that starts with "If you have
        compile errors or your Raspberry Pi hangs/freezes you can try
        without the -j4 switch which can eliminate race conditions."
        :::

        ::: {.comment-reply}
        [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-496681){.comment-reply-link}
        :::
        :::
    :::

67. ::: {#comment-496154}
    ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/943f9a18a64eb5fd586a101653adf188.png){.avatar
    .avatar-48 .photo width="48" height="48"
    srcset="https://secure.gravatar.com/avatar/943f9a18a64eb5fd586a101653adf188?s=96&d=mm&r=g 2x"}[Dalil
    Maadour]{.comment-author-name}

    [January 13, 2019 at 1:24
    pm](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-496154){.comment-time-link}

    ::: {.comment-content}
    Hi Adrian, I've been installed and compiled opencv, but when I want
    to do "import cv2", the IDE answers me an error. What is the problem
    ? 😮
    :::

    ::: {.comment-reply}
    [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-496154){.comment-reply-link}
    :::

    -   ::: {#comment-496672}
        ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/02743529311d3b8babbaf6935670ec9c(1).jpeg){.avatar
        .avatar-48 .photo width="48" height="48"
        srcset="https://secure.gravatar.com/avatar/02743529311d3b8babbaf6935670ec9c?s=96&d=mm&r=g 2x"}[Adrian
        Rosebrock]{.comment-author-name}

        [January 16, 2019 at 10:04
        am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-496672){.comment-time-link}

        ::: {.comment-content}
        I don't know which IDE you are using, but if it's anything like
        PyCharm you likely need to set the Python project interpreter to
        point to the Python virtual environment. See [this tutorial on
        instructions to do exactly
        that.](https://www.pyimagesearch.com/2015/08/17/the-perfect-computer-vision-environment-pycharm-opencv-and-python-virtual-environments/)
        :::

        ::: {.comment-reply}
        [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-496672){.comment-reply-link}
        :::
        :::
    :::

68. ::: {#comment-496481}
    ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/816a46b381edacdbfdf01efee010a1a7.png){.avatar
    .avatar-48 .photo width="48" height="48"
    srcset="https://secure.gravatar.com/avatar/816a46b381edacdbfdf01efee010a1a7?s=96&d=mm&r=g 2x"}[rohit]{.comment-author-name}

    [January 15, 2019 at 12:34
    pm](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-496481){.comment-time-link}

    ::: {.comment-content}
    in opencv4 sift is not working\
    error is\
    File "Detector.py", line 5, in\
    detector=cv2.SIFT()\
    AttributeError: module 'cv2' has no attribute 'SIFT'
    :::

    ::: {.comment-reply}
    [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-496481){.comment-reply-link}
    :::

    -   ::: {#comment-496643}
        ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/02743529311d3b8babbaf6935670ec9c(1).jpeg){.avatar
        .avatar-48 .photo width="48" height="48"
        srcset="https://secure.gravatar.com/avatar/02743529311d3b8babbaf6935670ec9c?s=96&d=mm&r=g 2x"}[Adrian
        Rosebrock]{.comment-author-name}

        [January 16, 2019 at 9:38
        am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-496643){.comment-time-link}

        ::: {.comment-content}
        That's not how you access SIFT in OpenCV 3 and OpenCV 4. See
        [this
        tutorial.](https://www.pyimagesearch.com/2015/07/16/where-did-sift-and-surf-go-in-opencv-3/)

        You should be using:

        `sift = cv2.xfeatures2d.SIFT_create()`
        :::

        ::: {.comment-reply}
        [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-496643){.comment-reply-link}
        :::
        :::
    :::

69. ::: {#comment-496495}
    ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/d6dd867c1813a501669e5409ba1636ba.png){.avatar
    .avatar-48 .photo width="48" height="48"
    srcset="https://secure.gravatar.com/avatar/d6dd867c1813a501669e5409ba1636ba?s=96&d=mm&r=g 2x"}[Caleb]{.comment-author-name}

    [January 15, 2019 at 2:43
    pm](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-496495){.comment-time-link}

    ::: {.comment-content}
    I'm having trouble with step \#5. Everything seems to compile just
    fine in my virtual environment, but when I check the output, I can't
    find anything indicating that the compiler is pointing to python 3
    and numpy. Any suggestions?
    :::

    ::: {.comment-reply}
    [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-496495){.comment-reply-link}
    :::

    -   ::: {#comment-496641}
        ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/02743529311d3b8babbaf6935670ec9c(1).jpeg){.avatar
        .avatar-48 .photo width="48" height="48"
        srcset="https://secure.gravatar.com/avatar/02743529311d3b8babbaf6935670ec9c?s=96&d=mm&r=g 2x"}[Adrian
        Rosebrock]{.comment-author-name}

        [January 16, 2019 at 9:36
        am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-496641){.comment-time-link}

        ::: {.comment-content}
        Make sure you use the "workon" command to access your Python
        virtual environment first. It sounds like you may have missed
        that step.
        :::

        ::: {.comment-reply}
        [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-496641){.comment-reply-link}
        :::
        :::
    :::

70. ::: {#comment-496944}
    ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/fce240d8373a7943d029baa81c13ca9c.png){.avatar
    .avatar-48 .photo width="48" height="48"
    srcset="https://secure.gravatar.com/avatar/fce240d8373a7943d029baa81c13ca9c?s=96&d=mm&r=g 2x"}[Shaun]{.comment-author-name}

    [January 18, 2019 at 9:21
    am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-496944){.comment-time-link}

    ::: {.comment-content}
    Nice work as always.

    I ran out of swap while building and the Pi 3b hung. I discovered a
    way to temporarily increase the swap file on the fly (no reboot)
    which allowed me to save the build. I'll be using this in the future
    rather than changing the default swap space with /etc/dphys-swapfile
    in the future.

    \# ==================\
    \# Add 3Gb of extra swap\
    \# ==================\
    sudo dd if=/dev/zero of=/var/swap2 bs=3072M count=1024\
    sudo mkswap /var/swap2\
    sudo chmod 0644 /var/swap2\
    sudo swapon /var/swap2

    \# Check it's been added\
    sudo swapon --show

    \# ==================\
    \# Removing the swap file\
    \# ==================\
    sudo swapoff /var/swap2

    \# Check it's been removed -- wait if it hasn't\
    sudo swapon --show

    \# Remove the swap file\
    sudo rm -f /var/swap2
    :::

    ::: {.comment-reply}
    [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-496944){.comment-reply-link}
    :::

    -   ::: {#comment-498632}
        ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/fce240d8373a7943d029baa81c13ca9c.png){.avatar
        .avatar-48 .photo width="48" height="48"
        srcset="https://secure.gravatar.com/avatar/fce240d8373a7943d029baa81c13ca9c?s=96&d=mm&r=g 2x"}[Shaun
        Price]{.comment-author-name}

        [January 30, 2019 at 9:22
        pm](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-498632){.comment-time-link}

        ::: {.comment-content}
        Correction. The first line should have been:\
        sudo dd if=/dev/zero of=/var/swap2 bs=1024 count=3M
        :::

        ::: {.comment-reply}
        [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-498632){.comment-reply-link}
        :::
        :::
    :::

71. ::: {#comment-496967}
    ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/c8231deceb92cffe302d50ef8ee7f0ce.png){.avatar
    .avatar-48 .photo width="48" height="48"
    srcset="https://secure.gravatar.com/avatar/c8231deceb92cffe302d50ef8ee7f0ce?s=96&d=mm&r=g 2x"}[spinoza]{.comment-author-name}

    [January 18, 2019 at 1:11
    pm](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-496967){.comment-time-link}

    ::: {.comment-content}
    Excuse me, there will be some way to optimize opencv and install
    without graphics, I am currently using it for object recognition
    with audio output and I do not require graphics. thanks greetings.
    :::

    ::: {.comment-reply}
    [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-496967){.comment-reply-link}
    :::

    -   ::: {#comment-497452}
        ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/02743529311d3b8babbaf6935670ec9c(1).jpeg){.avatar
        .avatar-48 .photo width="48" height="48"
        srcset="https://secure.gravatar.com/avatar/02743529311d3b8babbaf6935670ec9c?s=96&d=mm&r=g 2x"}[Adrian
        Rosebrock]{.comment-author-name}

        [January 22, 2019 at 9:38
        am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-497452){.comment-time-link}

        ::: {.comment-content}
        Are you referring to a headless install of your Pi and OpenCV?
        :::

        ::: {.comment-reply}
        [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-497452){.comment-reply-link}
        :::
        :::
    :::

72. ::: {#comment-497148}
    ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/5f0fed63c2e906151e7ee244c6c5290f.png){.avatar
    .avatar-48 .photo width="48" height="48"
    srcset="https://secure.gravatar.com/avatar/5f0fed63c2e906151e7ee244c6c5290f?s=96&d=mm&r=g 2x"}[Stephen
    Gloor]{.comment-author-name}

    [January 20, 2019 at 6:57
    am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-497148){.comment-time-link}

    ::: {.comment-content}
    Hi Adrian -- I just wanted to install it without the virtual
    environment as this machine is just going to run scripts not really
    develop them.

    I had to link up the cv2.so with this:

    cd /usr/local/lib/python3.5/dist-packages/\
    ln -s
    /usr/local/python/cv2/python-3.5/cv2.cpython-35m-arm-linux-gnueabihf.so
    cv2.so

    It then worked OK
    :::

    ::: {.comment-reply}
    [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-497148){.comment-reply-link}
    :::
    :::

73. ::: {#comment-497588}
    ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/604e90d0521b04bfc398075b0ac90839.png){.avatar
    .avatar-48 .photo width="48" height="48"
    srcset="https://secure.gravatar.com/avatar/604e90d0521b04bfc398075b0ac90839?s=96&d=mm&r=g 2x"}[Ben]{.comment-author-name}

    [January 23, 2019 at 7:13
    am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-497588){.comment-time-link}

    ::: {.comment-content}
    Hi Adrian

    Firstly, thanks for the tutorial updates; everything's much clearer
    and more comprehensive now. I have two questions regarding virtual
    environments building on things that you have referenced:

    1\. Several of the blogs that you suggest reading re virtual
    environments imply that python's inbuilt (v3.3+) virtual environment
    tool "venv" is better than "virtualenv." Any chance your
    instructions could contain some notes on why you use the older
    "virtualenv" tool and what differs if using "venv" (alternate cmake
    screenshots would be ideal)

    2\. In a couple of your replies above, you briefly mention that you
    use symlinks to make opencv available in multiple virtual
    environments with the same python version without reinstalling a new
    copy of opencv on each one. Any chance you could give more detailed
    instructions on how to do this? I'd really like to know how to make
    environments share site packages of my choosing to save space and am
    struggling to find instructions online.

    Thanks in advance!
    :::

    ::: {.comment-reply}
    [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-497588){.comment-reply-link}
    :::

    -   ::: {#comment-497865}
        ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/02743529311d3b8babbaf6935670ec9c(1).jpeg){.avatar
        .avatar-48 .photo width="48" height="48"
        srcset="https://secure.gravatar.com/avatar/02743529311d3b8babbaf6935670ec9c?s=96&d=mm&r=g 2x"}[Adrian
        Rosebrock]{.comment-author-name}

        [January 25, 2019 at 7:27
        am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-497865){.comment-time-link}

        ::: {.comment-content}
        1\. Whether you use virtualenv or venv is a matter of
        preference. Have you tried using either? What has your personal
        preference been?

        2\. If you're having trouble understanding sym-links I would
        suggest reading the "man ln" documentation first. [Here is
        another simple tutorial](https://kb.iu.edu/d/abbe) you can refer
        to. Try creating your own sym-links to files on your desktop, in
        your documents directory, etc. I get the impression that you may
        be new to Unix systems --- that's totally okay but make sure you
        walk before you run first. Grasp making basic sym-links first
        before you start trying to share files across multiple
        site-packages directories.
        :::

        ::: {.comment-reply}
        [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-497865){.comment-reply-link}
        :::
        :::
    :::

74. ::: {#comment-498023}
    ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/8477c362be729aaad52378b7ddce1527.png){.avatar
    .avatar-48 .photo width="48" height="48"
    srcset="https://secure.gravatar.com/avatar/8477c362be729aaad52378b7ddce1527?s=96&d=mm&r=g 2x"}[Olen]{.comment-author-name}

    [January 26, 2019 at 9:35
    am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-498023){.comment-time-link}

    ::: {.comment-content}
    Hi Adrian,

    My Pi hung up during the compilation at this point : \[100%\] Built
    target opencv\_perf\_superres

    I have increased the SWAP to 2G, I have deleted and created again
    the build folder twice and started the process allover again but it
    always hangs at 99% or 100%

    What else can I try?\
    If I compile with a single core it is certain that it will complete
    the compilation?

    Thanks.
    :::

    ::: {.comment-reply}
    [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-498023){.comment-reply-link}
    :::

    -   ::: {#comment-498365}
        ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/02743529311d3b8babbaf6935670ec9c(1).jpeg){.avatar
        .avatar-48 .photo width="48" height="48"
        srcset="https://secure.gravatar.com/avatar/02743529311d3b8babbaf6935670ec9c?s=96&d=mm&r=g 2x"}[Adrian
        Rosebrock]{.comment-author-name}

        [January 29, 2019 at 6:53
        am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-498365){.comment-time-link}

        ::: {.comment-content}
        Yes, try compiling with a single core --- that should resolve
        the issue.
        :::

        ::: {.comment-reply}
        [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-498365){.comment-reply-link}
        :::

        -   ::: {#comment-498832}
            ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/8b326852449990d98947584f434bf2f0.png){.avatar
            .avatar-48 .photo width="48" height="48"
            srcset="https://secure.gravatar.com/avatar/8b326852449990d98947584f434bf2f0?s=96&d=mm&r=g 2x"}[Virgil]{.comment-author-name}

            [January 31, 2019 at 9:32
            pm](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-498832){.comment-time-link}

            ::: {.comment-content}
            Do i hv to delete the build folder, or i just continue with
            the make command ?
            :::

            ::: {.comment-reply}
            [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-498832){.comment-reply-link}
            :::

            -   ::: {#comment-498915}
                ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/02743529311d3b8babbaf6935670ec9c(1).jpeg){.avatar
                .avatar-48 .photo width="48" height="48"
                srcset="https://secure.gravatar.com/avatar/02743529311d3b8babbaf6935670ec9c?s=96&d=mm&r=g 2x"}[Adrian
                Rosebrock]{.comment-author-name}

                [February 1, 2019 at 6:39
                am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-498915){.comment-time-link}

                ::: {.comment-content}
                I recommend always deleting your "build" directory if
                you compiled with more than one core and your Pi locked
                up. It's hard to say what state the compile was left in.
                Re-create the "build" directory then re-run "cmake" and
                "make"
                :::

                ::: {.comment-reply}
                [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-498915){.comment-reply-link}
                :::
                :::
            :::

        -   ::: {#comment-522619}
            ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/4ad79954143fd8b05d222393515d2c8a.png){.avatar
            .avatar-48 .photo width="48" height="48"
            srcset="https://secure.gravatar.com/avatar/4ad79954143fd8b05d222393515d2c8a?s=96&d=mm&r=g 2x"}[Krishan]{.comment-author-name}

            [June 22, 2019 at 8:32
            am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-522619){.comment-time-link}

            ::: {.comment-content}
            Yes, try compiling with a single core But I stuck at 100%
            :::

            ::: {.comment-reply}
            [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-522619){.comment-reply-link}
            :::

            -   ::: {#comment-523174}
                ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/02743529311d3b8babbaf6935670ec9c(1).jpeg){.avatar
                .avatar-48 .photo width="48" height="48"
                srcset="https://secure.gravatar.com/avatar/02743529311d3b8babbaf6935670ec9c?s=96&d=mm&r=g 2x"}[Adrian
                Rosebrock]{.comment-author-name}

                [June 26, 2019 at 1:39
                pm](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-523174){.comment-time-link}

                ::: {.comment-content}
                If you're still running into issues you might want to
                utilize a [pip install of
                OpenCV.](https://www.pyimagesearch.com/2018/09/19/pip-install-opencv/)
                I also offer a pre-configured Raspbian .img file with
                OpenCV pre-installed inside [Practical Python and
                OpenCV.](https://www.pyimagesearch.com/practical-python-opencv/)
                That .img file will get you up and running with OpenCV
                on the RPi in a matter of minutes.
                :::

                ::: {.comment-reply}
                [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-523174){.comment-reply-link}
                :::
                :::
            :::
        :::
    :::

75. ::: {#comment-498137}
    ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/cedc5a15be9e9b87f41c1a43b66de43d.png){.avatar
    .avatar-48 .photo width="48" height="48"
    srcset="https://secure.gravatar.com/avatar/cedc5a15be9e9b87f41c1a43b66de43d?s=96&d=mm&r=g 2x"}[KH]{.comment-author-name}

    [January 27, 2019 at 6:45
    pm](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-498137){.comment-time-link}

    ::: {.comment-content}
    Hi Adrian, after successfully completing step 7 and the sanity check
    for the version number (it all worked till that point), I tried to
    follow your tutorial "Accessing RPi wth OpenCV" on the capture of
    single image test\_image.py. I was getting the import cv2 error.

    I am using a Win 10 laptop and doing SSH into a headless Pi 3 Model
    B loaded with Stretch Lite, Pixel Desktop and Thonny Python IDE .

    This is what I did to partially solve the problem.

    After the carrying out the following steps:\
    1) typing the follow commands at SSH command line:\
    cd /usr/local/lib/python3.5/dist-packages/\
    ln -s
    /usr/local/python/cv2/python-3.5/cv2.cpython-35m-arm-linux-gnueabihf.so
    cv2.so

    and

    2\) amending the follower in the interpreter parameters in Thonny
    from the default option "The same interpreter which runs Thonny..."
    to "alternative python 3 interpreter or virtual environment"

    and amending the default path from "/usr/bin/python3" to\
    "/usr/bin/python3.5"

    ....

    and then I was able to run your tutorials on capturing a single
    image and also accessing the webcam videostream.

    I mentioned the problem is solved partially only because I can only
    run the python programs in the Pixel GUI desktop environment , not
    the SSH command line.

    I had already followed the instructions left by another forum reader
    to install Xming server on windows and also the ssh -X command and
    also enabled the X11forwarding in the X11 config file. But I still
    get error messages when trying to run the python files in SSH
    command line.\
    The error messages are "connect localhost port 6000: Connection
    refused

    (Image:4413): Gtk-WARNING \*\*: cannot open display: localhost:11.0
    "\
    How can I solve this ?

    Secondly, the partial solution I used seems to suggestion the
    interpreter path in Thonny was not pointing to the ./virtualenv...
    path of the interpreter.\
    How can I solve this problem if I wish to follow your steps in
    working with a virtual environment ?

    Apologies for the long mail, I am seeking help as this is meant for
    a school project.\
    Thank you.
    :::

    ::: {.comment-reply}
    [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-498137){.comment-reply-link}
    :::

    -   ::: {#comment-498356}
        ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/02743529311d3b8babbaf6935670ec9c(1).jpeg){.avatar
        .avatar-48 .photo width="48" height="48"
        srcset="https://secure.gravatar.com/avatar/02743529311d3b8babbaf6935670ec9c?s=96&d=mm&r=g 2x"}[Adrian
        Rosebrock]{.comment-author-name}

        [January 29, 2019 at 6:44
        am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-498356){.comment-time-link}

        ::: {.comment-content}
        You mentioned you are using a headless Pi and that you installed
        X11 on your Windows system. Did you install X11 on your Pi
        though? You'll need X11 installed on the Pi as well.

        As far as Thonny goes I don't use that IDE and I'm not familiar
        with it. If it's like other Python IDEs you can set the Python
        project interpreter to point to your virtual environment. You
        may need to do your own research there.
        :::

        ::: {.comment-reply}
        [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-498356){.comment-reply-link}
        :::

        -   ::: {#comment-498414}
            ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/cedc5a15be9e9b87f41c1a43b66de43d.png){.avatar
            .avatar-48 .photo width="48" height="48"
            srcset="https://secure.gravatar.com/avatar/cedc5a15be9e9b87f41c1a43b66de43d?s=96&d=mm&r=g 2x"}[KH]{.comment-author-name}

            [January 29, 2019 at 1:15
            pm](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-498414){.comment-time-link}

            ::: {.comment-content}
            Hi Adrian, how do I go about installing X11 on the Pi?

            Secondly, is there any Python IDE that you can recommend
            where it is easy to use and install on the Pi in the SSH
            command line environment? I had to resort to using Thonny
            based on what I could google. So far, my difficulty with
            Thonny is I can't seem to amend the path of the interpreter.
            That seems to be what is driving the "missing cv2 " error
            messages when running the python code.

            I started out with the Stretch Lite and installed the Pixel
            desktop with very bare software hence there was no IDLE
            software in it and I am trying to avoid reinstalling the
            Stretch Desktop image if possible.
            :::

            ::: {.comment-reply}
            [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-498414){.comment-reply-link}
            :::

            -   ::: {#comment-498957}
                ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/02743529311d3b8babbaf6935670ec9c(1).jpeg){.avatar
                .avatar-48 .photo width="48" height="48"
                srcset="https://secure.gravatar.com/avatar/02743529311d3b8babbaf6935670ec9c?s=96&d=mm&r=g 2x"}[Adrian
                Rosebrock]{.comment-author-name}

                [February 1, 2019 at 7:25
                am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-498957){.comment-time-link}

                ::: {.comment-content}
                1\. I would suggest you do some research on how to
                install X11 on the Pi. There are a number of different
                packages that you may need to install and I cannot
                answer that directly for you. Take the time do some
                research on how to install X11 on the Pi.

                2\. I would suggest using Sublime Text 2 on the Pi.
                Sublime Text is a nice editor. You may also want to look
                into using PyCharm from your laptop/desktop and have the
                files automatically upload to the Pi.
                :::

                ::: {.comment-reply}
                [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-498957){.comment-reply-link}
                :::
                :::
            :::
        :::

    -   ::: {#comment-527003}
        ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/5da6262b39d6a24a9c454ece02ad08fb.png){.avatar
        .avatar-48 .photo width="48" height="48"
        srcset="https://secure.gravatar.com/avatar/5da6262b39d6a24a9c454ece02ad08fb?s=96&d=mm&r=g 2x"}[Stephen]{.comment-author-name}

        [July 23, 2019 at 8:01
        pm](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-527003){.comment-time-link}

        ::: {.comment-content}
        The big problem with setting up anything inside a Virtual
        Environment on Raspberry Pi is that it you would need to set up
        the IDE to work in a Virtual Environment. I've looked at each of
        the IDEs that come with the Pi and found Thonny to be the only
        one that allowed me to set up the Virtual Environment and run
        OpenCV per directions from here.

        1\. Start Thonny -\> Options -\> Interpreter\
        2. Change to: "Alternative Python 3 Interpreter or Virtual
        Environment\
        3. Set Link by using Locate Another Python Executable\
        4. Click on top of Window where the directory input should be
        and just start typing and the folder user input bar should
        appear.\
        5. Go to : /home/pi/.virtualenvs/

        Select file:\
        /home/pi/.virtualenvs/cv/bin/python3.x

        And now the Virtual Environment should be added to your Thonny
        IDE.
        :::

        ::: {.comment-reply}
        [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-527003){.comment-reply-link}
        :::
        :::
    :::

76. ::: {#comment-498300}
    ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/366f644c6c71cced15b860d8d3bf923f.png){.avatar
    .avatar-48 .photo width="48" height="48"
    srcset="https://secure.gravatar.com/avatar/366f644c6c71cced15b860d8d3bf923f?s=96&d=mm&r=g 2x"}[Sam]{.comment-author-name}

    [January 29, 2019 at 12:08
    am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-498300){.comment-time-link}

    ::: {.comment-content}
    Hello Adrian,

    Thanks a lot for the detailed procedure. I got the CV installed
    finally by making use of the make command without passing the j
    flag.
    :::

    ::: {.comment-reply}
    [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-498300){.comment-reply-link}
    :::

    -   ::: {#comment-498349}
        ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/02743529311d3b8babbaf6935670ec9c(1).jpeg){.avatar
        .avatar-48 .photo width="48" height="48"
        srcset="https://secure.gravatar.com/avatar/02743529311d3b8babbaf6935670ec9c?s=96&d=mm&r=g 2x"}[Adrian
        Rosebrock]{.comment-author-name}

        [January 29, 2019 at 6:34
        am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-498349){.comment-time-link}

        ::: {.comment-content}
        Congrats on getting OpenCV installed on your Pi!
        :::

        ::: {.comment-reply}
        [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-498349){.comment-reply-link}
        :::
        :::
    :::

77. ::: {#comment-498831}
    ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/8b326852449990d98947584f434bf2f0.png){.avatar
    .avatar-48 .photo width="48" height="48"
    srcset="https://secure.gravatar.com/avatar/8b326852449990d98947584f434bf2f0?s=96&d=mm&r=g 2x"}[Virgil]{.comment-author-name}

    [January 31, 2019 at 9:26
    pm](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-498831){.comment-time-link}

    ::: {.comment-content}
    Hey guys, i think i need some help, i try to install the opencv like
    3 or 4 times, but always end up with an error or freeze, thou i
    already try the make and make -j4 command...\
    please help
    :::

    ::: {.comment-reply}
    [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-498831){.comment-reply-link}
    :::

    -   ::: {#comment-498916}
        ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/02743529311d3b8babbaf6935670ec9c(1).jpeg){.avatar
        .avatar-48 .photo width="48" height="48"
        srcset="https://secure.gravatar.com/avatar/02743529311d3b8babbaf6935670ec9c?s=96&d=mm&r=g 2x"}[Adrian
        Rosebrock]{.comment-author-name}

        [February 1, 2019 at 6:39
        am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-498916){.comment-time-link}

        ::: {.comment-content}
        Have you increased your swap size as well?
        :::

        ::: {.comment-reply}
        [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-498916){.comment-reply-link}
        :::
        :::
    :::

78. ::: {#comment-499992}
    ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/65e6585f4b7bfb2ebe9bb17c75276906.jpeg){.avatar
    .avatar-48 .photo width="48" height="48"
    srcset="https://secure.gravatar.com/avatar/65e6585f4b7bfb2ebe9bb17c75276906?s=96&d=mm&r=g 2x"}[Hamza]{.comment-author-name}

    [February 6, 2019 at 10:36
    am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-499992){.comment-time-link}

    ::: {.comment-content}
    Hello everyone, i tried to install opencv4 2 times but again it
    blocks in 100%, i can still move the mouse or write something with
    the keyboard. I don't know what to do, i increased my swap and,
    tried first time with make -j4 , and second time with only make, but
    still doesnt work.\
    i have an rpi 3 B+ and a sd card 16go .
    :::

    ::: {.comment-reply}
    [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-499992){.comment-reply-link}
    :::

    -   ::: {#comment-499997}
        ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/65e6585f4b7bfb2ebe9bb17c75276906.jpeg){.avatar
        .avatar-48 .photo width="48" height="48"
        srcset="https://secure.gravatar.com/avatar/65e6585f4b7bfb2ebe9bb17c75276906?s=96&d=mm&r=g 2x"}[Hamza]{.comment-author-name}

        [February 6, 2019 at 11:02
        am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-499997){.comment-time-link}

        ::: {.comment-content}
        It worked ! , i had to wait longer,

        now, when i open a new terminal and tape ; workon cv

        it does not work till i tape the command before : source
        \~/.profile

        can anyone explain that to me please ?
        :::

        ::: {.comment-reply}
        [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-499997){.comment-reply-link}
        :::

        -   ::: {#comment-500268}
            ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/02743529311d3b8babbaf6935670ec9c(1).jpeg){.avatar
            .avatar-48 .photo width="48" height="48"
            srcset="https://secure.gravatar.com/avatar/02743529311d3b8babbaf6935670ec9c?s=96&d=mm&r=g 2x"}[Adrian
            Rosebrock]{.comment-author-name}

            [February 7, 2019 at 7:03
            am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-500268){.comment-time-link}

            ::: {.comment-content}
            What is the exact error you are getting? Without knowing the
            error I cannot diagnose or provide any suggestions.
            :::

            ::: {.comment-reply}
            [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-500268){.comment-reply-link}
            :::
            :::
        :::
    :::

79. ::: {#comment-500057}
    ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/ed982fbb8329c448df43489c4cc7c654.png){.avatar
    .avatar-48 .photo width="48" height="48"
    srcset="https://secure.gravatar.com/avatar/ed982fbb8329c448df43489c4cc7c654?s=96&d=mm&r=g 2x"}[Jordan]{.comment-author-name}

    [February 6, 2019 at 5:12
    pm](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-500057){.comment-time-link}

    ::: {.comment-content}
    Will this tutorial simply not work on a Raspberry Pi 2 Model B, or
    will it just take a long time?
    :::

    ::: {.comment-reply}
    [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-500057){.comment-reply-link}
    :::

    -   ::: {#comment-500264}
        ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/02743529311d3b8babbaf6935670ec9c(1).jpeg){.avatar
        .avatar-48 .photo width="48" height="48"
        srcset="https://secure.gravatar.com/avatar/02743529311d3b8babbaf6935670ec9c?s=96&d=mm&r=g 2x"}[Adrian
        Rosebrock]{.comment-author-name}

        [February 7, 2019 at 6:58
        am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-500264){.comment-time-link}

        ::: {.comment-content}
        It will take a long time but provided you have Raspbian
        installed, yes, it should work.
        :::

        ::: {.comment-reply}
        [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-500264){.comment-reply-link}
        :::
        :::
    :::

80. ::: {#comment-500372}
    ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/840078c8796815ac4dd68155ede7b2dd.png){.avatar
    .avatar-48 .photo width="48" height="48"
    srcset="https://secure.gravatar.com/avatar/840078c8796815ac4dd68155ede7b2dd?s=96&d=mm&r=g 2x"}[[Ian](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/){.comment-author-link}]{.comment-author-name}

    [February 7, 2019 at 8:23
    pm](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-500372){.comment-time-link}

    ::: {.comment-content}
    Hi\
    I have succesfully installed open cv 4 in my rasp pi 3 via putty.\
    But the problem is that i cannot acces the program when i connect my
    pi directly to my monitor.\
    I hope you can help me.\
    Thx
    :::

    ::: {.comment-reply}
    [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-500372){.comment-reply-link}
    :::

    -   ::: {#comment-501387}
        ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/02743529311d3b8babbaf6935670ec9c(1).jpeg){.avatar
        .avatar-48 .photo width="48" height="48"
        srcset="https://secure.gravatar.com/avatar/02743529311d3b8babbaf6935670ec9c?s=96&d=mm&r=g 2x"}[Adrian
        Rosebrock]{.comment-author-name}

        [February 14, 2019 at 2:59
        pm](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-501387){.comment-time-link}

        ::: {.comment-content}
        It sounds like you may be forgetting to use the "workon" command
        to access your Python virtual environment before executing the
        script.
        :::

        ::: {.comment-reply}
        [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-501387){.comment-reply-link}
        :::
        :::
    :::

81. ::: {#comment-500717}
    ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/2e9abfc30a8183f670c04990860afdee.png){.avatar
    .avatar-48 .photo width="48" height="48"
    srcset="https://secure.gravatar.com/avatar/2e9abfc30a8183f670c04990860afdee?s=96&d=mm&r=g 2x"}[Hariharan]{.comment-author-name}

    [February 10, 2019 at 8:03
    pm](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-500717){.comment-time-link}

    ::: {.comment-content}
    Hey Adrian,

    The compilation always seems to be stuck at "Scanning dependencies
    of target opencv\_python 2" and then produces an error even if I
    increase the swap and use "make -j1".

    Please help me resolve this issue.
    :::

    ::: {.comment-reply}
    [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-500717){.comment-reply-link}
    :::

    -   ::: {#comment-501349}
        ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/02743529311d3b8babbaf6935670ec9c(1).jpeg){.avatar
        .avatar-48 .photo width="48" height="48"
        srcset="https://secure.gravatar.com/avatar/02743529311d3b8babbaf6935670ec9c?s=96&d=mm&r=g 2x"}[Adrian
        Rosebrock]{.comment-author-name}

        [February 14, 2019 at 1:43
        pm](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-501349){.comment-time-link}

        ::: {.comment-content}
        That's definitely strange behavior. What is your exact error?
        :::

        ::: {.comment-reply}
        [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-501349){.comment-reply-link}
        :::
        :::
    :::

82. ::: {#comment-500728}
    ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/2e9abfc30a8183f670c04990860afdee.png){.avatar
    .avatar-48 .photo width="48" height="48"
    srcset="https://secure.gravatar.com/avatar/2e9abfc30a8183f670c04990860afdee?s=96&d=mm&r=g 2x"}[Hariharan
    Gopalakrishnan]{.comment-author-name}

    [February 10, 2019 at 9:47
    pm](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-500728){.comment-time-link}

    ::: {.comment-content}
    Hi Adrian,

    I was successfully able to install OpenCV4 but when I try to import
    cv2 ..."I got import module: no such module name "cv2".

    1\) "workon cv" works.\
    2) There is cv2 symlink directory in site-packages. I\
    3) There is cv2 directory in /usr/local/python .\
    4) I tried the last step indicated in the FAQ section for this
    question.

    Still, cv2 can't be imported please help me.
    :::

    ::: {.comment-reply}
    [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-500728){.comment-reply-link}
    :::

    -   ::: {#comment-501348}
        ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/02743529311d3b8babbaf6935670ec9c(1).jpeg){.avatar
        .avatar-48 .photo width="48" height="48"
        srcset="https://secure.gravatar.com/avatar/02743529311d3b8babbaf6935670ec9c?s=96&d=mm&r=g 2x"}[Adrian
        Rosebrock]{.comment-author-name}

        [February 14, 2019 at 1:42
        pm](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-501348){.comment-time-link}

        ::: {.comment-content}
        Are you in your Python virtual environment via the "workon"
        command before trying to import the "cv2" bindings?
        :::

        ::: {.comment-reply}
        [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-501348){.comment-reply-link}
        :::

        -   ::: {#comment-501615}
            ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/2e9abfc30a8183f670c04990860afdee.png){.avatar
            .avatar-48 .photo width="48" height="48"
            srcset="https://secure.gravatar.com/avatar/2e9abfc30a8183f670c04990860afdee?s=96&d=mm&r=g 2x"}[Hariharan
            Gopalakrishnan]{.comment-author-name}

            [February 15, 2019 at 6:09
            pm](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-501615){.comment-time-link}

            ::: {.comment-content}
            Yes. I was
            :::

            ::: {.comment-reply}
            [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-501615){.comment-reply-link}
            :::

            -   ::: {#comment-502536}
                ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/02743529311d3b8babbaf6935670ec9c(1).jpeg){.avatar
                .avatar-48 .photo width="48" height="48"
                srcset="https://secure.gravatar.com/avatar/02743529311d3b8babbaf6935670ec9c?s=96&d=mm&r=g 2x"}[Adrian
                Rosebrock]{.comment-author-name}

                [February 20, 2019 at 12:49
                pm](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-502536){.comment-time-link}

                ::: {.comment-content}
                Can you import OpenCV *outside* of your Python virtual
                environment? It sounds like at some point your Python
                versions got mixed up or your sym-link was placed in the
                incorrect location. Unfortunately, without access to
                your Pi it's extremely hard to diagnose. I would suggest
                you try again with a fresh install of Raspbian.
                :::

                ::: {.comment-reply}
                [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-502536){.comment-reply-link}
                :::
                :::
            :::
        :::
    :::

83. ::: {#comment-500822}
    ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/cd369749cd611a58d918476c1e703577.png){.avatar
    .avatar-48 .photo width="48" height="48"
    srcset="https://secure.gravatar.com/avatar/cd369749cd611a58d918476c1e703577?s=96&d=mm&r=g 2x"}[John]{.comment-author-name}

    [February 11, 2019 at 10:26
    am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-500822){.comment-time-link}

    ::: {.comment-content}
    hi adrian\
    i am trying to make the use\_dropbox true\
    but when i get in the json file by using the terminal, i dont know
    how to change it\
    can u pls tell me how to enable the use\_dropbox

    thanks
    :::

    ::: {.comment-reply}
    [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-500822){.comment-reply-link}
    :::

    -   ::: {#comment-501336}
        ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/02743529311d3b8babbaf6935670ec9c(1).jpeg){.avatar
        .avatar-48 .photo width="48" height="48"
        srcset="https://secure.gravatar.com/avatar/02743529311d3b8babbaf6935670ec9c?s=96&d=mm&r=g 2x"}[Adrian
        Rosebrock]{.comment-author-name}

        [February 14, 2019 at 1:31
        pm](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-501336){.comment-time-link}

        ::: {.comment-content}
        You can use your favorite text editor to edit the JSON file.
        That could be your terminal (vim, emacs, nano) or a text editor.
        Open up the JSON file and then change the setting.
        :::

        ::: {.comment-reply}
        [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-501336){.comment-reply-link}
        :::
        :::
    :::

84. ::: {#comment-500848}
    ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/91796b73465dbd742aa5621967107e92.jpeg){.avatar
    .avatar-48 .photo width="48" height="48"
    srcset="https://secure.gravatar.com/avatar/91796b73465dbd742aa5621967107e92?s=96&d=mm&r=g 2x"}[Volker
    von Einem]{.comment-author-name}

    [February 11, 2019 at 1:42
    pm](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-500848){.comment-time-link}

    ::: {.comment-content}
    Thank you very much for the great instructions!\
    I installed OpenCV 4.0.1 but didn't do dist upgrade before -- worked
    like a charm with only a few tweaks.
    :::

    ::: {.comment-reply}
    [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-500848){.comment-reply-link}
    :::

    -   ::: {#comment-501334}
        ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/02743529311d3b8babbaf6935670ec9c(1).jpeg){.avatar
        .avatar-48 .photo width="48" height="48"
        srcset="https://secure.gravatar.com/avatar/02743529311d3b8babbaf6935670ec9c?s=96&d=mm&r=g 2x"}[Adrian
        Rosebrock]{.comment-author-name}

        [February 14, 2019 at 1:29
        pm](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-501334){.comment-time-link}

        ::: {.comment-content}
        Fantastic, congrats on getting OpenCV 4 installed on your
        Raspberry Pi!
        :::

        ::: {.comment-reply}
        [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-501334){.comment-reply-link}
        :::
        :::
    :::

85. ::: {#comment-501500}
    ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/6ede5dece2c401fb1c0a44a713335a1f.png){.avatar
    .avatar-48 .photo width="48" height="48"
    srcset="https://secure.gravatar.com/avatar/6ede5dece2c401fb1c0a44a713335a1f?s=96&d=mm&r=g 2x"}[anabelle]{.comment-author-name}

    [February 15, 2019 at 3:07
    am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-501500){.comment-time-link}

    ::: {.comment-content}
    hi,\
    i cant install opencv and opencv contrib. please help.
    :::

    ::: {.comment-reply}
    [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-501500){.comment-reply-link}
    :::

    -   ::: {#comment-501503}
        ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/6ede5dece2c401fb1c0a44a713335a1f.png){.avatar
        .avatar-48 .photo width="48" height="48"
        srcset="https://secure.gravatar.com/avatar/6ede5dece2c401fb1c0a44a713335a1f?s=96&d=mm&r=g 2x"}[anabelle]{.comment-author-name}

        [February 15, 2019 at 3:20
        am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-501503){.comment-time-link}

        ::: {.comment-content}
        it says "wget" not recognised ....im using windows 10.
        :::

        ::: {.comment-reply}
        [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-501503){.comment-reply-link}
        :::

        -   ::: {#comment-501525}
            ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/02743529311d3b8babbaf6935670ec9c(1).jpeg){.avatar
            .avatar-48 .photo width="48" height="48"
            srcset="https://secure.gravatar.com/avatar/02743529311d3b8babbaf6935670ec9c?s=96&d=mm&r=g 2x"}[Adrian
            Rosebrock]{.comment-author-name}

            [February 15, 2019 at 6:12
            am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-501525){.comment-time-link}

            ::: {.comment-content}
            This tutorial is for installing OpenCV 4 on a Raspberry Pi,
            not Windows 10. Make sure you are executing the commands on
            the Pi.
            :::

            ::: {.comment-reply}
            [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-501525){.comment-reply-link}
            :::
            :::
        :::

    -   ::: {#comment-502994}
        ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/9a2971e7236f8188d1760d97b4fb8521.png){.avatar
        .avatar-48 .photo width="48" height="48"
        srcset="https://secure.gravatar.com/avatar/9a2971e7236f8188d1760d97b4fb8521?s=96&d=mm&r=g 2x"}[vamc]{.comment-author-name}

        [February 23, 2019 at 4:50
        am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-502994){.comment-time-link}

        ::: {.comment-content}
        connect to internet then download from github later unzip it
        :::

        ::: {.comment-reply}
        [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-502994){.comment-reply-link}
        :::
        :::
    :::

86. ::: {#comment-501674}
    ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/911c68b1f55c738c2cd67b07ab691a50.png){.avatar
    .avatar-48 .photo width="48" height="48"
    srcset="https://secure.gravatar.com/avatar/911c68b1f55c738c2cd67b07ab691a50?s=96&d=mm&r=g 2x"}[anastasia]{.comment-author-name}

    [February 16, 2019 at 5:52
    am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-501674){.comment-time-link}

    ::: {.comment-content}
    hi Adrian,\
    While compiling open cv, some of the dependencies reached 100% at
    last , but when i go up, some didnt reach 100%....is it normal?
    :::

    ::: {.comment-reply}
    [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-501674){.comment-reply-link}
    :::

    -   ::: {#comment-502533}
        ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/02743529311d3b8babbaf6935670ec9c(1).jpeg){.avatar
        .avatar-48 .photo width="48" height="48"
        srcset="https://secure.gravatar.com/avatar/02743529311d3b8babbaf6935670ec9c?s=96&d=mm&r=g 2x"}[Adrian
        Rosebrock]{.comment-author-name}

        [February 20, 2019 at 12:45
        pm](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-502533){.comment-time-link}

        ::: {.comment-content}
        Was OpenCV able to successfully compile? Or did your Pi freeze
        up and get "stuck"?
        :::

        ::: {.comment-reply}
        [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-502533){.comment-reply-link}
        :::

        -   ::: {#comment-503653}
            ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/6ede5dece2c401fb1c0a44a713335a1f.png){.avatar
            .avatar-48 .photo width="48" height="48"
            srcset="https://secure.gravatar.com/avatar/6ede5dece2c401fb1c0a44a713335a1f?s=96&d=mm&r=g 2x"}[anastasia]{.comment-author-name}

            [February 27, 2019 at 12:54
            am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-503653){.comment-time-link}

            ::: {.comment-content}
            no its ok now..thanks 🙂
            :::

            ::: {.comment-reply}
            [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-503653){.comment-reply-link}
            :::
            :::
        :::
    :::

87. ::: {#comment-501717}
    ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/32d603667bb3fe1eb0b02c73ff313241.png){.avatar
    .avatar-48 .photo width="48" height="48"
    srcset="https://secure.gravatar.com/avatar/32d603667bb3fe1eb0b02c73ff313241?s=96&d=mm&r=g 2x"}[Ivan
    Surya H]{.comment-author-name}

    [February 16, 2019 at 1:10
    pm](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-501717){.comment-time-link}

    ::: {.comment-content}
    hi, I just want to help with error for importing cv2module, actualy
    for me, the location of cv2.cpython-35m-arm-linux-gnueabihf.so is
    not at the Adrian's tutorial where it said "ln -s
    /usr/local/python/cv2/python-3.5/cv2.cpython-35m-arm-linux-gnueabihf.so
    cv2.so"

    so I deleted the old cv2.so and then found new location of
    cv2.cpython-35m-arm-linux-gnueabihf.so

    then the command become like this:\
    ln -s
    /usr/local/lib/python3.5/site-packages/cv2/python-3.5/cv2.cpython-35m-arm-linux-gnueabihf.so
    cv2.so

    Thanks Adrian for the tutorial.

    and it worked like a charm for me.
    :::

    ::: {.comment-reply}
    [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-501717){.comment-reply-link}
    :::

    -   ::: {#comment-513559}
        ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/fbeb639d38b8986c5d192ce120f2cf81.png){.avatar
        .avatar-48 .photo width="48" height="48"
        srcset="https://secure.gravatar.com/avatar/fbeb639d38b8986c5d192ce120f2cf81?s=96&d=mm&r=g 2x"}[Andy]{.comment-author-name}

        [April 18, 2019 at 5:15
        pm](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-513559){.comment-time-link}

        ::: {.comment-content}
        Can confirm, worked for me as well. Thanks Ivan!
        :::

        ::: {.comment-reply}
        [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-513559){.comment-reply-link}
        :::
        :::

    -   ::: {#comment-524885}
        ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/16e8b199bec9e286dec2311d46153791.png){.avatar
        .avatar-48 .photo width="48" height="48"
        srcset="https://secure.gravatar.com/avatar/16e8b199bec9e286dec2311d46153791?s=96&d=mm&r=g 2x"}[Boipelo
        Zuma]{.comment-author-name}

        [July 8, 2019 at 7:53
        am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-524885){.comment-time-link}

        ::: {.comment-content}
        You saved my life! Can reaffirm, this works. Thanks Ivan!
        :::

        ::: {.comment-reply}
        [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-524885){.comment-reply-link}
        :::
        :::
    :::

88. ::: {#comment-501900}
    ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/beab8d060f815c268c67033888ac0ec8.png){.avatar
    .avatar-48 .photo width="48" height="48"
    srcset="https://secure.gravatar.com/avatar/beab8d060f815c268c67033888ac0ec8?s=96&d=mm&r=g 2x"}[Mark]{.comment-author-name}

    [February 17, 2019 at 4:30
    pm](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-501900){.comment-time-link}

    ::: {.comment-content}
    Hi Adrian. Just worked my way through this tutorial, no problems.
    Worked a treat on my Pi 3 B+. Great work. Thanks
    :::

    ::: {.comment-reply}
    [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-501900){.comment-reply-link}
    :::

    -   ::: {#comment-502525}
        ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/02743529311d3b8babbaf6935670ec9c(1).jpeg){.avatar
        .avatar-48 .photo width="48" height="48"
        srcset="https://secure.gravatar.com/avatar/02743529311d3b8babbaf6935670ec9c?s=96&d=mm&r=g 2x"}[Adrian
        Rosebrock]{.comment-author-name}

        [February 20, 2019 at 12:36
        pm](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-502525){.comment-time-link}

        ::: {.comment-content}
        Fantastic, congrats on getting OpenCV installed on your Pi!
        :::

        ::: {.comment-reply}
        [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-502525){.comment-reply-link}
        :::
        :::
    :::

89. ::: {#comment-502668}
    ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/6006810fb5c0cd1ebd1fd12a5a3426ce.png){.avatar
    .avatar-48 .photo width="48" height="48"
    srcset="https://secure.gravatar.com/avatar/6006810fb5c0cd1ebd1fd12a5a3426ce?s=96&d=mm&r=g 2x"}[wpimuhammadali]{.comment-author-name}

    [February 21, 2019 at 4:41
    am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-502668){.comment-time-link}

    ::: {.comment-content}
    dear Adrian, i already install the Opencv as your instruction, and
    is working after installed, moreover at the moment i restart my
    raspberry pi, and write "import cv" is gives error no such command.\
    could you please tell me what is wrong ?\
    thank you in advance
    :::

    ::: {.comment-reply}
    [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-502668){.comment-reply-link}
    :::

    -   ::: {#comment-502832}
        ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/02743529311d3b8babbaf6935670ec9c(1).jpeg){.avatar
        .avatar-48 .photo width="48" height="48"
        srcset="https://secure.gravatar.com/avatar/02743529311d3b8babbaf6935670ec9c?s=96&d=mm&r=g 2x"}[Adrian
        Rosebrock]{.comment-author-name}

        [February 22, 2019 at 6:35
        am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-502832){.comment-time-link}

        ::: {.comment-content}
        The name of the OpenCV bindings is actually "cv2", not "cv". It
        also sounds like you didn't launch a Python shell before trying
        to import.
        :::

        ::: {.comment-reply}
        [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-502832){.comment-reply-link}
        :::
        :::
    :::

90. ::: {#comment-502748}
    ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/3717483f26171b61a4e2154fb37ffbd1.png){.avatar
    .avatar-48 .photo width="48" height="48"
    srcset="https://secure.gravatar.com/avatar/3717483f26171b61a4e2154fb37ffbd1?s=96&d=mm&r=g 2x"}[Miles
    Archer]{.comment-author-name}

    [February 21, 2019 at 6:42
    pm](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-502748){.comment-time-link}

    ::: {.comment-content}
    Thanks for the great write up. Took more than 24 hours to compile on
    a raspi Zero. But it did finish. With hindsight, -j4 is probably not
    a good choice for a single core processor. 😉
    :::

    ::: {.comment-reply}
    [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-502748){.comment-reply-link}
    :::

    -   ::: {#comment-502755}
        ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/3717483f26171b61a4e2154fb37ffbd1.png){.avatar
        .avatar-48 .photo width="48" height="48"
        srcset="https://secure.gravatar.com/avatar/3717483f26171b61a4e2154fb37ffbd1?s=96&d=mm&r=g 2x"}[Miles
        Archer]{.comment-author-name}

        [February 21, 2019 at 8:26
        pm](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-502755){.comment-time-link}

        ::: {.comment-content}
        Whoops. Yeah, it compiled, but it doesn't run. The processor is
        missing NEON support. Looking at other options...
        :::

        ::: {.comment-reply}
        [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-502755){.comment-reply-link}
        :::

        -   ::: {#comment-502817}
            ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/02743529311d3b8babbaf6935670ec9c(1).jpeg){.avatar
            .avatar-48 .photo width="48" height="48"
            srcset="https://secure.gravatar.com/avatar/02743529311d3b8babbaf6935670ec9c?s=96&d=mm&r=g 2x"}[Adrian
            Rosebrock]{.comment-author-name}

            [February 22, 2019 at 6:21
            am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-502817){.comment-time-link}

            ::: {.comment-content}
            Compiling OpenCV on a Raspberry Pi Zero is a royal pain. I
            don't recommend it. The Pi Zero is extremely underpowered
            and isn't a good solution for computer vision. I would
            honestly try to use a Pi 3 if at all possible, the
            performance gains will be significant and it will be far
            easier to install.
            :::

            ::: {.comment-reply}
            [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-502817){.comment-reply-link}
            :::
            :::
        :::
    :::

91. ::: {#comment-502977}
    ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/2d6520ea3ad7ce7d108a7faf5f67a758.png){.avatar
    .avatar-48 .photo width="48" height="48"
    srcset="https://secure.gravatar.com/avatar/2d6520ea3ad7ce7d108a7faf5f67a758?s=96&d=mm&r=g 2x"}[Werner
    Boecker]{.comment-author-name}

    [February 23, 2019 at 2:25
    am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-502977){.comment-time-link}

    ::: {.comment-content}
    Hi Adrian, thanks for this great tutorial. But I have one problem. I
    have done all steps but if I try to import cv2 I will get an error.
    If I check my installed modules using "pip freeze" it shows me only
    numpy. There is an cv2.so file in the site-packages directory of my
    virtualenv but no cv2 directory. The virtualenv works fine and I got
    the (cv) prompt after the workon cv command. What went wrong? Thanks
    for your help and your great work!
    :::

    ::: {.comment-reply}
    [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-502977){.comment-reply-link}
    :::

    -   ::: {#comment-503751}
        ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/02743529311d3b8babbaf6935670ec9c(1).jpeg){.avatar
        .avatar-48 .photo width="48" height="48"
        srcset="https://secure.gravatar.com/avatar/02743529311d3b8babbaf6935670ec9c?s=96&d=mm&r=g 2x"}[Adrian
        Rosebrock]{.comment-author-name}

        [February 27, 2019 at 6:19
        am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-503751){.comment-time-link}

        ::: {.comment-content}
        Unless you installed OpenCV via "pip" you will not see OpenCV
        listed in the output of "pip freeze". Double-check that your
        sym-link is a valid one, it's likely that the sym-link is
        pointing to a file that doesn't exist.
        :::

        ::: {.comment-reply}
        [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-503751){.comment-reply-link}
        :::

        -   ::: {#comment-505495}
            ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/0a76f01d9efa45a6f3d10e7573508505.png){.avatar
            .avatar-48 .photo width="48" height="48"
            srcset="https://secure.gravatar.com/avatar/0a76f01d9efa45a6f3d10e7573508505?s=96&d=mm&r=g 2x"}[Justin
            Gruber]{.comment-author-name}

            [March 7, 2019 at 8:30
            pm](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-505495){.comment-time-link}

            ::: {.comment-content}
            I am having a similar issue as the original post. I had few
            questions regarding the symbolic link as well. I understand
            where the file that is first stated in the line
            "/usr/local/python/cv2/python-3.5/cv2.cpython-35m-arm-linux-gnueabihf.so"
            is located but what is the file location of the "cv2.so"
            that the symbolic link is being created with? Is that the
            cv2.so file that is located in the virtual environment?
            :::

            ::: {.comment-reply}
            [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-505495){.comment-reply-link}
            :::

            -   ::: {#comment-505567}
                ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/02743529311d3b8babbaf6935670ec9c(1).jpeg){.avatar
                .avatar-48 .photo width="48" height="48"
                srcset="https://secure.gravatar.com/avatar/02743529311d3b8babbaf6935670ec9c?s=96&d=mm&r=g 2x"}[Adrian
                Rosebrock]{.comment-author-name}

                [March 8, 2019 at 5:22
                am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-505567){.comment-time-link}

                ::: {.comment-content}
                The location of where the sym-link should reside is the
                "site-packages" directory of your Python virtual
                environment:

                `/home/pi/.virtualenvs/your_env_name/lib/python/site-packages`
                :::

                ::: {.comment-reply}
                [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-505567){.comment-reply-link}
                :::
                :::
            :::
        :::
    :::

92. ::: {#comment-503289}
    ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/b4d669acfe90cd77664fe7a1b661acb4.png){.avatar
    .avatar-48 .photo width="48" height="48"
    srcset="https://secure.gravatar.com/avatar/b4d669acfe90cd77664fe7a1b661acb4?s=96&d=mm&r=g 2x"}[Ravindra
    Patil]{.comment-author-name}

    [February 25, 2019 at 3:13
    am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-503289){.comment-time-link}

    ::: {.comment-content}
    Adrian sir, can i use the raspberry pi with this opencv4 and python3
    virtual installation for practical projects and how can i access
    this isolated environment please give detailed information.
    :::

    ::: {.comment-reply}
    [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-503289){.comment-reply-link}
    :::

    -   ::: {#comment-503732}
        ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/02743529311d3b8babbaf6935670ec9c(1).jpeg){.avatar
        .avatar-48 .photo width="48" height="48"
        srcset="https://secure.gravatar.com/avatar/02743529311d3b8babbaf6935670ec9c?s=96&d=mm&r=g 2x"}[Adrian
        Rosebrock]{.comment-author-name}

        [February 27, 2019 at 5:59
        am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-503732){.comment-time-link}

        ::: {.comment-content}
        Yes, you can use this method with multiple OpenCV versions
        installed. Just create a new Python virtual environment for each
        OpenCV version you want installed. Compile and then sym-link in
        your bindings to the "site-packages" directory of the Python
        virtual environment.
        :::

        ::: {.comment-reply}
        [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-503732){.comment-reply-link}
        :::
        :::
    :::

93. ::: {#comment-503295}
    ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/b4d669acfe90cd77664fe7a1b661acb4.png){.avatar
    .avatar-48 .photo width="48" height="48"
    srcset="https://secure.gravatar.com/avatar/b4d669acfe90cd77664fe7a1b661acb4?s=96&d=mm&r=g 2x"}[Ravindra
    Patil]{.comment-author-name}

    [February 25, 2019 at 3:50
    am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-503295){.comment-time-link}

    ::: {.comment-content}
    i want to run my opencv python code in python 3 idle and dont want
    virtual enviornment so what changes should i does in the above
    procedure please answer sir
    :::

    ::: {.comment-reply}
    [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-503295){.comment-reply-link}
    :::

    -   ::: {#comment-503731}
        ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/02743529311d3b8babbaf6935670ec9c(1).jpeg){.avatar
        .avatar-48 .photo width="48" height="48"
        srcset="https://secure.gravatar.com/avatar/02743529311d3b8babbaf6935670ec9c?s=96&d=mm&r=g 2x"}[Adrian
        Rosebrock]{.comment-author-name}

        [February 27, 2019 at 5:58
        am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-503731){.comment-time-link}

        ::: {.comment-content}
        Python IDLE does not respect Python virtual environments. I
        would suggest you use Jupyter Notebooks instead.
        :::

        ::: {.comment-reply}
        [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-503731){.comment-reply-link}
        :::
        :::
    :::

94. ::: {#comment-503387}
    ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/98b4f00374857c1a44d02f49c4dc5e43.png){.avatar
    .avatar-48 .photo width="48" height="48"
    srcset="https://secure.gravatar.com/avatar/98b4f00374857c1a44d02f49c4dc5e43?s=96&d=mm&r=g 2x"}[Javier]{.comment-author-name}

    [February 25, 2019 at 5:20
    pm](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-503387){.comment-time-link}

    ::: {.comment-content}
    Hi Adrian,\
    I found a raspberry with OpenCV 4.0.0 alpha that i should have
    installed last year.\
    And now i want to build the face recognition that you made. Do you
    sugest me to continue with this "alpha version"?? or should i update
    it to the latest.\
    If i have to update it, should a update/upgrade command be enough?
    or i have to installed from the beginning.

    Thanks a lot
    :::

    ::: {.comment-reply}
    [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-503387){.comment-reply-link}
    :::

    -   ::: {#comment-503722}
        ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/02743529311d3b8babbaf6935670ec9c(1).jpeg){.avatar
        .avatar-48 .photo width="48" height="48"
        srcset="https://secure.gravatar.com/avatar/02743529311d3b8babbaf6935670ec9c?s=96&d=mm&r=g 2x"}[Adrian
        Rosebrock]{.comment-author-name}

        [February 27, 2019 at 5:50
        am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-503722){.comment-time-link}

        ::: {.comment-content}
        You won't be able to update/upgrade, you need to download the
        source code of OpenCV 4 that you would like to utilize then
        compile it.
        :::

        ::: {.comment-reply}
        [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-503722){.comment-reply-link}
        :::
        :::
    :::

95. ::: {#comment-503658}
    ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/bd7f19b403822732027481bddcde37ab.png){.avatar
    .avatar-48 .photo width="48" height="48"
    srcset="https://secure.gravatar.com/avatar/bd7f19b403822732027481bddcde37ab?s=96&d=mm&r=g 2x"}[Amrin]{.comment-author-name}

    [February 27, 2019 at 1:37
    am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-503658){.comment-time-link}

    ::: {.comment-content}
    Hi, I've been trying to compile opencv on rpi zero w...and it is
    stuck at 100% Building CXX object
    modules/python2/CMakeFiles/opencv\_python2.dir/\_\_/src2/cv2.cpp.o
    for about a day now ?

    So I've tried remake it using make (single threading) but still
    stuck there...swap file is 2048mb...the pi is not freezing, it is
    still responsive
    :::

    ::: {.comment-reply}
    [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-503658){.comment-reply-link}
    :::

    -   ::: {#comment-503695}
        ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/02743529311d3b8babbaf6935670ec9c(1).jpeg){.avatar
        .avatar-48 .photo width="48" height="48"
        srcset="https://secure.gravatar.com/avatar/02743529311d3b8babbaf6935670ec9c?s=96&d=mm&r=g 2x"}[Adrian
        Rosebrock]{.comment-author-name}

        [February 27, 2019 at 5:29
        am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-503695){.comment-time-link}

        ::: {.comment-content}
        Compiling and installing OpenCV on a Pi Zero W can be a huge
        pain --- my only suggestion here would be to increase your swap
        size again.
        :::

        ::: {.comment-reply}
        [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-503695){.comment-reply-link}
        :::
        :::
    :::

96. ::: {#comment-505801}
    ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/80a2286a020e98bf7f46af5fec98f092.png){.avatar
    .avatar-48 .photo width="48" height="48"
    srcset="https://secure.gravatar.com/avatar/80a2286a020e98bf7f46af5fec98f092?s=96&d=mm&r=g 2x"}[Arbaz
    Pathan]{.comment-author-name}

    [March 9, 2019 at 1:20
    pm](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-505801){.comment-time-link}

    ::: {.comment-content}
    Hi Adrian,\
    I completely followed the steps, but while compiling the opencv it
    got stuck after completing 100%. From where should I resume
    :::

    ::: {.comment-reply}
    [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-505801){.comment-reply-link}
    :::

    -   ::: {#comment-506566}
        ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/02743529311d3b8babbaf6935670ec9c(1).jpeg){.avatar
        .avatar-48 .photo width="48" height="48"
        srcset="https://secure.gravatar.com/avatar/02743529311d3b8babbaf6935670ec9c?s=96&d=mm&r=g 2x"}[Adrian
        Rosebrock]{.comment-author-name}

        [March 13, 2019 at 3:52
        pm](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-506566){.comment-time-link}

        ::: {.comment-content}
        Try re-compiling but this time:

        1\. Increase your swap size to 2048MB\
        2. Compile with a single core

        The compile will take longer but shouldn't freeze.
        :::

        ::: {.comment-reply}
        [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-506566){.comment-reply-link}
        :::
        :::
    :::

97. ::: {#comment-505900}
    ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/7da4ce2563d59cb9abf20dc597301f94.png){.avatar
    .avatar-48 .photo width="48" height="48"
    srcset="https://secure.gravatar.com/avatar/7da4ce2563d59cb9abf20dc597301f94?s=96&d=mm&r=g 2x"}[gülce]{.comment-author-name}

    [March 10, 2019 at 7:39
    am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-505900){.comment-time-link}

    ::: {.comment-content}
    Hi Adrian,\
    I had an error too in the j4 command. my raspberry freezed and i
    closed the command window. Then when I restarted raspberry It worked
    too slowly. Why is that? any suggestions?
    :::

    ::: {.comment-reply}
    [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-505900){.comment-reply-link}
    :::

    -   ::: {#comment-505915}
        ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/7da4ce2563d59cb9abf20dc597301f94.png){.avatar
        .avatar-48 .photo width="48" height="48"
        srcset="https://secure.gravatar.com/avatar/7da4ce2563d59cb9abf20dc597301f94?s=96&d=mm&r=g 2x"}[gülce]{.comment-author-name}

        [March 10, 2019 at 9:44
        am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-505915){.comment-time-link}

        ::: {.comment-content}
        Hi again,\
        After some errors I finally install open cv. Thanks to you!\
        Meanwhile, pi is slower than before opencv installation. Is
        there any thing to do for this?
        :::

        ::: {.comment-reply}
        [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-505915){.comment-reply-link}
        :::

        -   ::: {#comment-506559}
            ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/02743529311d3b8babbaf6935670ec9c(1).jpeg){.avatar
            .avatar-48 .photo width="48" height="48"
            srcset="https://secure.gravatar.com/avatar/02743529311d3b8babbaf6935670ec9c?s=96&d=mm&r=g 2x"}[Adrian
            Rosebrock]{.comment-author-name}

            [March 13, 2019 at 3:43
            pm](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-506559){.comment-time-link}

            ::: {.comment-content}
            Congrats on getting OpenCV installed on your Pi, nice job!
            :::

            ::: {.comment-reply}
            [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-506559){.comment-reply-link}
            :::
            :::
        :::
    :::

98. ::: {#comment-506069}
    ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/22ada9bf3e04832c843138fa769e1e71.png){.avatar
    .avatar-48 .photo width="48" height="48"
    srcset="https://secure.gravatar.com/avatar/22ada9bf3e04832c843138fa769e1e71?s=96&d=mm&r=g 2x"}[sweetsouce]{.comment-author-name}

    [March 11, 2019 at 8:37
    am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-506069){.comment-time-link}

    ::: {.comment-content}
    Is it possible to install opencv\_contrib after installing opencv? I
    am running rasbian stretch on 8GB sd card and need to preserve
    memory as much as possible, so I was thinking of installing opencv
    first then delete contents of build and then building
    opencv\_contrib. Can you help?
    :::

    ::: {.comment-reply}
    [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-506069){.comment-reply-link}
    :::

    -   ::: {#comment-506551}
        ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/02743529311d3b8babbaf6935670ec9c(1).jpeg){.avatar
        .avatar-48 .photo width="48" height="48"
        srcset="https://secure.gravatar.com/avatar/02743529311d3b8babbaf6935670ec9c?s=96&d=mm&r=g 2x"}[Adrian
        Rosebrock]{.comment-author-name}

        [March 13, 2019 at 3:37
        pm](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-506551){.comment-time-link}

        ::: {.comment-content}
        No, you will need to re-compile and re-install OpenCV,
        unfortunately.
        :::

        ::: {.comment-reply}
        [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-506551){.comment-reply-link}
        :::
        :::
    :::

99. ::: {#comment-507496}
    ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/56bb311c4794a155eeb63011cc0f9e09.png){.avatar
    .avatar-48 .photo width="48" height="48"
    srcset="https://secure.gravatar.com/avatar/56bb311c4794a155eeb63011cc0f9e09?s=96&d=mm&r=g 2x"}[kumar]{.comment-author-name}

    [March 18, 2019 at 11:47
    am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-507496){.comment-time-link}

    ::: {.comment-content}
    I want to install Open CV 4.0 without a virtual environment in
    raspberry-pi. may I know what setups to flow?.
    :::

    ::: {.comment-reply}
    [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-507496){.comment-reply-link}
    :::
    :::

100. ::: {#comment-509029}
     ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/9c07fbf961e1262aad84bff2b2ad3bd6.png){.avatar
     .avatar-48 .photo width="48" height="48"
     srcset="https://secure.gravatar.com/avatar/9c07fbf961e1262aad84bff2b2ad3bd6?s=96&d=mm&r=g 2x"}[Keyur
     Modi]{.comment-author-name}

     [March 25, 2019 at 7:22
     am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-509029){.comment-time-link}

     ::: {.comment-content}
     Thanks you so much. I successfully installed OpenCV4.
     :::

     ::: {.comment-reply}
     [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-509029){.comment-reply-link}
     :::

     -   ::: {#comment-509423}
         ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/02743529311d3b8babbaf6935670ec9c(1).jpeg){.avatar
         .avatar-48 .photo width="48" height="48"
         srcset="https://secure.gravatar.com/avatar/02743529311d3b8babbaf6935670ec9c?s=96&d=mm&r=g 2x"}[Adrian
         Rosebrock]{.comment-author-name}

         [March 27, 2019 at 8:53
         am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-509423){.comment-time-link}

         ::: {.comment-content}
         Congrats on getting OpenCV 4 installed on your Pi! Nice job.
         :::

         ::: {.comment-reply}
         [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-509423){.comment-reply-link}
         :::
         :::
     :::

101. ::: {#comment-509577}
     ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/27e123e70957d78a426de6aca11ca123.png){.avatar
     .avatar-48 .photo width="48" height="48"
     srcset="https://secure.gravatar.com/avatar/27e123e70957d78a426de6aca11ca123?s=96&d=mm&r=g 2x"}[Kartik
     Kharbanda]{.comment-author-name}

     [March 27, 2019 at 7:41
     pm](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-509577){.comment-time-link}

     ::: {.comment-content}
     Hi Adrian I followed your steps exactly the way they are but when i
     run the make -j4 command the raspberry pi freezes and I know you
     said to just type in make if it does that but it also freezes when
     i type in make by itself. it gets to a 100% and freezes and I can't
     get past that. Any way of fixing the issue?
     :::

     ::: {.comment-reply}
     [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-509577){.comment-reply-link}
     :::

     -   ::: {#comment-510641}
         ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/02743529311d3b8babbaf6935670ec9c(1).jpeg){.avatar
         .avatar-48 .photo width="48" height="48"
         srcset="https://secure.gravatar.com/avatar/02743529311d3b8babbaf6935670ec9c?s=96&d=mm&r=g 2x"}[Adrian
         Rosebrock]{.comment-author-name}

         [April 2, 2019 at 6:38
         am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-510641){.comment-time-link}

         ::: {.comment-content}
         Try using "make -j1" instead to compile with just a single
         core.
         :::

         ::: {.comment-reply}
         [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-510641){.comment-reply-link}
         :::
         :::
     :::

102. ::: {#comment-510246}
     ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/8756579c57a665799fbb3fad443af2ff.png){.avatar
     .avatar-48 .photo width="48" height="48"
     srcset="https://secure.gravatar.com/avatar/8756579c57a665799fbb3fad443af2ff?s=96&d=mm&r=g 2x"}[jmr]{.comment-author-name}

     [March 31, 2019 at 10:13
     am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-510246){.comment-time-link}

     ::: {.comment-content}
     Hi Adrian,

     thanks so much for your installation instuctions. I did both the
     Mac and the Raspi installation and they worked right away, so I
     could run the 2 sample projects.\
     From other experiences I made, I can estimate and value the amount
     of time you saved me.

     Looking forward to learning how to implement my own project.
     :::

     ::: {.comment-reply}
     [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-510246){.comment-reply-link}
     :::

     -   ::: {#comment-510591}
         ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/02743529311d3b8babbaf6935670ec9c(1).jpeg){.avatar
         .avatar-48 .photo width="48" height="48"
         srcset="https://secure.gravatar.com/avatar/02743529311d3b8babbaf6935670ec9c?s=96&d=mm&r=g 2x"}[Adrian
         Rosebrock]{.comment-author-name}

         [April 2, 2019 at 5:58
         am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-510591){.comment-time-link}

         ::: {.comment-content}
         Congrats on getting OpenCV 4 installed on your Pi, nice job!
         :::

         ::: {.comment-reply}
         [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-510591){.comment-reply-link}
         :::
         :::
     :::

103. ::: {#comment-510402}
     ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/e4a10dda0b63d5fbf8dfa5f6c1349df4.png){.avatar
     .avatar-48 .photo width="48" height="48"
     srcset="https://secure.gravatar.com/avatar/e4a10dda0b63d5fbf8dfa5f6c1349df4?s=96&d=mm&r=g 2x"}[Karl]{.comment-author-name}

     [April 1, 2019 at 10:39
     am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-510402){.comment-time-link}

     ::: {.comment-content}
     Hi Adrian, what a great tutorial.

     Like others, I am hung on the make step at about 92% compete. The
     machine is totally unresponsive.

     I'm going to try increasing the swap file size to 2048 like others
     have done. My question is: do I need to do anything special to
     clean up after the failed make before trying it again?

     Many thanks for all that you do.
     :::

     ::: {.comment-reply}
     [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-510402){.comment-reply-link}
     :::

     -   ::: {#comment-510581}
         ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/02743529311d3b8babbaf6935670ec9c(1).jpeg){.avatar
         .avatar-48 .photo width="48" height="48"
         srcset="https://secure.gravatar.com/avatar/02743529311d3b8babbaf6935670ec9c?s=96&d=mm&r=g 2x"}[Adrian
         Rosebrock]{.comment-author-name}

         [April 2, 2019 at 5:51
         am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-510581){.comment-time-link}

         ::: {.comment-content}
         You can try to restart the compile but this time use just "make
         -j1" to compile with only a single core.
         :::

         ::: {.comment-reply}
         [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-510581){.comment-reply-link}
         :::
         :::
     :::

104. ::: {#comment-510927}
     ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/558e98b2823ea51075e11461220c5c1a.png){.avatar
     .avatar-48 .photo width="48" height="48"
     srcset="https://secure.gravatar.com/avatar/558e98b2823ea51075e11461220c5c1a?s=96&d=mm&r=g 2x"}[Peter]{.comment-author-name}

     [April 3, 2019 at 2:06
     pm](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-510927){.comment-time-link}

     ::: {.comment-content}
     If I will install OpenCV according to your tutorial will I be able
     to write code in C++ with openCV libraries and then compile it or I
     have to use python?
     :::

     ::: {.comment-reply}
     [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-510927){.comment-reply-link}
     :::

     -   ::: {#comment-511113}
         ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/02743529311d3b8babbaf6935670ec9c(1).jpeg){.avatar
         .avatar-48 .photo width="48" height="48"
         srcset="https://secure.gravatar.com/avatar/02743529311d3b8babbaf6935670ec9c?s=96&d=mm&r=g 2x"}[Adrian
         Rosebrock]{.comment-author-name}

         [April 4, 2019 at 1:15
         pm](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-511113){.comment-time-link}

         ::: {.comment-content}
         You will be able to use both C++ and Python.
         :::

         ::: {.comment-reply}
         [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-511113){.comment-reply-link}
         :::
         :::
     :::

105. ::: {#comment-512955}
     ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/fbeb639d38b8986c5d192ce120f2cf81.png){.avatar
     .avatar-48 .photo width="48" height="48"
     srcset="https://secure.gravatar.com/avatar/fbeb639d38b8986c5d192ce120f2cf81?s=96&d=mm&r=g 2x"}[Andy]{.comment-author-name}

     [April 15, 2019 at 12:56
     pm](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-512955){.comment-time-link}

     ::: {.comment-content}
     Hi Adrian, im following your tutorial, but when I run the CMake,
     the "OPENCV\_ENABLE\_NONFREE=ON" flag doesnt seem to work, as it
     does not enable the non free aspects (wich I really need for my
     current project).

     Any advice?
     :::

     ::: {.comment-reply}
     [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-512955){.comment-reply-link}
     :::
     :::

106. ::: {#comment-513517}
     ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/2f9c47c9b2b116ebda6efcfe296477be.png){.avatar
     .avatar-48 .photo width="48" height="48"
     srcset="https://secure.gravatar.com/avatar/2f9c47c9b2b116ebda6efcfe296477be?s=96&d=mm&r=g 2x"}[Bob
     H]{.comment-author-name}

     [April 18, 2019 at 10:06
     am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-513517){.comment-time-link}

     ::: {.comment-content}
     I installed per your instructions last night and everything seemed
     to work but when I ran the check in the tutorial I got the
     following error:

     AttributeError: module 'cv2' has no attribute '\_version\_'

     I thought it might be my linking but I double checked the paths so
     it should be correct. Any ideas on what to do next?

     (Also have not done the symbolic link thing before. Can a link be
     removed if its wrong?)
     :::

     ::: {.comment-reply}
     [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-513517){.comment-reply-link}
     :::

     -   ::: {#comment-514752}
         ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/02743529311d3b8babbaf6935670ec9c(1).jpeg){.avatar
         .avatar-48 .photo width="48" height="48"
         srcset="https://secure.gravatar.com/avatar/02743529311d3b8babbaf6935670ec9c?s=96&d=mm&r=g 2x"}[Adrian
         Rosebrock]{.comment-author-name}

         [April 25, 2019 at 9:37
         am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-514752){.comment-time-link}

         ::: {.comment-content}
         This is almost definitely a sym-link issue of some sort. Can
         you import the "cv2" library correctly from your "build/lib"
         directory?
         :::

         ::: {.comment-reply}
         [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-514752){.comment-reply-link}
         :::
         :::
     :::

107. ::: {#comment-514901}
     ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/5f3d11152dde0a561e687af7b3945ad3.png){.avatar
     .avatar-48 .photo width="48" height="48"
     srcset="https://secure.gravatar.com/avatar/5f3d11152dde0a561e687af7b3945ad3?s=96&d=mm&r=g 2x"}[Wassim
     racheh]{.comment-author-name}

     [April 26, 2019 at 2:05
     pm](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-514901){.comment-time-link}

     ::: {.comment-content}
     Hello, i'm trying to install opencv4 on my raspberry pi 3 b+, i was
     following all the steps,\
     But the build stucks at 100%,\
     \[100%\] Built target opencv \_perf\_stitching\
     I incresed the swapfile to 2048 and i tryed make-j1, make and make
     -j4 but always the same prob it stucks at 100%\
     Ps: i stil can use my pi still responsive.\
     I need help please it's for my final project and thanks.
     :::

     ::: {.comment-reply}
     [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-514901){.comment-reply-link}
     :::

     -   ::: {#comment-520607}
         ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/485b39799bbbbdda9b8bc77860ec2511.png){.avatar
         .avatar-48 .photo width="48" height="48"
         srcset="https://secure.gravatar.com/avatar/485b39799bbbbdda9b8bc77860ec2511?s=96&d=mm&r=g 2x"}[Cai]{.comment-author-name}

         [June 3, 2019 at 5:31
         am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-520607){.comment-time-link}

         ::: {.comment-content}
         just wait, it does not stuck, it just Needs a little bit time.
         :::

         ::: {.comment-reply}
         [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-520607){.comment-reply-link}
         :::
         :::
     :::

108. ::: {#comment-515406}
     ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/c8e2b51a56e55e38a0d7a4762a64ab53.jpeg){.avatar
     .avatar-48 .photo width="48" height="48"
     srcset="https://secure.gravatar.com/avatar/c8e2b51a56e55e38a0d7a4762a64ab53?s=96&d=mm&r=g 2x"}[Andrwe
     C]{.comment-author-name}

     [April 30, 2019 at 8:42
     am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-515406){.comment-time-link}

     ::: {.comment-content}
     I just had the same issue, the paths are a bit different than the
     examples shown above. Just verify your path and your symbolic link
     will work.
     :::

     ::: {.comment-reply}
     [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-515406){.comment-reply-link}
     :::

     -   ::: {#comment-516835}
         ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/eef92f9b05d0120f51fe23b2a57a59d7.png){.avatar
         .avatar-48 .photo width="48" height="48"
         srcset="https://secure.gravatar.com/avatar/eef92f9b05d0120f51fe23b2a57a59d7?s=96&d=mm&r=g 2x"}[diana
         cuevas]{.comment-author-name}

         [May 9, 2019 at 9:32
         pm](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-516835){.comment-time-link}

         ::: {.comment-content}
         I have the same problem as wassim, what do you mean by the
         paths are different?
         :::

         ::: {.comment-reply}
         [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-516835){.comment-reply-link}
         :::
         :::
     :::

109. ::: {#comment-516094}
     ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/d1572807be462715cc34e0924c552e06.png){.avatar
     .avatar-48 .photo width="48" height="48"
     srcset="https://secure.gravatar.com/avatar/d1572807be462715cc34e0924c552e06?s=96&d=mm&r=g 2x"}[[Ronald
     Mourant](https://medium.com/@ronm333){.comment-author-link}]{.comment-author-name}

     [May 5, 2019 at 7:09
     am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-516094){.comment-time-link}

     ::: {.comment-content}
     When I tried to install numpy with the statement\
     \$ pip install numpy\
     I got a code 1 error.

     Then I tried:\
     \$ pip install 'numpy==1.15'\
     and it worked!
     :::

     ::: {.comment-reply}
     [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-516094){.comment-reply-link}
     :::

     -   ::: {#comment-530571}
         ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/d1df74cda9344a02357820c3025a5853.png){.avatar
         .avatar-48 .photo width="48" height="48"
         srcset="https://secure.gravatar.com/avatar/d1df74cda9344a02357820c3025a5853?s=96&d=mm&r=g 2x"}[Roberto
         Alini]{.comment-author-name}

         [August 3, 2019 at 7:24
         pm](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-530571){.comment-time-link}

         ::: {.comment-content}
         Thanks Ronald for the suggestion. It worked also for me but the
         command is without thick ' otherwise it gives me error

         \$ pip install numpy==1.15
         :::

         ::: {.comment-reply}
         [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-530571){.comment-reply-link}
         :::
         :::
     :::

110. ::: {#comment-518258}
     ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/bb229f202d78e4520a89a79a63b2c99c.png){.avatar
     .avatar-48 .photo width="48" height="48"
     srcset="https://secure.gravatar.com/avatar/bb229f202d78e4520a89a79a63b2c99c?s=96&d=mm&r=g 2x"}[Aj]{.comment-author-name}

     [May 19, 2019 at 12:39
     am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-518258){.comment-time-link}

     ::: {.comment-content}
     Hi Adrian ,

     I am done with the entire steps as specified above with no errors
     but yet import error is thrown when i import cv2 , can someone help
     me out ?
     :::

     ::: {.comment-reply}
     [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-518258){.comment-reply-link}
     :::

     -   ::: {#comment-518930}
         ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/02743529311d3b8babbaf6935670ec9c(1).jpeg){.avatar
         .avatar-48 .photo width="48" height="48"
         srcset="https://secure.gravatar.com/avatar/02743529311d3b8babbaf6935670ec9c?s=96&d=mm&r=g 2x"}[Adrian
         Rosebrock]{.comment-author-name}

         [May 23, 2019 at 9:55
         am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-518930){.comment-time-link}

         ::: {.comment-content}
         What steps from the "Troubleshooting and Frequently Asked
         Questions (FAQ)" section have you tried?
         :::

         ::: {.comment-reply}
         [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-518930){.comment-reply-link}
         :::
         :::
     :::

111. ::: {#comment-519581}
     ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/1a4bcf015e96a4c379abefaa29753859.png){.avatar
     .avatar-48 .photo width="48" height="48"
     srcset="https://secure.gravatar.com/avatar/1a4bcf015e96a4c379abefaa29753859?s=96&d=mm&r=g 2x"}[Ambarish]{.comment-author-name}

     [May 28, 2019 at 8:09
     am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-519581){.comment-time-link}

     ::: {.comment-content}
     Is there anyway to install opencv 4 for jetson nano? I have tried
     it but I end with error and not compiling. So can I use the same
     method for even jetson nano?
     :::

     ::: {.comment-reply}
     [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-519581){.comment-reply-link}
     :::

     -   ::: {#comment-519923}
         ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/02743529311d3b8babbaf6935670ec9c(1).jpeg){.avatar
         .avatar-48 .photo width="48" height="48"
         srcset="https://secure.gravatar.com/avatar/02743529311d3b8babbaf6935670ec9c?s=96&d=mm&r=g 2x"}[Adrian
         Rosebrock]{.comment-author-name}

         [May 30, 2019 at 9:14
         am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-519923){.comment-time-link}

         ::: {.comment-content}
         See the comments of [this
         post.](https://www.pyimagesearch.com/2019/05/06/getting-started-with-the-nvidia-jetson-nano/)
         :::

         ::: {.comment-reply}
         [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-519923){.comment-reply-link}
         :::
         :::
     :::

112. ::: {#comment-520248}
     ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/e8558f1519da8ec7759abcc59a2edee1.png){.avatar
     .avatar-48 .photo width="48" height="48"
     srcset="https://secure.gravatar.com/avatar/e8558f1519da8ec7759abcc59a2edee1?s=96&d=mm&r=g 2x"}[Cai]{.comment-author-name}

     [May 31, 2019 at 5:34
     am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-520248){.comment-time-link}

     ::: {.comment-content}
     Hi Adrian. Thanks a lot for that amazing guide! But I got a Problem
     with GUI/GTK installation. "Unable to fetch some archives, maybe
     run apt-get update or try with --fix-missing?" Even I tried update
     it still dosen't work. Then I just went on with the other part, and
     the other went well. Now I can import opencv, and see the vision.
     But when I do other like preview something relevant with GUI/GTK,
     then I get BUG. Do you know how can I fix it? Thanks:)
     :::

     ::: {.comment-reply}
     [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-520248){.comment-reply-link}
     :::

     -   ::: {#comment-521052}
         ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/02743529311d3b8babbaf6935670ec9c(1).jpeg){.avatar
         .avatar-48 .photo width="48" height="48"
         srcset="https://secure.gravatar.com/avatar/02743529311d3b8babbaf6935670ec9c?s=96&d=mm&r=g 2x"}[Adrian
         Rosebrock]{.comment-author-name}

         [June 6, 2019 at 8:42
         am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-521052){.comment-time-link}

         ::: {.comment-content}
         It sounds like it may be an issue with your apt-get
         definitions. Try doing:

         `$ sudo apt-get update`

         If that doesn't work try flashing a fresh version of Raspbian.
         :::

         ::: {.comment-reply}
         [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-521052){.comment-reply-link}
         :::
         :::
     :::

113. ::: {#comment-520517}
     ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/5e12e273f3bd195edb60e98874e074a5.png){.avatar
     .avatar-48 .photo width="48" height="48"
     srcset="https://secure.gravatar.com/avatar/5e12e273f3bd195edb60e98874e074a5?s=96&d=mm&r=g 2x"}[DickM]{.comment-author-name}

     [June 2, 2019 at 11:28
     am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-520517){.comment-time-link}

     ::: {.comment-content}
     Hi Adrian

     I was so proud of myself -- although 99% of the kudos should go to
     your great, clear tutorial -- as I appeared to successful install
     OpenCV 4.1.0 on my Pi3B+. Not only that but I installed it as a
     Docker image! It didn't even take too long: certainly not the 3 or
     4 hours your earlier tutorials were suggesting.

     HOWEVER when I popped the SD card out of the 3B+ and tried it in a
     ZeroW things looked fine until I tried to "import CV2" in python3
     when I got "Illegal instruction (core dumped)".

     Do I need to compile separately for the 3B+ and for the ZeroW?
     :::

     ::: {.comment-reply}
     [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-520517){.comment-reply-link}
     :::

     -   ::: {#comment-521035}
         ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/02743529311d3b8babbaf6935670ec9c(1).jpeg){.avatar
         .avatar-48 .photo width="48" height="48"
         srcset="https://secure.gravatar.com/avatar/02743529311d3b8babbaf6935670ec9c?s=96&d=mm&r=g 2x"}[Adrian
         Rosebrock]{.comment-author-name}

         [June 6, 2019 at 8:09
         am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-521035){.comment-time-link}

         ::: {.comment-content}
         The Zero W is a bear to work with. You need to compile OpenCV
         separately on the Zero W, unfortunately.
         :::

         ::: {.comment-reply}
         [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-521035){.comment-reply-link}
         :::
         :::
     :::

114. ::: {#comment-520605}
     ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/485b39799bbbbdda9b8bc77860ec2511.png){.avatar
     .avatar-48 .photo width="48" height="48"
     srcset="https://secure.gravatar.com/avatar/485b39799bbbbdda9b8bc77860ec2511?s=96&d=mm&r=g 2x"}[Cai]{.comment-author-name}

     [June 3, 2019 at 5:28
     am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-520605){.comment-time-link}

     ::: {.comment-content}
     Hi Adrian, thanks for sharing. I got a question, I counld not
     download the GUI and GTK paket, even though I updated the apt-get.
     It still did not work, any ideas? Thanks a lot!
     :::

     ::: {.comment-reply}
     [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-520605){.comment-reply-link}
     :::
     :::

115. ::: {#comment-520752}
     ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/f84507a479c3de8e5ed140264e6afc40.png){.avatar
     .avatar-48 .photo width="48" height="48"
     srcset="https://secure.gravatar.com/avatar/f84507a479c3de8e5ed140264e6afc40?s=96&d=mm&r=g 2x"}[[jose
     motta](http://bampli.com/){.comment-author-link}]{.comment-author-name}

     [June 4, 2019 at 10:20
     am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-520752){.comment-time-link}

     ::: {.comment-content}
     Hi Adrian, congrats for the great job done!

     In case we build a docker container starting from debian/stretch,
     the project wouldn´t need to create a virtual environment. In this
     case, the global install would save some space in memory, isn't?

     Do you already have a docker file containing the instructions from
     this post? Then it would be simpler to just "docker run -it".
     :::

     ::: {.comment-reply}
     [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-520752){.comment-reply-link}
     :::

     -   ::: {#comment-521002}
         ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/02743529311d3b8babbaf6935670ec9c(1).jpeg){.avatar
         .avatar-48 .photo width="48" height="48"
         srcset="https://secure.gravatar.com/avatar/02743529311d3b8babbaf6935670ec9c?s=96&d=mm&r=g 2x"}[Adrian
         Rosebrock]{.comment-author-name}

         [June 6, 2019 at 6:52
         am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-521002){.comment-time-link}

         ::: {.comment-content}
         Docker would introduce more overhead than just a Python virtual
         environment. Your Docker instance itself would also require
         more storage than just the Python virtual environment. I would
         not go that route unless you wanted to keep your system
         packages themselves separate from your host system.
         :::

         ::: {.comment-reply}
         [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-521002){.comment-reply-link}
         :::
         :::
     :::

116. ::: {#comment-521937}
     ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/fed8a5154d813a974f80c1f62986974d.png){.avatar
     .avatar-48 .photo width="48" height="48"
     srcset="https://secure.gravatar.com/avatar/fed8a5154d813a974f80c1f62986974d?s=96&d=mm&r=g 2x"}[Hiep
     Le]{.comment-author-name}

     [June 15, 2019 at 3:17
     am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-521937){.comment-time-link}

     ::: {.comment-content}
     Thank you very much. Using your guide, I've have successfully
     installed OpenCV 4.1.0 on my Raspberry Pi 3+.

     There a small fix, however. The path to
     cv2.cpython-35m-arm-linux-gnueabihf.so is not correct for me, so I
     have to change it to:

     ln -s
     /usr/local/lib/python3.5/site-packages/cv2/python-3.5/cv2.cpython-35m-arm-linux-gnueabihf.so
     cv2.so

     Perhaps you should mention it in your guide. It may help other
     people
     :::

     ::: {.comment-reply}
     [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-521937){.comment-reply-link}
     :::
     :::

117. ::: {#comment-523246}
     ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/1a65362008efcb0dde5fd31af1ee7b61.png){.avatar
     .avatar-48 .photo width="48" height="48"
     srcset="https://secure.gravatar.com/avatar/1a65362008efcb0dde5fd31af1ee7b61?s=96&d=mm&r=g 2x"}[Darren]{.comment-author-name}

     [June 26, 2019 at 11:39
     pm](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-523246){.comment-time-link}

     ::: {.comment-content}
     If you are trying to build this on the 'buster' version which uses
     Python 3.7 then you lin command has changed quite a bit.

     cd \~/.virtualenvs/cv/lib/python3.7/site-packages

     ln -s
     /usr/local/lib/python3.7/site-packages/cv2/python-3.7/cv2.cpython-37m-arm-linux-gnueabihf.so
     cv2.so
     :::

     ::: {.comment-reply}
     [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-523246){.comment-reply-link}
     :::

     -   ::: {#comment-524416}
         ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/02743529311d3b8babbaf6935670ec9c(1).jpeg){.avatar
         .avatar-48 .photo width="48" height="48"
         srcset="https://secure.gravatar.com/avatar/02743529311d3b8babbaf6935670ec9c?s=96&d=mm&r=g 2x"}[Adrian
         Rosebrock]{.comment-author-name}

         [July 4, 2019 at 10:58
         am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-524416){.comment-time-link}

         ::: {.comment-content}
         Thanks for sharing Darren!
         :::

         ::: {.comment-reply}
         [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-524416){.comment-reply-link}
         :::
         :::

     -   ::: {#comment-544655}
         ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/36965ae9f31f64aaedee5085df038526.png){.avatar
         .avatar-48 .photo width="48" height="48"
         srcset="https://secure.gravatar.com/avatar/36965ae9f31f64aaedee5085df038526?s=96&d=mm&r=g 2x"}[Sahil]{.comment-author-name}

         [August 24, 2019 at 11:14
         am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-544655){.comment-time-link}

         ::: {.comment-content}
         I have been trying to install it from the last week now. (well
         this field is new to me.)\
         everyone i recommend to follow this tutorial for RASPBIAN
         BUSTER in RPI4B model. and please do the above commands
         modifications for SYM-LINK suggested by DARREN.

         Thanks a lot, Adrian and Darren
         :::

         ::: {.comment-reply}
         [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-544655){.comment-reply-link}
         :::
         :::
     :::

118. ::: {#comment-525063}
     ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/ed9e72e4802e248cf9115272c48240fa.png){.avatar
     .avatar-48 .photo width="48" height="48"
     srcset="https://secure.gravatar.com/avatar/ed9e72e4802e248cf9115272c48240fa?s=96&d=mm&r=g 2x"}[diogo]{.comment-author-name}

     [July 9, 2019 at 11:21
     am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-525063){.comment-time-link}

     ::: {.comment-content}
     Hi, great job for this tutorial!!

     For those who want to install opencv for c++ development, what
     would be the changes in this tutorial? Is it necessary to do the
     steps 4 and 6?

     Thanks
     :::

     ::: {.comment-reply}
     [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-525063){.comment-reply-link}
     :::
     :::

119. ::: {#comment-525157}
     ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/ecf1c93e5b63118b1ba5f2f9340d04d8.png){.avatar
     .avatar-48 .photo width="48" height="48"
     srcset="https://secure.gravatar.com/avatar/ecf1c93e5b63118b1ba5f2f9340d04d8?s=96&d=mm&r=g 2x"}[Denis I.]{.comment-author-name}

     [July 10, 2019 at 7:33
     am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-525157){.comment-time-link}

     ::: {.comment-content}
     Hi Adrian! Grat article.

     I have a question. I was able to successfully install OpenCV 4.1 on
     my Paspberry Pi 3b+. However as per you advice I installed it in a
     virtual enviornment. However, I am trying to use a FaceRecognition
     module for MagicMirror
     ([https://magicmirror.builders](https://magicmirror.builders/))
     that runs outside of that enviornment and therefore cv2 module
     cannot be found.

     Is there a way for me to "take out" the cv2 module outside of the
     virtual enviornment?

     BR,\
     Denis
     :::

     ::: {.comment-reply}
     [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-525157){.comment-reply-link}
     :::

     -   ::: {#comment-525169}
         ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/02743529311d3b8babbaf6935670ec9c(1).jpeg){.avatar
         .avatar-48 .photo width="48" height="48"
         srcset="https://secure.gravatar.com/avatar/02743529311d3b8babbaf6935670ec9c?s=96&d=mm&r=g 2x"}[Adrian
         Rosebrock]{.comment-author-name}

         [July 10, 2019 at 9:31
         am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-525169){.comment-time-link}

         ::: {.comment-content}
         Yes, provided that your Python virtual environment version
         matches your system Python version, just move the "cv2.so"
         bindings into the "site-packages" directory of your system
         Python install.
         :::

         ::: {.comment-reply}
         [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-525169){.comment-reply-link}
         :::
         :::
     :::

120. ::: {#comment-525241}
     ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/a99069c55366a08a9572e2df21b3e00f.png){.avatar
     .avatar-48 .photo width="48" height="48"
     srcset="https://secure.gravatar.com/avatar/a99069c55366a08a9572e2df21b3e00f?s=96&d=mm&r=g 2x"}[Shawn]{.comment-author-name}

     [July 10, 2019 at 5:02
     pm](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-525241){.comment-time-link}

     ::: {.comment-content}
     Hello! This is a really helpful guide! I'm stuck on the make -j4
     line. it seems to get to 100% and then it is stuck on line\
     \[100%\] Built target opencv\_python2\
     \[100%\] Building CXX object
     modules/python3/CMakeFiles/opencv\_python3.dir/\_\_/src2/cv2.cpp.o\
     does this normally take a long time?\
     Thank you!
     :::

     ::: {.comment-reply}
     [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-525241){.comment-reply-link}
     :::

     -   ::: {#comment-527306}
         ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/02743529311d3b8babbaf6935670ec9c(1).jpeg){.avatar
         .avatar-48 .photo width="48" height="48"
         srcset="https://secure.gravatar.com/avatar/02743529311d3b8babbaf6935670ec9c?s=96&d=mm&r=g 2x"}[Adrian
         Rosebrock]{.comment-author-name}

         [July 25, 2019 at 10:18
         am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-527306){.comment-time-link}

         ::: {.comment-content}
         Yes, it can take a bit of time.
         :::

         ::: {.comment-reply}
         [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-527306){.comment-reply-link}
         :::
         :::
     :::

121. ::: {#comment-525465}
     ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/bca722945fb87836ab3a523cb305ee18.png){.avatar
     .avatar-48 .photo width="48" height="48"
     srcset="https://secure.gravatar.com/avatar/bca722945fb87836ab3a523cb305ee18?s=96&d=mm&r=g 2x"}[Letty B.]{.comment-author-name}

     [July 12, 2019 at 12:36
     pm](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-525465){.comment-time-link}

     ::: {.comment-content}
     Hi Adrian! Great tutorial!

     I have a question, I try to install opencv on an orange pi rk3399,
     with armbian aarch64. I was able to get to step 6, to link opencv
     into my python virtual environment without any errors, but when I
     try to test opencv I get this:

     File "", line 1, in\
     ImportError: No module named 'cv2'

     I already check your FAQ section and...

     1\. I have my virtual environment is active.\
     2. I have check the contents of the site-packages directory in the
     virtual environment and there is a cv2 sym-link directory in the
     site-packages directory and it's properly sym-linked.\
     3. Also I check in /usr/local/python/ and Ihave a cv2 directory
     there.\
     4. But I thing this is the weird part when I try to use the last
     resort by going to build/lib directory of my opencv build, there
     isn't a cv2 directory there, even though all the steps run without
     any errors.

     Do you have any ideas of what could be happening?

     Letty B.\
     Thanks in advance
     :::

     ::: {.comment-reply}
     [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-525465){.comment-reply-link}
     :::

     -   ::: {#comment-527295}
         ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/02743529311d3b8babbaf6935670ec9c(1).jpeg){.avatar
         .avatar-48 .photo width="48" height="48"
         srcset="https://secure.gravatar.com/avatar/02743529311d3b8babbaf6935670ec9c?s=96&d=mm&r=g 2x"}[Adrian
         Rosebrock]{.comment-author-name}

         [July 25, 2019 at 10:10
         am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-527295){.comment-time-link}

         ::: {.comment-content}
         Thanks Letty; however, I have not tested these instructions
         with the Orange Pi. My suggestion is to check your "build/lib"
         directory (it may be in "build/lib/python3" as well).
         :::

         ::: {.comment-reply}
         [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-527295){.comment-reply-link}
         :::
         :::
     :::

122. ::: {#comment-525635}
     ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/ac35bc653a65a6607293eac608de6392.png){.avatar
     .avatar-48 .photo width="48" height="48"
     srcset="https://secure.gravatar.com/avatar/ac35bc653a65a6607293eac608de6392?s=96&d=mm&r=g 2x"}[B.Karthikeyan]{.comment-author-name}

     [July 14, 2019 at 1:05
     am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-525635){.comment-time-link}

     ::: {.comment-content}
     Hi Adrian,

     Initially I tried with make -j4. At 100% of build completion, the
     Pi locked up. So terminated the build process. Tried again with
     make -j1 and everything went well.

     Now OpenCv is installed in my Pi.
     :::

     ::: {.comment-reply}
     [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-525635){.comment-reply-link}
     :::

     -   ::: {#comment-527289}
         ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/02743529311d3b8babbaf6935670ec9c(1).jpeg){.avatar
         .avatar-48 .photo width="48" height="48"
         srcset="https://secure.gravatar.com/avatar/02743529311d3b8babbaf6935670ec9c?s=96&d=mm&r=g 2x"}[Adrian
         Rosebrock]{.comment-author-name}

         [July 25, 2019 at 10:06
         am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-527289){.comment-time-link}

         ::: {.comment-content}
         Congrats on getting OpenCV installed on your RPi!
         :::

         ::: {.comment-reply}
         [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-527289){.comment-reply-link}
         :::
         :::
     :::

123. ::: {#comment-525769}
     ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/12b8f1b961be0c65a69abbec2955aa95.jpeg){.avatar
     .avatar-48 .photo width="48" height="48"
     srcset="https://secure.gravatar.com/avatar/12b8f1b961be0c65a69abbec2955aa95?s=96&d=mm&r=g 2x"}[srujan]{.comment-author-name}

     [July 15, 2019 at 11:05
     am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-525769){.comment-time-link}

     ::: {.comment-content}
     Hi Adrian,\
     I followed the same instructions on Raspberry Pi 4B on a freshly
     installed Raspbian Buster headless (July 10th release). Everything
     worked perfectly. the make -j4 took me 44 minutes. I am wondering
     if there are any new updated video/image libraries specific to Rpi
     4 which might increase the overall performance of Pi.

     Best,\
     Srujan
     :::

     ::: {.comment-reply}
     [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-525769){.comment-reply-link}
     :::

     -   ::: {#comment-551702}
         ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/aded67561dd7a0d373259f91ce1db91a.png){.avatar
         .avatar-48 .photo width="48" height="48"
         srcset="https://secure.gravatar.com/avatar/aded67561dd7a0d373259f91ce1db91a?s=96&d=mm&r=g 2x"}[doni]{.comment-author-name}

         [September 16, 2019 at 2:57
         am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-551702){.comment-time-link}

         ::: {.comment-content}
         hi. i also tried Rpi4 with this step but stuck with import cv2
         in step 7, trying to copy cv2.so from folder python2.7 to
         python3.7 but acces denied also with mv, chmod command also
         acces denied. its look like you already try the Rpi4 with for
         image processing task how its performance like the FPS. thank
         you
         :::

         ::: {.comment-reply}
         [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-551702){.comment-reply-link}
         :::
         :::
     :::

124. ::: {#comment-526805}
     ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/5da6262b39d6a24a9c454ece02ad08fb.png){.avatar
     .avatar-48 .photo width="48" height="48"
     srcset="https://secure.gravatar.com/avatar/5da6262b39d6a24a9c454ece02ad08fb?s=96&d=mm&r=g 2x"}[Stephen]{.comment-author-name}

     [July 22, 2019 at 7:47
     pm](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-526805){.comment-time-link}

     ::: {.comment-content}
     Is there a version of these instructions for installing without
     virtualenvironment or at least a more detailed instruction set on
     how to run a .py file in any of the native IDEs on the Pi with a
     virtual environment since "workon cv" doesn't activate inside an
     IDE.
     :::

     ::: {.comment-reply}
     [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-526805){.comment-reply-link}
     :::

     -   ::: {#comment-527246}
         ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/02743529311d3b8babbaf6935670ec9c(1).jpeg){.avatar
         .avatar-48 .photo width="48" height="48"
         srcset="https://secure.gravatar.com/avatar/02743529311d3b8babbaf6935670ec9c?s=96&d=mm&r=g 2x"}[Adrian
         Rosebrock]{.comment-author-name}

         [July 25, 2019 at 9:32
         am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-527246){.comment-time-link}

         ::: {.comment-content}
         It will work inside an IDE, you just need to change your
         Project Interpreter first. Make sure you refer to [this
         tutorial.](https://www.pyimagesearch.com/2015/08/17/the-perfect-computer-vision-environment-pycharm-opencv-and-python-virtual-environments/)
         :::

         ::: {.comment-reply}
         [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-527246){.comment-reply-link}
         :::
         :::
     :::

125. ::: {#comment-526920}
     ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/31e150641deabe420ddc28e89cec8970.png){.avatar
     .avatar-48 .photo width="48" height="48"
     srcset="https://secure.gravatar.com/avatar/31e150641deabe420ddc28e89cec8970?s=96&d=mm&r=g 2x"}[Venkat]{.comment-author-name}

     [July 23, 2019 at 11:22
     am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-526920){.comment-time-link}

     ::: {.comment-content}
     Hi , Thanks for the Info , i followed your instructions and
     commands step by step and successfully installed the Opencv and
     confirmed by checking the cv2 version and shows 4.0.\
     but when I opened the new terminal and tried for \$ workon cv it
     say's\
     ' Bash: workon :command not found' . any suggestion on this ?

     Thanks
     :::

     ::: {.comment-reply}
     [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-526920){.comment-reply-link}
     :::

     -   ::: {#comment-527243}
         ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/02743529311d3b8babbaf6935670ec9c(1).jpeg){.avatar
         .avatar-48 .photo width="48" height="48"
         srcset="https://secure.gravatar.com/avatar/02743529311d3b8babbaf6935670ec9c?s=96&d=mm&r=g 2x"}[Adrian
         Rosebrock]{.comment-author-name}

         [July 25, 2019 at 9:30
         am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-527243){.comment-time-link}

         ::: {.comment-content}
         It sounds like you may not have ran the "source \~/.profile"
         command.
         :::

         ::: {.comment-reply}
         [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-527243){.comment-reply-link}
         :::
         :::
     :::

126. ::: {#comment-527145}
     ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/75d54ce84ac722e3bdb5899af412df84.jpeg){.avatar
     .avatar-48 .photo width="48" height="48"
     srcset="https://secure.gravatar.com/avatar/75d54ce84ac722e3bdb5899af412df84?s=96&d=mm&r=g 2x"}[Col
     h]{.comment-author-name}

     [July 24, 2019 at 7:21
     pm](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-527145){.comment-time-link}

     ::: {.comment-content}
     Thanks for this tutorial, just a note that this worked just fine on
     a raspberry pi 4 (2G) and with no heatsink it compiled in around an
     hour, I thought it had hung at the 99% mark but it just needs to be
     left alone for 10-15 minutes or something.
     :::

     ::: {.comment-reply}
     [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-527145){.comment-reply-link}
     :::
     :::

127. ::: {#comment-527586}
     ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/b9b1a727852238da9f0cfafcc3d21525.png){.avatar
     .avatar-48 .photo width="48" height="48"
     srcset="https://secure.gravatar.com/avatar/b9b1a727852238da9f0cfafcc3d21525?s=96&d=mm&r=g 2x"}[AndK]{.comment-author-name}

     [July 27, 2019 at 12:28
     pm](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-527586){.comment-time-link}

     ::: {.comment-content}
     Adrian, thanks for the great tutorial.

     I been trying it a couple of times. One time it went right through
     (I saved an image 🙂 )but all the other times it keeps stalling at a
     very specific point of your described process. Hope you or someone
     can be helpful!

     I avoid step \#4 since the rpi 3b is a single purpose machine with
     32gb sd-card with noobs (I also remove wolfram and libre).\
     I only perform last step of step \#4: install numpy but the
     response is it is already satisfied.

     I follow step \#5, step-by-step, and the last instruction I make
     is: make -j4\
     It starts fine, and progress up to 100% happens ok fast, but then
     every time it stalls at:\
     \[100%\] Built target opencv\_perf\_stitching

     The rpi does not freeze, I can run top in a new terminal and see
     something is happening, but even after several hours no progress on
     step \#5. I can do other functions on the rpi, but it happens
     slowly. CPU is allocated to step\#5, but no progress?

     Hope someone has any constructive ideas?

     Thanks.

     I have left it running over night but no progress. It reaches this
     stall point rather fast.
     :::

     ::: {.comment-reply}
     [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-527586){.comment-reply-link}
     :::
     :::

128. ::: {#comment-529547}
     ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/c2568c1c42bb62072b18487ea6f538e0.png){.avatar
     .avatar-48 .photo width="48" height="48"
     srcset="https://secure.gravatar.com/avatar/c2568c1c42bb62072b18487ea6f538e0?s=96&d=mm&r=g 2x"}[[Mark](http://%3B%29/){.comment-author-link}]{.comment-author-name}

     [August 1, 2019 at 6:04
     pm](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-529547){.comment-time-link}

     ::: {.comment-content}
     Great article Adrian.

     I installed it with

     sudo apt-get install libopencv-dev python3-opencv

     Seems to work on raspi 3
     :::

     ::: {.comment-reply}
     [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-529547){.comment-reply-link}
     :::

     -   ::: {#comment-532725}
         ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/02743529311d3b8babbaf6935670ec9c(1).jpeg){.avatar
         .avatar-48 .photo width="48" height="48"
         srcset="https://secure.gravatar.com/avatar/02743529311d3b8babbaf6935670ec9c?s=96&d=mm&r=g 2x"}[Adrian
         Rosebrock]{.comment-author-name}

         [August 7, 2019 at 12:37
         pm](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-532725){.comment-time-link}

         ::: {.comment-content}
         I really don't recommend doing that. Using "apt-get" to manage
         Python packages often installs older, outdated versions. It
         also installs them into the system "site-packages" which can
         become really messy and is not a good practice for Python
         development.

         Either way, congrats on getting OpenCV installed!
         :::

         ::: {.comment-reply}
         [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-532725){.comment-reply-link}
         :::
         :::
     :::

129. ::: {#comment-530288}
     ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/df7cf3fb14151ca730f5a5038f1e996f.png){.avatar
     .avatar-48 .photo width="48" height="48"
     srcset="https://secure.gravatar.com/avatar/df7cf3fb14151ca730f5a5038f1e996f?s=96&d=mm&r=g 2x"}[Uwe
     Kleis]{.comment-author-name}

     [August 3, 2019 at 6:27
     am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-530288){.comment-time-link}

     ::: {.comment-content}
     Hello Adrian\
     First of all Sorry because my english is not very good and I use
     Google Translator\
     I installed opencv after your description and everything worked\
     after a reboot I can not use the command Workon cv anymore the
     message "bash workon command not found" appears\
     Can you help me here?\
     greeting\
     Uwe
     :::

     ::: {.comment-reply}
     [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-530288){.comment-reply-link}
     :::

     -   ::: {#comment-532716}
         ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/02743529311d3b8babbaf6935670ec9c(1).jpeg){.avatar
         .avatar-48 .photo width="48" height="48"
         srcset="https://secure.gravatar.com/avatar/02743529311d3b8babbaf6935670ec9c?s=96&d=mm&r=g 2x"}[Adrian
         Rosebrock]{.comment-author-name}

         [August 7, 2019 at 12:32
         pm](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-532716){.comment-time-link}

         ::: {.comment-content}
         Make sure you run "source \~/.profile" first.
         :::

         ::: {.comment-reply}
         [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-532716){.comment-reply-link}
         :::
         :::
     :::

130. ::: {#comment-531734}
     ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/7729a653064970e37fcd797877ac2f6c.jpeg){.avatar
     .avatar-48 .photo width="48" height="48"
     srcset="https://secure.gravatar.com/avatar/7729a653064970e37fcd797877ac2f6c?s=96&d=mm&r=g 2x"}[electron1979]{.comment-author-name}

     [August 6, 2019 at 12:06
     am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-531734){.comment-time-link}

     ::: {.comment-content}
     Thanks!\
     I seem to have installed oCV 4.1.1 😉
     :::

     ::: {.comment-reply}
     [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-531734){.comment-reply-link}
     :::

     -   ::: {#comment-532697}
         ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/02743529311d3b8babbaf6935670ec9c(1).jpeg){.avatar
         .avatar-48 .photo width="48" height="48"
         srcset="https://secure.gravatar.com/avatar/02743529311d3b8babbaf6935670ec9c?s=96&d=mm&r=g 2x"}[Adrian
         Rosebrock]{.comment-author-name}

         [August 7, 2019 at 12:22
         pm](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-532697){.comment-time-link}

         ::: {.comment-content}
         Congrats on getting OpenCV installed!
         :::

         ::: {.comment-reply}
         [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-532697){.comment-reply-link}
         :::
         :::
     :::

131. ::: {#comment-536674}
     ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/931cd3aff4a665031fe861d1d22810a6.png){.avatar
     .avatar-48 .photo width="48" height="48"
     srcset="https://secure.gravatar.com/avatar/931cd3aff4a665031fe861d1d22810a6?s=96&d=mm&r=g 2x"}[Antony
     Smith]{.comment-author-name}

     [August 13, 2019 at 7:43
     am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-536674){.comment-time-link}

     ::: {.comment-content}
     Hi guys,

     I've just installed a fresh version of the latest raspbian --
     BUSTER and having major issues installing OpenCV 4.1.1 AND OpenCV
     4.0.0??

     I've successfully installed 4.0.0. on Jessie without any issues
     before, but it seems to fail consistently on BUSTER??

     I've tried all combinations of SWAPFILE (1024, 2048) with make
     -j(1, 2, 4) and never make it past 48%.

     Considering rolling back to Jessie, unless you guys have
     suggestions?
     :::

     ::: {.comment-reply}
     [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-536674){.comment-reply-link}
     :::

     -   ::: {#comment-539207}
         ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/02743529311d3b8babbaf6935670ec9c(1).jpeg){.avatar
         .avatar-48 .photo width="48" height="48"
         srcset="https://secure.gravatar.com/avatar/02743529311d3b8babbaf6935670ec9c?s=96&d=mm&r=g 2x"}[Adrian
         Rosebrock]{.comment-author-name}

         [August 16, 2019 at 5:41
         am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-539207){.comment-time-link}

         ::: {.comment-content}
         I'll have a dedicated tutorial for Raspbian Buster and OpenCV
         4, stay tuned!
         :::

         ::: {.comment-reply}
         [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-539207){.comment-reply-link}
         :::

         -   ::: {#comment-539605}
             ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/c4a68f03579ed461a9cc521f5744a061.png){.avatar
             .avatar-48 .photo width="48" height="48"
             srcset="https://secure.gravatar.com/avatar/c4a68f03579ed461a9cc521f5744a061?s=96&d=mm&r=g 2x"}[Chris
             Carroll]{.comment-author-name}

             [August 16, 2019 at 9:52
             pm](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-539605){.comment-time-link}

             ::: {.comment-content}
             Would LOVE to see that. Been struggling to get 4.1.1
             compiled on Buster (pi 4) for several days and still
             haven't figured it out. Your expertise would be much
             appreciated.
             :::

             ::: {.comment-reply}
             [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-539605){.comment-reply-link}
             :::

             -   ::: {#comment-547155}
                 ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/02743529311d3b8babbaf6935670ec9c(1).jpeg){.avatar
                 .avatar-48 .photo width="48" height="48"
                 srcset="https://secure.gravatar.com/avatar/02743529311d3b8babbaf6935670ec9c?s=96&d=mm&r=g 2x"}[Adrian
                 Rosebrock]{.comment-author-name}

                 [September 5, 2019 at 11:04
                 am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-547155){.comment-time-link}

                 ::: {.comment-content}
                 It's coming later this month (September 2019)! Just
                 putting the instructions through a few final tests.
                 :::

                 ::: {.comment-reply}
                 [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-547155){.comment-reply-link}
                 :::
                 :::
             :::

         -   ::: {#comment-540096}
             ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/3ca0887c469b66f0bb4ea8b8b837abe4.png){.avatar
             .avatar-48 .photo width="48" height="48"
             srcset="https://secure.gravatar.com/avatar/3ca0887c469b66f0bb4ea8b8b837abe4?s=96&d=mm&r=g 2x"}[Marie]{.comment-author-name}

             [August 19, 2019 at 7:19
             am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-540096){.comment-time-link}

             ::: {.comment-content}
             Any news on when you will publish it? I have been trying
             for days, getting it to work on Raspbian Buster, but I'm
             always getting an error, when I'm importing cv2.
             (ModuleNotFoundError: No module named 'cv2')\
             Thanks in Advance and all the content!
             :::

             ::: {.comment-reply}
             [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-540096){.comment-reply-link}
             :::

             -   ::: {#comment-547151}
                 ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/02743529311d3b8babbaf6935670ec9c(1).jpeg){.avatar
                 .avatar-48 .photo width="48" height="48"
                 srcset="https://secure.gravatar.com/avatar/02743529311d3b8babbaf6935670ec9c?s=96&d=mm&r=g 2x"}[Adrian
                 Rosebrock]{.comment-author-name}

                 [September 5, 2019 at 11:00
                 am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-547151){.comment-time-link}

                 ::: {.comment-content}
                 Definitely sometime in September. Stay tuned!
                 :::

                 ::: {.comment-reply}
                 [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-547151){.comment-reply-link}
                 :::
                 :::
             :::
         :::

     -   ::: {#comment-544497}
         ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/0b621ed02a5b38b4c679b288463e583e.png){.avatar
         .avatar-48 .photo width="48" height="48"
         srcset="https://secure.gravatar.com/avatar/0b621ed02a5b38b4c679b288463e583e?s=96&d=mm&r=g 2x"}[[Starsmer](http://starsmer.com/){.comment-author-link}]{.comment-author-name}

         [August 24, 2019 at 7:44
         am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-544497){.comment-time-link}

         ::: {.comment-content}
         I'm glad I'm not alone on this one. managed to make it to 51%
         after a few attempts at 2048 and -j4, but still no prize there
         either. anyway, looking forward to the new tuit!
         :::

         ::: {.comment-reply}
         [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-544497){.comment-reply-link}
         :::
         :::
     :::

132. ::: {#comment-538235}
     ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/f31dc52294deb2b7ac159d6fed8ccf39.png){.avatar
     .avatar-48 .photo width="48" height="48"
     srcset="https://secure.gravatar.com/avatar/f31dc52294deb2b7ac159d6fed8ccf39?s=96&d=mm&r=g 2x"}[jonathan]{.comment-author-name}

     [August 15, 2019 at 3:18
     am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-538235){.comment-time-link}

     ::: {.comment-content}
     hi Adrien,\
     first, im in love with your blog.\
     second: I couldn't compile with but only with . does it mean the
     compilation will be slower? or the application at run time?\
     thank you. (for this and for everything that's on pyimagesearch
     :::

     ::: {.comment-reply}
     [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-538235){.comment-reply-link}
     :::
     :::

133. ::: {#comment-540879}
     ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/87371d18315fc8e0b11d1e2717a9efb7.png){.avatar
     .avatar-48 .photo width="48" height="48"
     srcset="https://secure.gravatar.com/avatar/87371d18315fc8e0b11d1e2717a9efb7?s=96&d=mm&r=g 2x"}[BBC\_Basic]{.comment-author-name}

     [August 20, 2019 at 4:57
     pm](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-540879){.comment-time-link}

     ::: {.comment-content}
     Will this tutorial work on Raspberry Pi 4 with 4GB ram?
     :::

     ::: {.comment-reply}
     [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-540879){.comment-reply-link}
     :::
     :::

134. ::: {#comment-540883}
     ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/87371d18315fc8e0b11d1e2717a9efb7.png){.avatar
     .avatar-48 .photo width="48" height="48"
     srcset="https://secure.gravatar.com/avatar/87371d18315fc8e0b11d1e2717a9efb7?s=96&d=mm&r=g 2x"}[BBC\_Basic]{.comment-author-name}

     [August 20, 2019 at 5:00
     pm](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-540883){.comment-time-link}

     ::: {.comment-content}
     Sorry just seen that this will work
     :::

     ::: {.comment-reply}
     [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-540883){.comment-reply-link}
     :::
     :::

135. ::: {#comment-545423}
     ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/28b585f6a0a618b78c17a8dede152d2b.png){.avatar
     .avatar-48 .photo width="48" height="48"
     srcset="https://secure.gravatar.com/avatar/28b585f6a0a618b78c17a8dede152d2b?s=96&d=mm&r=g 2x"}[Frieda
     Rhema]{.comment-author-name}

     [August 27, 2019 at 4:48
     am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-545423){.comment-time-link}

     ::: {.comment-content}
     Hello Adrian,\
     Thanks for this awesome tutorial.\
     I have an issue at the level of the command make -j4, When i use
     this command, my pi crashed. After reinstalling it, i used just
     make but it seems not to work because my pi always freezes when i
     get to a hundred percent. I have been on it for three days now.
     Your help would highly be appreciated.\
     I am using a raspberry pi3 model B+ with a 32GB memory card.\
     Thanks
     :::

     ::: {.comment-reply}
     [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-545423){.comment-reply-link}
     :::

     -   ::: {#comment-547138}
         ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/02743529311d3b8babbaf6935670ec9c(1).jpeg){.avatar
         .avatar-48 .photo width="48" height="48"
         srcset="https://secure.gravatar.com/avatar/02743529311d3b8babbaf6935670ec9c?s=96&d=mm&r=g 2x"}[Adrian
         Rosebrock]{.comment-author-name}

         [September 5, 2019 at 10:46
         am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-547138){.comment-time-link}

         ::: {.comment-content}
         Try using only a single core via "make -j1". The compile will
         take longer but it should work.
         :::

         ::: {.comment-reply}
         [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-547138){.comment-reply-link}
         :::
         :::
     :::

136. ::: {#comment-545608}
     ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/eec854c843dc826e58d1cb8f4981d3df.png){.avatar
     .avatar-48 .photo width="48" height="48"
     srcset="https://secure.gravatar.com/avatar/eec854c843dc826e58d1cb8f4981d3df?s=96&d=mm&r=g 2x"}[RajPan]{.comment-author-name}

     [August 28, 2019 at 7:18
     am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-545608){.comment-time-link}

     ::: {.comment-content}
     Thank you Adrian. Great step-by-step guide. Anxiously waiting for
     your tutorial for Raspbian Buster and OpenCV 4,
     :::

     ::: {.comment-reply}
     [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-545608){.comment-reply-link}
     :::

     -   ::: {#comment-547131}
         ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/02743529311d3b8babbaf6935670ec9c(1).jpeg){.avatar
         .avatar-48 .photo width="48" height="48"
         srcset="https://secure.gravatar.com/avatar/02743529311d3b8babbaf6935670ec9c?s=96&d=mm&r=g 2x"}[Adrian
         Rosebrock]{.comment-author-name}

         [September 5, 2019 at 10:41
         am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-547131){.comment-time-link}

         ::: {.comment-content}
         It will be live later this month 🙂
         :::

         ::: {.comment-reply}
         [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-547131){.comment-reply-link}
         :::
         :::
     :::

137. ::: {#comment-547043}
     ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/c251ec8346b475de5b0467a6b4e86b5e.jpeg){.avatar
     .avatar-48 .photo width="48" height="48"
     srcset="https://secure.gravatar.com/avatar/c251ec8346b475de5b0467a6b4e86b5e?s=96&d=mm&r=g 2x"}[[Sunil
     V](http://www.aquametal.com/){.comment-author-link}]{.comment-author-name}

     [September 5, 2019 at 9:25
     am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-547043){.comment-time-link}

     ::: {.comment-content}
     I was able to install OpenCV4.1.0 on Pi4-4G with Raspbian Buster.
     Wondering if I can copy binaries the next time from the SD card
     without having to do cmake again. Is that possible ? If yes, what
     binaries do I need to copy over?
     :::

     ::: {.comment-reply}
     [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-547043){.comment-reply-link}
     :::
     :::

138. ::: {#comment-550863}
     ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/f9062cb4495ca20f0bd9765164354da2.png){.avatar
     .avatar-48 .photo width="48" height="48"
     srcset="https://secure.gravatar.com/avatar/f9062cb4495ca20f0bd9765164354da2?s=96&d=mm&r=g 2x"}[Daniel
     Krotov]{.comment-author-name}

     [September 12, 2019 at 11:30
     pm](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-550863){.comment-time-link}

     ::: {.comment-content}
     So I tried the pre-compiled image on my newest RPi4B Raspbian
     Buster and it didn't work (Now seeing the comment about you working
     on something)...regardless, I decided to take a stab at following
     your steps here and I just had to thank you for putting this all
     together. It went perfectly....time consuming of course, but
     absolutely perfect! I can't wait to start playin around with this
     hardware....for now it is time to get some shut eye.
     :::

     ::: {.comment-reply}
     [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-550863){.comment-reply-link}
     :::

     -   ::: {#comment-552823}
         ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/02743529311d3b8babbaf6935670ec9c(1).jpeg){.avatar
         .avatar-48 .photo width="48" height="48"
         srcset="https://secure.gravatar.com/avatar/02743529311d3b8babbaf6935670ec9c?s=96&d=mm&r=g 2x"}[Adrian
         Rosebrock]{.comment-author-name}

         [September 19, 2019 at 10:15
         am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-552823){.comment-time-link}

         ::: {.comment-content}
         Congrats on getting OpenCV installed on your Pi, Daniel!

         And just to clarify, the [Raspberry Pi .img file that was
         released
         yesterday](https://www.pyimagesearch.com/2016/11/21/raspbian-opencv-pre-configured-and-pre-installed/)
         fully supports the RPi 4, Raspbian Buster, and OpenCV 4.
         :::

         ::: {.comment-reply}
         [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-552823){.comment-reply-link}
         :::
         :::

     -   ::: {#comment-564273}
         ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/e2185efec9108fb930e9f4affa7be821.png){.avatar
         .avatar-48 .photo width="48" height="48"
         srcset="https://secure.gravatar.com/avatar/e2185efec9108fb930e9f4affa7be821?s=96&d=mm&r=g 2x"}[Nazarii]{.comment-author-name}

         [October 14, 2019 at 5:28
         pm](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-564273){.comment-time-link}

         ::: {.comment-content}
         for raspbian buster (no stretch) link OpenCV 4 into your Python
         3 (last step):

         cd /usr/local/lib/python3.7/dist-packages/cv2\
         sudo ln -s
         /usr/local/python/cv2/python-3.7/cv2.cpython-37m-arm-linux-gnueabihf.so
         cv2.so\
         (without virtualenv)
         :::

         ::: {.comment-reply}
         [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-564273){.comment-reply-link}
         :::
         :::
     :::

139. ::: {#comment-566210}
     ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/1cf5ffce9d8ba27643dd18f89cafdb2d.png){.avatar
     .avatar-48 .photo width="48" height="48"
     srcset="https://secure.gravatar.com/avatar/1cf5ffce9d8ba27643dd18f89cafdb2d?s=96&d=mm&r=g 2x"}[jyotish]{.comment-author-name}

     [October 22, 2019 at 4:14
     pm](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-566210){.comment-time-link}

     ::: {.comment-content}
     workon cv is also some time not work after restart
     :::

     ::: {.comment-reply}
     [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-566210){.comment-reply-link}
     :::

     -   ::: {#comment-567109}
         ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/02743529311d3b8babbaf6935670ec9c(1).jpeg){.avatar
         .avatar-48 .photo width="48" height="48"
         srcset="https://secure.gravatar.com/avatar/02743529311d3b8babbaf6935670ec9c?s=96&d=mm&r=g 2x"}[Adrian
         Rosebrock]{.comment-author-name}

         [October 25, 2019 at 10:19
         am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-567109){.comment-time-link}

         ::: {.comment-content}
         Make sure you `source ~/.profile` first.
         :::

         ::: {.comment-reply}
         [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-567109){.comment-reply-link}
         :::
         :::
     :::

140. ::: {#comment-575268}
     ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/b2d81cd0725ff7d7112604bc2d599010.png){.avatar
     .avatar-48 .photo width="48" height="48"
     srcset="https://secure.gravatar.com/avatar/b2d81cd0725ff7d7112604bc2d599010?s=96&d=mm&r=g 2x"}[[Eli](https://www.youtube.com/channel/UCb72JIp6nYxED-Q6NA3mRxg/videos){.comment-author-link}]{.comment-author-name}

     [November 19, 2019 at 2:14
     pm](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-575268){.comment-time-link}

     ::: {.comment-content}
     Hi, dont see my previous question yet, but found an answer to the
     "select timeout resource unavailable" issue when trying to do video
     capture with USB webcam.

     I instead did video capture (in the script) and passed it a url
     instead of a device number.

     First, compile/install mjpg-streamer, get that working.

     then your url would be something like this:\
     [http://localhost:/?action=stream](http://localhost/?action=stream)
     :::

     ::: {.comment-reply}
     [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-575268){.comment-reply-link}
     :::

     -   ::: {#comment-576806}
         ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/02743529311d3b8babbaf6935670ec9c(1).jpeg){.avatar
         .avatar-48 .photo width="48" height="48"
         srcset="https://secure.gravatar.com/avatar/02743529311d3b8babbaf6935670ec9c?s=96&d=mm&r=g 2x"}[Adrian
         Rosebrock]{.comment-author-name}

         [November 21, 2019 at 9:07
         am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-576806){.comment-time-link}

         ::: {.comment-content}
         Thanks for sharing, Eli!
         :::

         ::: {.comment-reply}
         [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-576806){.comment-reply-link}
         :::
         :::
     :::

141. ::: {#comment-586933}
     ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/9cb4da33bddff643e7a8c0ba0996a3d4.png){.avatar
     .avatar-48 .photo width="48" height="48"
     srcset="https://secure.gravatar.com/avatar/9cb4da33bddff643e7a8c0ba0996a3d4?s=96&d=mm&r=g 2x"}[Deepak]{.comment-author-name}

     [November 30, 2019 at 1:09
     am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-586933){.comment-time-link}

     ::: {.comment-content}
     Hi Adrian, I want to install Opencv 3.3 in Raspberry 4. But I'm
     getting error in make. But Opencv 4.1.0 will install smoothly
     without error. Is there any possibility for installing Opencv 3.3
     in Raspberry 4?
     :::

     ::: {.comment-reply}
     [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-586933){.comment-reply-link}
     :::
     :::

142. ::: {#comment-587136}
     ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/21f982d9a9c2a21e047f109be4cdb457.png){.avatar
     .avatar-48 .photo width="48" height="48"
     srcset="https://secure.gravatar.com/avatar/21f982d9a9c2a21e047f109be4cdb457?s=96&d=mm&r=g 2x"}[Larry
     Springsteen]{.comment-author-name}

     [November 30, 2019 at 4:16
     pm](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-587136){.comment-time-link}

     ::: {.comment-content}
     At step 4 I hit a dead end. It says -- To finish the install of
     these tools, we need to update our \~/.profile !!!

     What where and HOW?

     Larry
     :::

     ::: {.comment-reply}
     [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-587136){.comment-reply-link}
     :::

     -   ::: {#comment-589879}
         ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/02743529311d3b8babbaf6935670ec9c(1).jpeg){.avatar
         .avatar-48 .photo width="48" height="48"
         srcset="https://secure.gravatar.com/avatar/02743529311d3b8babbaf6935670ec9c?s=96&d=mm&r=g 2x"}[Adrian
         Rosebrock]{.comment-author-name}

         [December 5, 2019 at 10:34
         am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-589879){.comment-time-link}

         ::: {.comment-content}
         Hey Larry --- updating your \~/.profile file is discussed in
         the tutorial. Did you run into an error when trying to update
         it?
         :::

         ::: {.comment-reply}
         [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-589879){.comment-reply-link}
         :::
         :::
     :::

143. ::: {#comment-590168}
     ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/bcc73347f990da226581e656ebf4ca35.png){.avatar
     .avatar-48 .photo width="48" height="48"
     srcset="https://secure.gravatar.com/avatar/bcc73347f990da226581e656ebf4ca35?s=96&d=mm&r=g 2x"}[Andrew]{.comment-author-name}

     [December 7, 2019 at 8:12
     pm](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-590168){.comment-time-link}

     ::: {.comment-content}
     Hello Adrian,

     On the step where I compile the cv, i keep getting error at 85%.
     The error i keep encounter is Makefile:163: all. any ideas? Ive
     updated the swap to 2048 and used make & make -j1 instead of the
     original make -j4. Still no improvements.

     Could you help me out?
     :::

     ::: {.comment-reply}
     [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-590168){.comment-reply-link}
     :::
     :::

144. ::: {#comment-590254}
     ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/d92ffa4c76958fa0df1a38c64e9af9db.png){.avatar
     .avatar-48 .photo width="48" height="48"
     srcset="https://secure.gravatar.com/avatar/d92ffa4c76958fa0df1a38c64e9af9db?s=96&d=mm&r=g 2x"}[George]{.comment-author-name}

     [December 8, 2019 at 11:50
     am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-590254){.comment-time-link}

     ::: {.comment-content}
     Hi, I've problem to install: my system compile with cmake only with
     2.7 version. Could you tell me how I can delete 2.7 or tell to
     cmake to use 3.7 ? Thank you.
     :::

     ::: {.comment-reply}
     [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-590254){.comment-reply-link}
     :::
     :::

145. ::: {#comment-623352}
     ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/a8a28c1c49ac6c97dcaeeaaf3381e8b2.png){.avatar
     .avatar-48 .photo width="48" height="48"
     srcset="https://secure.gravatar.com/avatar/a8a28c1c49ac6c97dcaeeaaf3381e8b2?s=96&d=mm&r=g 2x"}[sweeney]{.comment-author-name}

     [January 2, 2020 at 4:58
     pm](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-623352){.comment-time-link}

     ::: {.comment-content}
     Hey Adrian,

     I just found this on a website and it seemed to work.

     <https://github.com/piwheels/packages/issues/59>

     Thanks for your tutorial. Very helpful.
     :::

     ::: {.comment-reply}
     [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-623352){.comment-reply-link}
     :::
     :::

146. ::: {#comment-628226}
     ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/345df9f22f77155eba40a37b76d98da4.png){.avatar
     .avatar-48 .photo width="48" height="48"
     srcset="https://secure.gravatar.com/avatar/345df9f22f77155eba40a37b76d98da4?s=96&d=mm&r=g 2x"}[cedric
     euchie]{.comment-author-name}

     [January 5, 2020 at 8:36
     am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-628226){.comment-time-link}

     ::: {.comment-content}
     is possible to install opencv4 in Raspberry 3b+?
     :::

     ::: {.comment-reply}
     [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-628226){.comment-reply-link}
     :::

     -   ::: {#comment-656640}
         ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/02743529311d3b8babbaf6935670ec9c(1).jpeg){.avatar
         .avatar-48 .photo width="48" height="48"
         srcset="https://secure.gravatar.com/avatar/02743529311d3b8babbaf6935670ec9c?s=96&d=mm&r=g 2x"}[Adrian
         Rosebrock]{.comment-author-name}

         [January 16, 2020 at 10:54
         am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-656640){.comment-time-link}

         ::: {.comment-content}
         Yes, simply follow this tutorial.
         :::

         ::: {.comment-reply}
         [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-656640){.comment-reply-link}
         :::
         :::
     :::

147. ::: {#comment-628676}
     ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/345df9f22f77155eba40a37b76d98da4.png){.avatar
     .avatar-48 .photo width="48" height="48"
     srcset="https://secure.gravatar.com/avatar/345df9f22f77155eba40a37b76d98da4?s=96&d=mm&r=g 2x"}[cedric
     euchie]{.comment-author-name}

     [January 5, 2020 at 12:07
     pm](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-628676){.comment-time-link}

     ::: {.comment-content}
     hallo Adrian inside raspbian and opencv preinstall this finds also
     already dlib,and imutils?if such is the case I can already start
     with facial recognition?
     :::

     ::: {.comment-reply}
     [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-628676){.comment-reply-link}
     :::

     -   ::: {#comment-656639}
         ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/02743529311d3b8babbaf6935670ec9c(1).jpeg){.avatar
         .avatar-48 .photo width="48" height="48"
         srcset="https://secure.gravatar.com/avatar/02743529311d3b8babbaf6935670ec9c?s=96&d=mm&r=g 2x"}[Adrian
         Rosebrock]{.comment-author-name}

         [January 16, 2020 at 10:54
         am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-656639){.comment-time-link}

         ::: {.comment-content}
         Are you referring to my pre-configured Raspbian .img file?

         If so, yes, it comes with OpenCV, dlib, imutils, etc.
         pre-installed, enabling you to jump right into your project.
         :::

         ::: {.comment-reply}
         [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-656639){.comment-reply-link}
         :::
         :::
     :::

148. ::: {#comment-651637}
     ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/33c96ab2c4f29302403b693ecb355aac.png){.avatar
     .avatar-48 .photo width="48" height="48"
     srcset="https://secure.gravatar.com/avatar/33c96ab2c4f29302403b693ecb355aac?s=96&d=mm&r=g 2x"}[Yehonatan
     Peleg]{.comment-author-name}

     [January 14, 2020 at 5:42
     pm](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-651637){.comment-time-link}

     ::: {.comment-content}
     Great help, thx a lot. have a good week
     :::

     ::: {.comment-reply}
     [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-651637){.comment-reply-link}
     :::

     -   ::: {#comment-656546}
         ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/02743529311d3b8babbaf6935670ec9c(1).jpeg){.avatar
         .avatar-48 .photo width="48" height="48"
         srcset="https://secure.gravatar.com/avatar/02743529311d3b8babbaf6935670ec9c?s=96&d=mm&r=g 2x"}[Adrian
         Rosebrock]{.comment-author-name}

         [January 16, 2020 at 10:29
         am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-656546){.comment-time-link}

         ::: {.comment-content}
         Thanks, I'm glad you enjoyed the tutorial!
         :::

         ::: {.comment-reply}
         [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-656546){.comment-reply-link}
         :::
         :::
     :::

149. ::: {#comment-661444}
     ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/0aa40bb7daeb636842f9c8734808a1c3.png){.avatar
     .avatar-48 .photo width="48" height="48"
     srcset="https://secure.gravatar.com/avatar/0aa40bb7daeb636842f9c8734808a1c3?s=96&d=mm&r=g 2x"}[Uknown]{.comment-author-name}

     [January 18, 2020 at 7:31
     pm](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-661444){.comment-time-link}

     ::: {.comment-content}
     Successfully installed OpenCV 4.2.0 on Raspberry pi 4 (4 GB Ram)
     and python 3.7.3. Many thanks Adrian!
     :::

     ::: {.comment-reply}
     [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-661444){.comment-reply-link}
     :::

     -   ::: {#comment-671604}
         ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/02743529311d3b8babbaf6935670ec9c(1).jpeg){.avatar
         .avatar-48 .photo width="48" height="48"
         srcset="https://secure.gravatar.com/avatar/02743529311d3b8babbaf6935670ec9c?s=96&d=mm&r=g 2x"}[Adrian
         Rosebrock]{.comment-author-name}

         [January 23, 2020 at 9:28
         am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-671604){.comment-time-link}

         ::: {.comment-content}
         Congrats on getting OpenCV installed on your RPi! 🙂
         :::

         ::: {.comment-reply}
         [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-671604){.comment-reply-link}
         :::
         :::
     :::

150. ::: {#comment-671808}
     ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/553143b5e615889db4ea194f433ec3f2.png){.avatar
     .avatar-48 .photo width="48" height="48"
     srcset="https://secure.gravatar.com/avatar/553143b5e615889db4ea194f433ec3f2?s=96&d=mm&r=g 2x"}[Max]{.comment-author-name}

     [January 24, 2020 at 4:23
     pm](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-671808){.comment-time-link}

     ::: {.comment-content}
     Thank you for the excellent tutorial. Let me ask a noob question:

     I managed to compile Open CV 4.1 on my Raspberry 3B+. In did so in
     a VM called cv. However, when I run the test from step \#7 I
     receive version 3.3.3.0. I had this Open CV version installed on
     the Raspberry before. In the system, not from a VM. I found a hint
     in your comments to just create a new VM and repeat the linking
     step. It did not help.

     Do I have to uninstall the Open CV 3 in order to access version
     4.1? If so, how?

     And: Please don't tell me that I need to recompile version 4.1. It
     took a very long time ...

     When you answer, please don't take any knowledge for granted. 😉

     Thank you very much,\
     Max
     :::

     ::: {.comment-reply}
     [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-671808){.comment-reply-link}
     :::
     :::

151. ::: {#comment-703858}
     ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/5edee1608f90c7192f99fd82e46048ae.png){.avatar
     .avatar-48 .photo width="48" height="48"
     srcset="https://secure.gravatar.com/avatar/5edee1608f90c7192f99fd82e46048ae?s=96&d=mm&r=g 2x"}[Juan
     Carlos]{.comment-author-name}

     [February 5, 2020 at 2:18
     pm](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-703858){.comment-time-link}

     ::: {.comment-content}
     Yesterday I instaled OpenCV 4 on Raspberry Pi 4 B with Raspian
     Buster and Python 3.7, thanks to this blog post. in the very last
     step of the compilation I thought the machine was freezed, but the
     installation was successful and I have it now up and running. Thank
     you very much!

     (just now I've found your more recent post to install it for
     Raspberry 4 and Raspbian Buster, but its done yet)
     :::

     ::: {.comment-reply}
     [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-703858){.comment-reply-link}
     :::

     -   ::: {#comment-725693}
         ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/02743529311d3b8babbaf6935670ec9c(1).jpeg){.avatar
         .avatar-48 .photo width="48" height="48"
         srcset="https://secure.gravatar.com/avatar/02743529311d3b8babbaf6935670ec9c?s=96&d=mm&r=g 2x"}[Adrian
         Rosebrock]{.comment-author-name}

         [February 13, 2020 at 11:18
         am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-725693){.comment-time-link}

         ::: {.comment-content}
         Congrats on getting OpenCV installed on your Raspberry Pi!
         :::

         ::: {.comment-reply}
         [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-725693){.comment-reply-link}
         :::
         :::
     :::

152. ::: {#comment-714878}
     ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/cbcc90c8d61d1ddc9d3dbd0dfdb78577.png){.avatar
     .avatar-48 .photo width="48" height="48"
     srcset="https://secure.gravatar.com/avatar/cbcc90c8d61d1ddc9d3dbd0dfdb78577?s=96&d=mm&r=g 2x"}[Andy
     Lim]{.comment-author-name}

     [February 10, 2020 at 4:36
     am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-714878){.comment-time-link}

     ::: {.comment-content}
     HI, I have issue that after i ran make (same to make -j4), nothing
     happen and running.\
     I have tried to restart dphys-swapfile and also rebuild the build
     file.\
     How can i solve this issue?
     :::

     ::: {.comment-reply}
     [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-714878){.comment-reply-link}
     :::
     :::

153. ::: {#comment-746368}
     ![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/e53df77003021c2bec6a7d38bb7c43d5.png){.avatar
     .avatar-48 .photo width="48" height="48"
     srcset="https://secure.gravatar.com/avatar/e53df77003021c2bec6a7d38bb7c43d5?s=96&d=mm&r=g 2x"}[Ainul
     Hayat]{.comment-author-name}

     [February 20, 2020 at 6:18
     am](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-746368){.comment-time-link}

     ::: {.comment-content}
     Hello Prof Adrian, im really thankful to you for providing the
     internet with awesome tutorial. However it seems that im unable to
     create a virtual environment. This is the error that i get when i
     try to create a virtual environment named CV\
     using the command mkvirtualenv cv -p python3:

     ERROR: Environment '/home/pi/.virtualenvs/cv' does not contain an
     activate script.

     really appreciate it if you could help out to guide me on the right
     direction on how i can solve this issue. Thanks in advanced 🙂
     :::

     ::: {.comment-reply}
     [Reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#comment-746368){.comment-reply-link}
     :::
     :::
:::

::: {.comment-policy}
### Before you leave a comment\... {#before-you-leave-a-comment... .comment-policy__title}

::: {.comment-policy__content}
Hey, Adrian here, author of the PyImageSearch blog. I'd love to hear
from you, but before you submit a comment, **please follow these
guidelines:**

-   **If you have a question, read the comments first.** You should also
    search this page (i.e., ctrl + f) for keywords related to your
    question. It's likely that I have already addressed your question in
    the comments.
-   **If you are copying and pasting code/terminal output, please
    don't.** Reviewing another programmers' code is a very time
    consuming and tedious task, and due to the volume of emails and
    contact requests I receive, I simply cannot do it.
-   **Be respectful of the space.** I put a lot of my own personal time
    into creating these free weekly tutorials. On average, each tutorial
    takes me 15-20 hours to put together. I love offering these guides
    to you and I take pride in the content I create. Therefore, I will
    not approve comments that include large code blocks/terminal output
    as it destroys the formatting of the page. Kindly be respectful of
    this space.
-   **Be patient**. I receive 200+ comments and emails per day. Due to
    spam, and my desire to personally answer as many questions as I can,
    I hand moderate all new comments (typically once per week). I try to
    answer as many questions as I can, but I'm only one person. Please
    don't be offended if I cannot get to your question
-   **Do you need priority support?** [Consider purchasing one of my
    books and
    courses](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#).
    I place customer questions and emails in a separate, special
    priority queue and answer them first. **If you are a customer of
    mine you will receive a guaranteed response from me.** If there's
    any time left over, I focus on the community at large and attempt to
    answer as many of those questions as I possibly can.

Thank you for keeping these guidelines in mind before submitting your
comment.
:::
:::

::: {#respond .comment-respond}
### Leave a Reply [[Cancel reply](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#respond){#cancel-comment-reply-link}]{.small} {#reply-title .comment-reply-title}

[Your email address will not be published.]{#email-notes} Required
fields are marked [\*]{.required}

Comment

Name [\*]{.required}

Email [\*]{.required}

Website

Save my name, email, and website in this browser for the next time I
comment.
:::
:::

Primary Sidebar {#primary-sidebar .genesis-sidebar-title .screen-reader-text}
---------------

::: {#custom_html-2 .section .widget_text .widget .widget_custom_html}
::: {.widget_text .widget-wrap}
::: {.textwidget .custom-html-widget}
::: {.sidebar__block}
![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/free-crashcourse-200x300-1.jpg){.wp-image-11900
width="125" height="188" sizes="(max-width: 125px) 100vw, 125px"
srcset="https://www.pyimagesearch.com/wp-content/uploads/2020/01/free-crashcourse-200x300-1.jpg 500w, https://www.pyimagesearch.com/wp-content/uploads/2020/01/free-crashcourse-200x300-1.jpg 200w"}

#### Free Resource Guide: Computer Vision, OpenCV, and Deep Learning {#free-resource-guide-computer-vision-opencv-and-deep-learning .sidebar__block-title}

::: {.sidebar__block-content}
Inside you\'ll find my hand-picked tutorials, books, courses, and
libraries to help you master CV and DL.
:::

[Download](https://app.monstercampaigns.com/c/mdoijtrmex7bpm0rp2hn/){.button
.sidebar__block-button}
:::
:::
:::
:::

::: {#custom_html-3 .section .widget_text .widget .widget_custom_html}
::: {.widget_text .widget-wrap}
::: {.textwidget .custom-html-widget}
::: {.sidebar__block}
![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/raspberry-pi-for-computer-vision-200x300-1.jpg){.wp-image-11905
width="125" height="188" sizes="(max-width: 125px) 100vw, 125px"
srcset="https://www.pyimagesearch.com/wp-content/uploads/2020/01/raspberry-pi-for-computer-vision-200x300-1.jpg 500w, https://www.pyimagesearch.com/wp-content/uploads/2020/01/raspberry-pi-for-computer-vision-200x300-1.jpg 200w"}

#### Rasperry Pi for Computer Vision {#rasperry-pi-for-computer-vision .sidebar__block-title}

::: {.sidebar__block-content}
You can teach your Raspberry Pi to "see" using Computer Vision, Deep
Learning, and OpenCV. Let me show you how.
:::

[Learn
More](https://www.pyimagesearch.com/raspberry-pi-for-computer-vision/){.sidebar__block-link}
:::
:::
:::
:::

::: {#custom_html-4 .section .widget_text .widget .widget_custom_html}
::: {.widget_text .widget-wrap}
::: {.textwidget .custom-html-widget}
::: {.sidebar__block}
![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/deep-learning-for-computer-vision-200x300-1.jpg){.wp-image-11907
width="125" height="188" sizes="(max-width: 125px) 100vw, 125px"
srcset="https://www.pyimagesearch.com/wp-content/uploads/2020/01/deep-learning-for-computer-vision-200x300-1.jpg 500w, https://www.pyimagesearch.com/wp-content/uploads/2020/01/deep-learning-for-computer-vision-200x300-1.jpg 200w"}

#### Deep Learning for Computer Vision {#deep-learning-forcomputer-vision .sidebar__block-title}

::: {.sidebar__block-content}
You\'re interested in deep learning and computer vision, but you don\'t
know how to get started. Let me help. My new book will teach you all you
need to know about deep learning.
:::

[Learn
More](https://www.pyimagesearch.com/deep-learning-computer-vision-python-book/){.sidebar__block-link}
:::
:::
:::
:::

::: {#custom_html-5 .section .widget_text .widget .widget_custom_html}
::: {.widget_text .widget-wrap}
::: {.textwidget .custom-html-widget}
::: {.sidebar__block}
#### You can detect faces in images & video. {#you-can-detect-faces-in-images-video. .sidebar__block-title}

![](https://hcl.pyimagesearch.com/wp-content/uploads/2020/01/detect-faces.jpg){.wp-image-11909}

::: {.sidebar__block-content}
Are you interested in detecting faces in images & video? But tired of
Googling for tutorials that never work? Then let me help! I guarantee
that my new book will turn you into a face detection ninja by the end of
this weekend. Click here to give it a shot yourself.
:::

[Learn
More](https://www.pyimagesearch.com/practical-python-opencv/){.sidebar__block-link}
:::
:::
:::
:::

::: {#custom_html-6 .section .widget_text .widget .widget_custom_html}
::: {.widget_text .widget-wrap}
::: {.textwidget .custom-html-widget}
::: {.sidebar__block}
#### PyImageSearch Gurus: NOW ENROLLING! {#pyimagesearch-gurus-now-enrolling .sidebar__block-title}

![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/gurus-course-200x300-1.jpg){.wp-image-11903
width="125" height="188" sizes="(max-width: 125px) 100vw, 125px"
srcset="https://www.pyimagesearch.com/wp-content/uploads/2020/01/gurus-course-200x300-1.jpg 500w, https://www.pyimagesearch.com/wp-content/uploads/2020/01/gurus-course-200x300-1.jpg 200w"}

::: {.sidebar__block-content}
The PyImageSearch Gurus course is now enrolling! Inside the course
you\'ll learn how to perform:

**· Automatic License Plate Recognition (ANPR)\
· Deep Learning\
· Face Recognition\
· *\...and much more!***

Click the button below to learn more about the course, take a tour, and
get 10 (FREE) sample lessons.
:::

[Learn
More](https://www.pyimagesearch.com/pyimagesearch-gurus/){.sidebar__block-link}
:::
:::
:::
:::
:::
:::
:::

::: {.similar-articles}
::: {.wrap}
### Similar articles

::: {.gpd-simple-card-group}
[](https://www.pyimagesearch.com/2014/01/22/clever-girl-a-guide-to-utilizing-color-histograms-for-computer-vision-and-image-search-engines/){.post-summary--link}

::: {.entry-categories}
::: {.entry-category}
Image Descriptors
:::
:::

Clever Girl: A Guide to Utilizing Color Histograms for Computer Vision and Image Search Engines {#clever-girl-a-guide-to-utilizing-color-histograms-for-computer-vision-and-image-search-engines .entry-title}
-----------------------------------------------------------------------------------------------

::: {.entry-date}
January 22, 2014
:::

[](https://www.pyimagesearch.com/2014/02/24/building-image-search-engine-searching-ranking-step-4-4/){.post-summary--link}

::: {.entry-categories}
::: {.entry-category}
Image Search Engine Basics
:::
:::

Building an Image Search Engine: Searching and Ranking (Step 4 of 4) {#building-an-image-search-engine-searching-and-ranking-step-4-of-4 .entry-title}
--------------------------------------------------------------------

::: {.entry-date}
February 24, 2014
:::

[](https://www.pyimagesearch.com/2015/01/09/pyimagesearch-gurus-big-list-computer-vision-topics-youll-master-inside-course/){.post-summary--link}

::: {.entry-categories}
::: {.entry-category}
Kickstarter
:::
:::

PyImageSearch Gurus: The big list of computer vision topics you'll master inside my course. {#pyimagesearch-gurus-the-big-list-of-computer-vision-topics-youll-master-inside-my-course. .entry-title}
-------------------------------------------------------------------------------------------

::: {.entry-date}
January 9, 2015
:::
:::
:::
:::

::: {.gpd-footer-cta}
::: {.wrap}
::: {.footer-cta-grid}
::: {.footer-cta-image}
![](./Install%20OpenCV%204%20on%20your%20Raspberry%20Pi%20-%20PyImageSearch_files/man-on-sofa-with-laptop-1.jpg){.attachment-full
.size-full width="932" height="833"
sizes="(max-width: 932px) 100vw, 932px"
srcset="https://www.pyimagesearch.com/wp-content/uploads/2020/02/man-on-sofa-with-laptop-1.jpg 932w, https://www.pyimagesearch.com/wp-content/uploads/2020/02/man-on-sofa-with-laptop-1-300x268.jpg 300w, https://www.pyimagesearch.com/wp-content/uploads/2020/02/man-on-sofa-with-laptop-1-768x686.jpg 768w"}
:::

::: {.footer-cta-title}
### You can learn Computer Vision, Deep Learning, and OpenCV.
:::

::: {.footer-cta-content}
::: {.footer-cta-content-desc}
Get your FREE 17 page Computer Vision, OpenCV, and Deep Learning
Resource Guide PDF. Inside you'll find my hand-picked tutorials, books,
courses, and libraries to help you master CV and DL.
:::

::: {.footer-cta-content-action}
Download for free

::: {style="display: none;" aria-hidden="true"}
Website\
:::
:::
:::
:::
:::
:::

::: {#genesis-footer-widgets .footer-widgets}
Footer {#footer .genesis-sidebar-title .screen-reader-text}
------

::: {.wrap}
::: {.widget-area .footer-widgets-1 .footer-widget-area}
::: {#custom_html-7 .section .widget_text .widget .widget_custom_html}
::: {.widget_text .widget-wrap}
### Topics {#topics .widgettitle .widget-title}

::: {.textwidget .custom-html-widget}
-   [Deep
    Learning](https://www.pyimagesearch.com/category/deep-learning-2/)
-   [Dlib Library](https://www.pyimagesearch.com/category/dlib/)
-   [Embedded/IoT and Computer
    Vision](https://www.pyimagesearch.com/category/embedded/)
-   [Face Applications](https://www.pyimagesearch.com/category/faces/)
-   [Image
    Processing](https://www.pyimagesearch.com/category/image-processing/)
-   [Interviews](https://www.pyimagesearch.com/category/interviews/)
-   [Keras](https://www.pyimagesearch.com/category/keras/)
:::
:::
:::
:::

::: {.widget-area .footer-widgets-2 .footer-widget-area}
::: {#custom_html-8 .section .widget_text .widget .widget_custom_html}
::: {.widget_text .widget-wrap}
::: {.textwidget .custom-html-widget}
-   [Machine Learning and Computer
    Vision](https://www.pyimagesearch.com/category/machine-learning-2/)
-   [Medical Computer
    Vision](https://www.pyimagesearch.com/category/medical/)
-   [Optical Character Recognition
    (OCR)](https://www.pyimagesearch.com/category/optical-character-recognition-ocr/)
-   [Object
    Detection](https://www.pyimagesearch.com/category/object-detection/)
-   [Object
    Tracking](https://www.pyimagesearch.com/category/object-tracking/)
-   [OpenCV Tutorials](https://www.pyimagesearch.com/category/opencv/)
-   [Raspberry Pi](https://www.pyimagesearch.com/category/raspberry-pi/)
:::
:::
:::
:::

::: {.widget-area .footer-widgets-3 .footer-widget-area}
::: {#custom_html-9 .section .widget_text .widget .widget_custom_html}
::: {.widget_text .widget-wrap}
### Books & Courses {#books-courses .widgettitle .widget-title}

::: {.textwidget .custom-html-widget}
-   [FREE CV, DL, and OpenCV Crash
    Course](https://www.pyimagesearch.com/free-opencv-computer-vision-deep-learning-crash-course/)
-   [Practical Python and
    OpenCV](https://www.pyimagesearch.com/practical-python-opencv/)
-   [Deep Learning for Computer Vision with
    Python](https://www.pyimagesearch.com/deep-learning-computer-vision-python-book/)
-   [PyImageSearch Gurus
    Course](https://www.pyimagesearch.com/pyimagesearch-gurus/)
-   [Raspberry Pi for Computer
    Vision](https://www.pyimagesearch.com/raspberry-pi-for-computer-vision/)
:::
:::
:::
:::

::: {.widget-area .footer-widgets-4 .footer-widget-area}
::: {#custom_html-10 .section .widget_text .widget .widget_custom_html}
::: {.widget_text .widget-wrap}
### PyImageSearch {#pyimagesearch .widgettitle .widget-title}

::: {.textwidget .custom-html-widget}
-   [Get Started](https://www.pyimagesearch.com/start-here/)
-   [OpenCV Install
    Guides](https://www.pyimagesearch.com/opencv-tutorials-resources-guides/)
-   [About](https://www.pyimagesearch.com/about/)
-   [FAQ](https://www.pyimagesearch.com/faqs/)
-   [Blog](https://www.pyimagesearch.com/topics/)
-   [Contact](https://www.pyimagesearch.com/contact/)
-   [Privacy Policy](https://www.pyimagesearch.com/privacy-policy/)
:::
:::
:::
:::
:::
:::

::: {.wrap}
::: {.footer-logo}
[](https://www.pyimagesearch.com/)
:::

::: {.footer-social}
:::

::: {.footer-info}
© 2020 [PyImageSearch](https://www.pyimagesearch.com/). All Rights
Reserved.
:::
:::
:::

![](https://www.facebook.com/tr?id=1465896023527386&ev=PageView&noscript=1){width="1"
height="1"}

::: {style="position:absolute;overflow:hidden;clip:rect(0 0 0 0);height:1px;width:1px;margin:-1px;padding:0;border:0"}
::: {.omapi-shortcode-helper}
\[email\]
:::

::: {.omapi-shortcode-parsed .omapi-encoded}
\[email\]
:::
:::

::: {#om-tortsem7qkvyuxc4cyfi-holder}
:::

::: {#om-mdoijtrmex7bpm0rp2hn-holder}
:::

<div>

::: {.grecaptcha-badge data-style="bottomright" style="width: 256px; height: 60px; position: fixed; visibility: hidden; display: block; transition: right 0.3s ease 0s; bottom: 14px; right: -186px; box-shadow: gray 0px 0px 5px; border-radius: 2px; overflow: hidden;"}
::: {.grecaptcha-logo}
:::

::: {.grecaptcha-error}
:::
:::

</div>

::: {.rm-c v-5e0b5985=""}
::: {.rm-widget .rm-wdg_yrt1qobj .rm-toaster .rm-is-offer v-5e0b5985="" style="background-color: rgb(255, 255, 255) !important; color: rgb(74, 74, 74) !important;"}
::: {.rm-carousel-element v-5e0b5985=""}
::: {.rm-main v-5e0b5985=""}
::: {.rm-title v-5e0b5985=""}
[]{v-5e0b5985=""}

Free 17-day email crash course on Computer Vision, OpenCV, and Deep
Learning
:::

::: {v-5e0b5985=""}
::: {.rm-description v-5e0b5985=""}
[]{v-5e0b5985=""}

**Interested in Computer Vision, Deep Learning, and OpenCV, but don\'t
know where to start?**

Let me help. I\'ve created a *free* 17-day email crash course that is
hand-tailored to **give you the best possible introduction to computer
vision and deep learning.**

Sound good? Enter your email below to get started.
:::

::: {.rm-placeholder v-5e0b5985=""}
Email address
:::

::: {v-5e0b5985=""}
:::

[]{v-5e0b5985=""}

Start my email course!

::: {v-5e0b5985="" style="height: 14px !important;"}
:::
:::

[✕](https://www.pyimagesearch.com/2018/09/26/install-opencv-4-on-your-raspberry-pi/#){.rm-close}
:::
:::
:::
:::
