---------------------------------------------------------------------------
------                          COPYRIGHT                            ------
---------------------------------------------------------------------------

This program is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
as published by the Free Software Foundation; either version 2
of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License along
with this program; if not, write to the Free Software Foundation, Inc.,
51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.

This project based on fork of project flacfrontend with renaming to FrontFLAC
since the original project seems suspended.

The project flacfrontend can be found on:
https://github.com/ktmf01/flacfrontend

The FLAC project can be found on:
http://xiph.org/flac

---------------------------------------------------------------------------
------                             FAQ                               ------
---------------------------------------------------------------------------

1) Why is this command line thing popping up?
FrontFLAC is a very simple program that just calls the 'real' FLAC
encoder, which is command line based. This has been done to keep
development of FrontFLAC easy and accessible and makes it possible to
change the encoder without having to change anything in the FrontFLAC.

2) How to use
Just drag any files or directories to the list box in the
top left of the FrontFLAC window. Any directories will automatically be
searched (recursively) for .flac, .ogg, .oga and .wav files.

3) How does the portable version of FrontFLAC work?
Just unzip the zip-file somewhere convenient and run the executable, 
currently only build for .net 4.0 and up.
