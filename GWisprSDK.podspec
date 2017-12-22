
Pod::Spec.new do |s|

  s.name         = "GWisprSDK"
  s.version = "1.0.1"
  s.summary      = "This is the Fon Wispr for iOS devices."
  s.homepage     = "https://github.com/YinJone/WPASDK_gotell"
  s.license      = "MIT"
  s.author       = { "Jone.yin" => "yin_jone@163.com" }
  s.ios.deployment_target = '9.0'
  s.vendored_framework = 'WisprSDK.framework'
  s.frameworks = "Foundation"
  s.requires_arc = true
  s.source = { git: 'https://github.com/YinJone/WisprSDK_gotell.git', :tag => s.version}
  s.dependency 'KissXML', '5.1.2'
  s.dependency 'CocoaLumberjack', '3.3.0'

  s.xcconfig = { "HEADER_SEARCH_PATHS" => "$(SDKROOT)/usr/include/libxml2", "OTHER_LDFLAGS" => "-ObjC -lxml2" }
end