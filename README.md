# CGeographicLib

[![Swift Version](https://img.shields.io/badge/swift-5.5-blue.svg)](https://swift.org)
![Platform](https://img.shields.io/badge/platform-macOS|linux--64-lightgray.svg)
[![GeographicLib Version](https://img.shields.io/badge/GeographicLib-1.52.0-blue.svg)](https://geographiclib.sourceforge.io/)

Swift package C++-wrapper for [Charles Karney's](https://sourceforge.net/u/karney/) C++ library for geodesics. See Karney's [GeographicLib](https://sourceforge.net/projects/geographiclib/) project.

## Pre-requisites

Assumes that GeographicLib is already installed.  For macOS this is easily done using Homebrew.

``` bash
brew install geographiclib
```

## Functions Implemented To-Date

- Geodesic.Inverse
- Geodesic.Direct
- Geodesic.ArcDirect

- Gnomonic.Forward
- Gnomonic.Reverse
