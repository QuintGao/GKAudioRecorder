Pod::Spec.new do |s|
  s.name             = 'GKAudioRecorder'
  s.version          = '1.0.2'
  s.summary          = '基于TAAE封装的录音、播放库'
  s.description      = <<-DESC
TheAmazingAudioEngine封装
                       DESC

  s.homepage         = 'https://github.com/QuintGao/GKAudioRecorder'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { '1094887059@qq.com' => '1094887059@qq.com' }
  s.source           = { :git => 'https://github.com/QuintGao/GKAudioRecorder.git', :tag => s.version.to_s }
  s.ios.deployment_target = '9.0'
  
  s.source_files     = "GKAudioRecorder/GKAudioRecorder.framework/Headers/*.{h}", "*.{h,m}"
  s.vendored_frameworks = ['GKAudioRecorder/GKAudioRecorder.framework']
  s.frameworks = 'UIKit','Foundation','Accelerate','AudioToolbox','AVFoundation','CoreGraphics','QuartzCore'
  s.requires_arc = true
end
