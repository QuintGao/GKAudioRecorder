# GKAudioRecorder

#### 介绍
封装的录音库

#### 软件架构
这是一个用Objective-C语言基于TheAmazingAudioEngine库封装的录音库的framework


#### Framework编译步骤

1. 分别在真机和模拟器中编译项目（command + B）
2. 打开项目中的Products，右键GKAudioRecorder.framework，Show in Finder，可以看到在外侧文件夹中有两个release文件夹，分别对应真机和模拟器编译出的framework 
3. 打开终端，输入lipo -info ,将上面找的的文件夹中的GKAudioRecorder.framework->GKAudioRecorder文件拖入终端，回车，即可查看此framework支持的编译类型，如果是模拟器会出现i386 x86_64，如果是真机会出现armv7 arm64
4. 合并真机和模拟器的framework，在终端输入lipo -create (真机文件) (模拟器文件) -output (合并文件)，如：sudo lipo -create /Users/gaokun/Library/Developer/Xcode/DerivedData/GKAudioRecorder-bmmnivsijumrvveoldezlvnmxwko/Build/Products/Release-iphonesimulator/GKAudioRecorder.framework/GKAudioRecorder /Users/gaokun/Library/Developer/Xcode/DerivedData/GKAudioRecorder-bmmnivsijumrvveoldezlvnmxwko/Build/Products/Release-iphoneos/GKAudioRecorder.framework/GKAudioRecorder -output /Users/gaokun/Library/Developer/Xcode/DerivedData/GKAudioRecorder-bmmnivsijumrvveoldezlvnmxwko/Build/Products/GKAudioRecorder

5. 将合并后的文件GKAudioRecorder拖入到任意一个framework中替换原文件，此时生成的framework就可以拖入到项目中使用了

#### 使用说明

1. 将生成好的framework拖入到项目中
2. 导入文件 #import <GKAudioRecorder/GKAudioRecorder.h>
3. 在需要录音的时候使用即可

#### 参与贡献

1. Fork 本仓库
2. 新建 Feat_xxx 分支
3. 提交代码
4. 新建 Pull Request


#### 码云特技

1. 使用 Readme\_XXX.md 来支持不同的语言，例如 Readme\_en.md, Readme\_zh.md
2. 码云官方博客 [blog.gitee.com](https://blog.gitee.com)
3. 你可以 [https://gitee.com/explore](https://gitee.com/explore) 这个地址来了解码云上的优秀开源项目
4. [GVP](https://gitee.com/gvp) 全称是码云最有价值开源项目，是码云综合评定出的优秀开源项目
5. 码云官方提供的使用手册 [https://gitee.com/help](https://gitee.com/help)
6. 码云封面人物是一档用来展示码云会员风采的栏目 [https://gitee.com/gitee-stars/](https://gitee.com/gitee-stars/)
