elftosb 5.x read me
-------------------

Directories

elftosb2 - elftosb 5.x
sbtool - sbtool 1.x
keygen - keygen 1.x
common - source files common between elftosb2, sbtool, and keygen
winsupport - files needed only by the windows build

Development

The preferred way to work on elftosb and related tools is to use Xcode on Mac OS X. The
elftosb.xcodeproj directory is an Xcode project "file". It has targets for elftosb,
keygen, sbtool, and an aggregate target that builds all of the above. The main reason
to use Xcode is that the project is set up so that the flex and bison input files are
processed automatically and the output files compiled.

The Windows project and Linux makefile are not configured to build the flex or bison
source files. They simply use the output files copied into the elftosb2 directory.
You can run flex or bison manually to generate these files if you don't want to use Xcode.
If you do use the Xcode project and make changes to the .l or .y files, be sure to copy
the output .cpp files into the elftosb2 directory before you move the changes to either
Windows or Linux.

Building

On Windows, open the .sln file in Microsoft Visual Studio. The solution contains projects
for each of the individual projects.

For Linux, run 'make all' from within the top level elftosb directory.

On Mac OS X just open the .xcodeproj project and build the "Everything" target.



