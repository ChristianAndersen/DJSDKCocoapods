Pod::Spec.new do |spec|
  spec.name         = 'DJSDK'
  spec.version      = '7.0.7'
  spec.platform     = :ios, '8.0'
  spec.license      = 'MIT'
  spec.summary      = 'A sdk for cocopods'
  spec.homepage     = 'https://github.com/ChristianAndersen/DJSDKCocoapods'
  spec.author       = { 'ChristianAndersen' => '1476756749@qq.com' }
  spec.source       = { :git => 'https://github.com/ChristianAndersen/DJSDKCocoapods.git', :tag => spec.version }
  spec.social_media_url   = "https://www.jianshu.com/u/276c4f13c37b"
  spec.requires_arc = true

  spec.preserve_paths = 'Frameworks/DJContents.framework'
  spec.framework = 'Foundation','CoreFoundation'
  spec.ios.vendored_frameworks = 'Frameworks/DJContents.framework'
end
