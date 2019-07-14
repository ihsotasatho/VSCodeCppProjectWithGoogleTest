# VSCodeCppProjectWithGoogleTest

Implementation date : 14 July 2019<br>

This is a sample of Visual Studio Code Project (Folder) for user who is editing C++ code on Mac.

## Precondition
1. Visual Studio Code is installed on your MAC(*1).
2. Following extention of Visual Studio Code is installed.
- C/C++ (Microsoft)
- Code Runner (Jun Han)
- GoogleTest Adapter (David Schuldenfrei)
3. GoogleTest(*2) is installed on your MAC.

*1 : In my case, Visual Studio version is 1.36.1, macOS is Mojave version 10.14.5, XCode version is 10.2.1.<br>
*2 : Download from https://github.com/google/googletest/releases, uncompress. And build, make, install to current user's .local by using CMake as following steps.

> cd googletest-release-x.x.x(*3)<br>
mkdir build<br>
cd build
cmake -DCMAKE_INSTALL_PREFIX=$HOME/.local ..<br>
make && make install<br>

*3 : In my case, varsion is 1.8.1.

## Usage
1. Download this repository
2. Uncompress
3. Open uncompressed folder from Visual Studio Code

## Reference
Google Testの使い方
https://qiita.com/shohirose/items/30e39949d8bf990b0462<br>
Google TestによるC++のテスト環境構築
https://qiita.com/progrhyme/items/04dbb62f70c691473006<br>
Google Test ドキュメント日本語訳
http://opencv.jp/googletestdocs/index.html<br>



