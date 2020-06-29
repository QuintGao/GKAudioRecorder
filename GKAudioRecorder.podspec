Pod::Spec.new do |s|
  s.name             = 'GKAudioRecorder'
  s.version          = '0.0.1'
  s.summary          = '基于TheAmazingAudioEngine封装的录音播放库'

  s.description      = <<-DESC
基于TheAmazingAudioEngine封装的录音播放库，支持录音、导出、播放录音文件等功能
                       DESC

  s.homepage         = 'https://github.com/QuintGao/GKAudioRecorder'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { '1094887059@qq.com' => '1094887059@qq.com' }
  s.source           = { :git => 'https://github.com/QuintGao/GKAudioRecorder.git', :tag => s.version.to_s }
  s.social_media_url = 'https://github.com/QuintGao'
  s.ios.deployment_target = '9.0'
  s.vendored_frameworks = 'GKAudioRecorder.framework'
end
